#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int operations = INT_MAX;
    for(int i = 0; i < n; i++){
        int x;
        int newOperations = 0;
        cin >> x;

        while(x%2 == 0){
            x /= 2;
            newOperations++;
        }

        if(operations > newOperations){
            operations = newOperations;
        }
    }

    cout << operations;
}


/* AI solution
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int cnt = 0;
    while (true) {
        bool all_even = true;
        for (auto &x : A) {
            if (x % 2 != 0) {
                all_even = false;
                break;
            }
        }
        if (!all_even) break;
        for (auto &x : A) {
            x /= 2;
        }
        cnt++;
    }

    cout << cnt << "\n";
    return 0;
}
*/

/* Ultra-Clean Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, minOps = INT_MAX;
    cin >> n;
    while (n--) {
        cin >> x;
        int ops = 0;
        while (x % 2 == 0) {
            x /= 2;
            ops++;
        }
        minOps = min(minOps, ops);
    }
    cout << minOps << '\n';
}
*/