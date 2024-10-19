#include<bits/stdc++.h>
using namespace std;

// Macro to optimize input/output operations
#define egry ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Macro to define long long as ll for convenience
#define ll long long

// Function to handle input/output file redirection
void io_handler() {
    #ifndef ONLINE_JUDGE
    // Redirect input from "input.txt" and output to "output.txt"
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main() {
    // Call the function to handle I/O redirection
    io_handler();
    
    // Optimize I/O
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