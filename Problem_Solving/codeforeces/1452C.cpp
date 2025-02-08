// https://codeforces.com/contest/1452/problem/C

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

int movesToRemove(string &s, int &n)
{
    int indexesToRemove = 0;
    
    int squareBalance = 0;
    int bracketsBalance = 0;
    for(int i = 0; i < n; i++){
        char c = s[i];
        if(c == '['){
            squareBalance++;
            indexesToRemove++;
        }else if(c == '('){
            bracketsBalance++;
            indexesToRemove++;
        }else if(c == ']'){
            if(squareBalance < 0){
                squareBalance = 0;
            }else if(squareBalance > 0){
                squareBalance--;
                indexesToRemove++;
            }
        }else if(c == ')'){
            if(bracketsBalance < 0){
                bracketsBalance = 0;
            }else if(bracketsBalance > 0){
                bracketsBalance--;
                indexesToRemove++;
            }
        }
    }

    if(squareBalance > 0 || bracketsBalance > 0) indexesToRemove -= (squareBalance + bracketsBalance);

    return indexesToRemove / 2;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t; 
    while(t--){
        string s; cin >> s;

        int n = s.size();

        cout << movesToRemove(s, n) << '\n';
    }
    return 0;
}
