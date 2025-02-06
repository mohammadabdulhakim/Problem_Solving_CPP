// https://codeforces.com/problemset/problem/1374/C

#include <iostream>
#include <string>
#include <stack>
using namespace std;

void io_handler() {
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
        int n; cin >> n;
        string s; cin >> s;
        stack <char> sk;
        int moves = 0;
        
        for(char c: s){
            if(c == '('){
                sk.push('(');
            }else{
                if(!sk.empty()){
                    sk.pop();
                }else{
                    moves++;
                }
            }
        }
    
        cout << moves << '\n';
    }

    return 0;
}


//  Another Solution (ChatGPT)

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int balance = 0, minBalance = 0;

        // Traverse the string and track the balance of parentheses
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }

            // Keep track of the lowest balance encountered
            minBalance = min(minBalance, balance);
        }

        // The number of moves required to make the sequence valid is the absolute value
        // of the lowest balance encountered (because we need to move opening brackets).
        cout << -minBalance << endl;
    }

    return 0;
}

*/


// ============== Previous Solution (wrong) =================
/*
#include <iostream>
#include <string>
using namespace std;

void io_handler() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int regularBracketsCount (string &bracketsStr, int &n){
    int closedBrackets = 0; // regular brackets
        for(int i =0; i< n; i++){
            if(bracketsStr[i] == '(' && bracketsStr[i+1] == ')'){
                closedBrackets++;
                for(int j = i-1, k = i+2; k < n && j >= 0 ; j--,k++){
                    if(bracketsStr[j] == '(' && bracketsStr[k] == ')') closedBrackets++;
                }
            }
        }

        return closedBrackets;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        string bracketsStr; cin >> bracketsStr;

        int closedBrackets = regularBracketsCount(bracketsStr, n);

        int movesRequired = ((n/2) - closedBrackets); // movesRequired = irregularBrackets / 2

        cout << movesRequired << '\n';        
    }

    return 0;
}

*/