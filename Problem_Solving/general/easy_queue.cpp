// =================== Easy Queue ====================
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    queue<int> theQueue;

    while (t--)
    {
        int op;
        cin >> op;

        switch (op)
        {
        case 1:
            int eleToPush;
            cin >> eleToPush;
            theQueue.push(eleToPush);
            break;
        case 2:
            if (!theQueue.empty())
                theQueue.pop();
            break;
        case 3:
            if (theQueue.empty())
                cout << "Empty!\n";
            else
                cout << theQueue.front() << '\n';
            break;
        }
    }

    return 0;
}
