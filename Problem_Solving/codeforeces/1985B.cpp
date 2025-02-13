// https://codeforces.com/contest/1985/problem/B


#include <iostream>
using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int sumMultiples (int x, int n){
    int sum = 0;
    for(int i = x; i <= n ; i += x ){
        sum += i;
    }

    return sum;
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t;

    while(t--){
        int n;  cin >> n;
        
        int validX = 2;
        int maxMultiples = sumMultiples(2, n);

        for(int i = 3; i <= n; i++){
            int currentMultiples = sumMultiples(i, n);
            if(currentMultiples > maxMultiples){
                maxMultiples = currentMultiples;
                validX = i;
            }
        }

        cout << validX << '\n';

    }

    return 0;
}
