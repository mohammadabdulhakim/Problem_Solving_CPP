// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

#include<iostream>
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
        int width;
        int height;

        cin >> width;
        cin >> height;

        if(width == height){
            cout << "Square";
        }else{
            cout << "Rectangle";
        }
        cout << endl;
    }

    return 0;
}