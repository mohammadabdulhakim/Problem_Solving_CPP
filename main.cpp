#include<iostream>
using namespace std;

int main(){

    int intNum = 10;
    float fNum = 10.5;
    float fNum2 = 10.5F + 10.5f;
    double doubleNum = 10.44;
    string str = "New String";
    char ch = 'C';
    bool boolean = true;

    short s_int = 270;
    long l_int = 10000000;


    cout << sizeof(intNum) << " Bytes for int.\n" ;
    cout << sizeof(fNum) << " Bytes for float.\n" ;
    cout << sizeof(doubleNum) << " Bytes for double.\n" ;
    cout << sizeof(str) << " Bytes for string.\n" ;
    cout << sizeof(ch) << " Byte for char.\n" ;
    cout << sizeof(boolean) << " Byte for bool.\n" ;

    cout << sizeof(s_int) << " Byte for short integer.\n" ;
    cout << sizeof(l_int) << " Byte for long integer.\n" ;


    /*// TYPE ALIAS
            using ll_integer = long long int;
            typedef short int s_integer;
    
            ll_integer long_long_integer = 10000000000;
            s_integer short_integer = 100;
    */

    return 0;
}