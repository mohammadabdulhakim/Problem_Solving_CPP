#include<iostream>
#include<vector>
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

    int n;
    cin >> n;

    // int* numbers = new int[n];
    vector<int> numbers(n);
    vector<int> output;

    for(int i = 0; i<n; i++){
        cin >> numbers[i];
    }

    // Reverse on finding zero
    for(int i = 0; i < n; i++){
        if(numbers[i] == 0){
            for(int end = i-1, start = 0 ; start < end; end--, start++){
                int temp = output[start];
                output[start] = output[end];
                output[end] = temp;
            }
        }

        output.push_back(numbers[i]);
    }


    // Print the output
    for(int num :output){
        cout << num << " ";
    }

    return 0;
}

/*

loop on the array:
    if number != 0, add the number to a temp array
    else number == 0, reverse the the temp array and add their elements to the output

*/