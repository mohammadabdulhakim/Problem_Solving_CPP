// https://www.hackerrank.com/challenges/maximum-element/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
    stack <int> sk;
    stack <int> maxSk;
    vector <int> vectorToReturn;
    for(int i = 0; i < operations.size(); i++){
            char s =  operations[i][0];

            if (s == '1'){
                int num = stoi(operations[i].substr(2));
                if(maxSk.empty() || maxSk.top() <= num) maxSk.push(num);
                sk.push(num);
                // i++;
            }
            else if(s == '2'){
                if(!sk.empty()){
                    if( !maxSk.empty() && maxSk.top() == sk.top()) maxSk.pop();
                    sk.pop();
                }
            }
            else if(s == '3'){
                if(!maxSk.empty()){
                    vectorToReturn.push_back(maxSk.top());
                }
            }   
    }
    
    return vectorToReturn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

/*
 ========================= Previous Solution (wrong) ==============================
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

// int maxNum(stack<int> sk, int n){
//     int max = 0;
//     for(int i = 0; i<n; i++){
//         if(max < sk.top()) max = sk.top();
//         sk.pop();
//     }
//     return max;
// }

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t; 
    stack <int> sk;
    stack <int> maxSk;
    while(t--){
        int type; cin >> type;

        switch(type){
            case 1:
                int num; cin >> num;
                if(maxSk.empty() || maxSk.top() < num) maxSk.push(num);
                sk.push(num);
                break;
            case 2:
                if(!sk.empty()){
                    if(maxSk.top() == sk.top()) maxSk.pop();
                    sk.pop();
                }
                break;
            case 3:
                if(!sk.empty()){
                    cout << maxSk.top() << '\n';
                }else{
                    cout << 0;
                }
                break;
            }   
        }

    return 0;
}
*/
