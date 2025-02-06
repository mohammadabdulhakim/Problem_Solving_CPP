// https://codeforces.com/problemset/problem/26/B

#include <iostream>
#include <string>
#include <stack>
using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int regularBracketsCount(string &s, int &n)
{
    stack <char> sk;
    int closedBrackets = 0; // regular brackets
    for (char c:s)
    {
        if(c == '('){
            sk.push(c);
        }else{
            if(!sk.empty()){
                sk.pop();
                closedBrackets++;
            }
        }
    }

    return closedBrackets;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    string s;
    cin >> s;
    int n = s.size();
    

    cout << regularBracketsCount(s, n) * 2;
    return 0;
}
