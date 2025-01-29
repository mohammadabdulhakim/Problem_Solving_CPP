// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
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

void sortNumbers(vector<ll> &numbers){
    for(int i = 0; i < numbers.size();i++){
        for(int k = i+1; k < numbers.size(); k++){
            if(numbers[i] < numbers[k]){
                ll temp = numbers[i];
                numbers[i] = numbers[k];
                numbers[k] = temp;
            }
        }
    }
}

int main() {
    io_handler();
    egry;

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<ll> numbers(n);
    for(int i =0; i< n; i++){
        cin >> numbers[i];
    }

    sortNumbers(numbers);
    ll output = 0;
    for(int i =0; i<k;i++){
        if(numbers[i] > 0){
            output += numbers[i];
        }
    }

    
    cout << output;

    return 0;
}

