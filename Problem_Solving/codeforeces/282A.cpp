// https://codeforces.com/problemset/problem/282/A

#include<iostream>
#include<vector>
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
    
    int n; cin >> n;
    int x = 0;
    
    for(int i=0;i<n;i++){
        string operation; cin >> operation;

        if(operation[1] == '+'){
            x++;
            continue;
        } x--;
    }

    cout << x;

    return 0;
}
