// https://codeforces.com/contest/1999/problem/A

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
 
 
        int n;
        cin >> n;
 
        int first_digit = n/10;
        int second_digit = n - (first_digit*10);
        cout << first_digit + second_digit << endl;
        
    }
 
    return 0;
}