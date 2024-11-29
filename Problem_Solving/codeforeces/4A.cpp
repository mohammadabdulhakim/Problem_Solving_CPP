// 4A - Watermelon

#include<iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight; 

    if(weight % 2 == 0 && weight != 2 && weight != 0 && weight != -2){
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}