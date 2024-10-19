//  1999A A + B Again?

#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int first_digit = n/10;
    int second_digit = n - (first_digit*10);
    cout << first_digit + second_digit << endl;

    return 0;
}