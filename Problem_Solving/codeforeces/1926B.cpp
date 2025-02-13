// https://codeforces.com/contest/1926/problem/B

#include <iostream>
#include <vector>

using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
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
        // cout << "t: " << t << " n : " << n << '\n';

        vector<int> rows(n); 
        for(int i =0; i<n; i++) cin >> rows[i];
        for (int i = 0, prevRow = 0; i < n; i++)
        {
            int row = rows[i];

            if (row == prevRow && row != 0)
            {
                cout << "SQUARE" << '\n';
                break;
            }
            else if (row != prevRow && row != 0 && prevRow != 0)
            {
                cout << "TRIANGLE" << '\n';
                break;
            }

            prevRow = row;
            row = 0;
        }
    }

    return 0;
}
