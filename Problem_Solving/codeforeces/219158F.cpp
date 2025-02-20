#include<iostream>
#include<iomanip>
using namespace std;
 
#define ll long long;
 
int main()
{
    long long N, M; cin >> N >> M;
    
    long long result = N%10 + M%10;
    
    cout << result;
     return 0;
}