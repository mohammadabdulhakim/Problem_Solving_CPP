// https://codeforces.com/contest/2009/problem/B


#include <iostream>
#include <vector>
#include <string>

using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int findIndex(string fourChars){

}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<string> strs(n);
        
        for(int i = 0; i< n;i++){
            cin >> strs[i]; 
        }
        for(int i = n-1; i >= 0;i--){

            for(int j = 0; j < 4 ;j++){
                if(strs[i][j] == '#'){
                    cout << j+1 << ' ';
                    break;
                }
            }
            
        }


        cout << '\n';
    }
    

    return 0;
}
