#include<iostream>
using namespace std;

int main(){
    
    int age;

    cout << "What is your age? : ";
    cin >> age;

    int age_in_seconds = age * 365 * 24 * 60 * 60;

    cout << "Your age in seconds is : " << age_in_seconds << " seconds." << endl;

    return 0;
}