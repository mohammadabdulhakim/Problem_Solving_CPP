// https://codeforces.com/contest/1469/problem/A

#include <iostream>
#include <string>
using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

string isRS(string &s, int &n)
{
    if(n % 2 != 0) return "No";
    
    
    int openCount = 0;
    int closeCount = 0;
    int questionCount = 0;
    for(char c:s){
        if(c == '(') openCount++;
        else if(c==')') closeCount++;
        else questionCount++;
    }
    
    int requiredOpen = (n / 2) - openCount;
    int requiredClose = (n / 2) - closeCount;

    if((requiredClose + requiredOpen) < questionCount || requiredClose < 0 || requiredClose < 0) return "No";

    int balance = 0;
    for(char c:s){
        if(c == '(' || (c == '?' && requiredOpen > 0)){
            balance++;
            if(c == '?') requiredOpen--;
        }else{
            balance--;
        }

        if(balance < 0) return "No";
    }

    return "Yes";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t; 
    while(t--){
        string s; cin >> s;

        int n = s.size();

        cout << isRS(s, n) << '\n';
    }
    return 0;
}


/*
====================== Previous Solution (Wrong) ====================
#include <iostream>
#include <string>
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
    int closedBrackets = 0; // regular brackets
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '(' || s[i] == '?')  && (s[i + 1] == ')' || s[i + 1] == '?'))
        {
            closedBrackets++;
            for (int j = i - 1, k = i + 2; k < n && j >= 0; j--, k++)
            {
                if ((s[j] == '(' || s[j] == '?') && (s[k] == ')' || s[k] == '?'))
                    closedBrackets++;
            }
            if(s[i+1] == '?') i++; // this line to avoid counting "?" multiple times
        }
    }

    return closedBrackets;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t; 
    while(t--){
        string s; cin >> s;

        int n = s.size();
        int closedBrackets = regularBracketsCount(s, n);

        cout << (!(bool((closedBrackets * 2) - n))? "Yes" : "No") << '\n';
    }
    return 0;
}

*/

/*
====================== Previous Solution (Wrong) ====================
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

string isRS(string &s, int &n)
{
    int closedBrackets = 0; // regular brackets
    stack <char> sk;

    for (char c:s)
    {
        if(c == '(' || c == '?'){
            if(!sk.empty() && c == '?'){
                sk.pop();
            }else{
                sk.push('(');
            }
        }else{
            if(!sk.empty()){
                sk.pop();
            }else{
                return "No";
                break;
            }
        }
    }

    if(!sk.empty()) return "No";
    return "Yes";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t; 
    while(t--){
        string s; cin >> s;

        int n = s.size();

        cout << isRS(s, n) << '\n';
    }
    return 0;
}

*/