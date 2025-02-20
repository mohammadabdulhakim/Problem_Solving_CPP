#include<iostream>
using namespace std;
 
#define ll long long;
 
int main()
{
    double N , M; cin >> N >> M;
    
    int intResult = (N/M);
    int floorResult = intResult;
    int ceilResult = intResult;
    
    if((N/M) > intResult){
        ceilResult = intResult +1;
    }
    
    int roundResult = floorResult;
    if((N/M) >= (intResult+0.5)){
      roundResult = ceilResult;  
    }
 
    cout << "floor " << N <<" / "<< M << " = " << floorResult << '\n';
    cout << "ceil " << N <<" / "<< M << " = " << ceilResult << '\n';
    cout << "round " << N <<" / "<< M << " = " << roundResult << '\n';
 
     return 0;
}
