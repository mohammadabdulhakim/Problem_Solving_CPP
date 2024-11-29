// 	1926A - Vlad and the Best of Five

#include<bits/stdc++.h>
using namespace std;

#define egry ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void io_handler() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main() {
    io_handler();
    
    egry;

    int t;
    cin >> t;
    while(t--){


        string str;
        cin >> str;
        
        int str_length = str.length();

        int a_count = 0;
        int b_count = 0;
        for (int i = 0; i < str_length; i++){
            if(str[i] == 'A') a_count++;
            else b_count++;
        }

        a_count > b_count? cout << 'A': cout << 'B';
        cout << endl;
        
    }

    return 0;
}