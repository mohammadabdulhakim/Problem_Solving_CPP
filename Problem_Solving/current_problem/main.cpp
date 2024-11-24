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
        string correct_ans;
        cin >> correct_ans;
        string f;
        cin >> f;
        string a;
        cin >> a;

        int a_score = 0;
        int f_score = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == correct_ans[i] || a[i] == '?') a_score++;
            if(f[i] == correct_ans[i] || f[i] == '?') f_score++;
        }

        string output = (a_score == f_score)? "Abdo":(a_score > f_score)? "Abdo":"Folka";
        cout << output << endl;
    }

    return 0;
}