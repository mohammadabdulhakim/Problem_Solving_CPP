#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    long long a,b,c,d; cin >> a >> b>>c>>d;
    
    double aa = b * log(a), cc = d * log(c);
    
    if(aa > cc){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}