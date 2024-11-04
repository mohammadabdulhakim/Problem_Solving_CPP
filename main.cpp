#include<iostream>
using namespace std;

int main(){
    int floor;
    cin >> floor;

    switch(floor){
        case 1:
        case 2:
            cout << "Far";
            break;
        case 3:
        case 4:
            cout << "Almost";
            break;
        case 5:
            cout << "Here";
    }
    
    return 0;
}