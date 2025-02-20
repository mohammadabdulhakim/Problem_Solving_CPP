#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string fn1,sn1; cin >> fn1 >> sn1;
    string fn2,sn2; cin >> fn2 >> sn2;
    
    if(sn1 == sn2){
        cout << "ARE Brothers";
    }else{
        cout << "NOT";
    }
    
    return 0;
}