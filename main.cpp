#include <iostream>
using namespace std;

int main(){
    cout << "THE START OF THE CODE ---------------------------------------" << endl;

    string products[] = {"Item1","Item2","Item3"};
    string sizes[] = {"Small","Medium","Large"};

    int productsSize = sizeof(products) / sizeof(products[0]);
    int sizesSize = sizeof(sizes) / sizeof(sizes[0]);

    for(int i = 0;i<productsSize;i++){
        cout << products[i] << endl;

        for(int j = 0;j<sizesSize;j++){
            cout << sizes[j];
            if(j < sizesSize-1){
                cout << ", ";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}