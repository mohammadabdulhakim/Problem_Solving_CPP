#include<iostream>
using namespace std;


int main() {   
    int M,N ;cin >> M >> N;
    
    
    cout << (N*(M/2)) + ((M%2 !=0)? N/2:0);

    return 0;
}

