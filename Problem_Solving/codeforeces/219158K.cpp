#include <iostream>
using namespace std;
 
int main(){
    int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
    
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 1; i < 3; i++){
        int a = arr[i];
        if(max < a) max = a;
        if(min > a) min = a;
    }
    
    cout << min << " " << max;
    
    return 0;
}