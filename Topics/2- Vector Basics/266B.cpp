#include <bits/stdc++.h>
using namespace std;

void goBackward (vector<char> &canteenQueue, int &position){
    if(position < canteenQueue.size()-1){
        if(canteenQueue[position] == 'B' && canteenQueue[position+1] == 'G'){
            canteenQueue[position] = 'G';
            canteenQueue[position+1] = 'B';
            position++;
        }
    }
}

int main()
{
    int n; cin >> n;
    int duration; cin >> duration;

    vector<char> canteenQueue(n);


    for(int i = 0; i< n; i++) {
        char std; cin >> std;
        canteenQueue[i] = std;
    }

    while(duration--){
        for(int i = 0; i < n; i++) goBackward(canteenQueue, i);
    }

    for(int i =0; i<n; i++) cout << canteenQueue[i];
    
    return 0;
}


/* AI Solution (Better)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; ) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i += 2;
            } else {
                i++;
            }
        }
    }

    cout << s << '\n';
    return 0;
}
*/