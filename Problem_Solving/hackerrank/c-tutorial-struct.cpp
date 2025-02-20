#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    int age, standard; string first_name, last_name; cin >> age >> first_name >> last_name >> standard;
    
    Student s1;
    s1.age = age;
    s1.first_name = first_name;
    s1.last_name = last_name;
    s1.standard = standard;
    
    cout << s1.age << " " << s1.first_name << " " << s1.last_name << " " << s1.standard;
    
    return 0;
}
