// https://codeforces.com/contest/1915/problem/C

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool hasSqrt(ll num)
{
    ll root = sqrt(num);
    return ((root * root) == num);
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t;
    cin >> t;

    while (t--)
    {
        
        int n;
        cin >> n;
        
        ll sum = 0;
        for(int i = 0; i < n; i++){
            int squaresCount; cin >> squaresCount;
            sum += squaresCount;
        }

        if(hasSqrt(sum)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
