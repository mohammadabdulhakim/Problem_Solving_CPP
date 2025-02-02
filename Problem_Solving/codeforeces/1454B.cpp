#include<iostream>
using namespace std;

#define egry ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void io_handler() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main() {
    io_handler();
    egry;
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int winnerIndex = -1;

        int* numbers = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        
        int freqArr[2 * 100000];
        for(int i =0; i<= n; i++){
            freqArr[i] = 0;
        }

        for(int i = 0; i<n; i++){
            int currentNum = numbers[i];
            freqArr[currentNum]++;
        }

        int winnerNum = -1;
        for(int i = 0; i <= n; i++){
            if(freqArr[i] == 1){
                winnerNum = i;
                break;
            }
        }

        for(int i =0; i<n; i++){
            if(numbers[i] == winnerNum) {
                winnerIndex = i+1;
            }
        }


        cout << winnerIndex << endl;
    }
   

    return 0;
}


/*
#include<iostream>
using namespace std;

#define egry ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void io_handler() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

// Time limit exceeded
bool isRepeated(int num, int numbers[], int n, int index){
    for(int i = 0; i < n; i++){
        if(i == index) continue;
        if(numbers[i] == num) return true;
    }

    return false;
}

int main() {
    io_handler();
    egry;
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int winner = -1;

        int* numbers = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        
        for(int i = 1; i <= n; i++){
            int num = numbers[i-1];
            if(isRepeated(num,numbers,n, i-1)) continue;
            if(winner == -1) {
                winner = i;
            }
            if(num < numbers[winner-1]) winner = i;            
        }

        cout << winner << endl;
    }
   

    return 0;
}


*/