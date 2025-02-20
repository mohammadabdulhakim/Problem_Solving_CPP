// https://www.hackerrank.com/challenges/c-tutorial-class/problem

#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int given_age){
            age = given_age;
        };
        int get_age(){
            return age;
        };
        
        void set_first_name(string fn){
            first_name = fn;
        }
        string get_first_name(){
            return first_name;
        }
        
        void set_last_name(string ln){
            last_name = ln;
        }
        string get_last_name(){
            return last_name;
        }
        
        void set_standard(int sd){
            standard = sd;
        }
        int get_standard(){
            return standard;
        }
        
        string to_string(){
            return ( std::to_string(age) + ',' + first_name + ',' + last_name + ',' + std::to_string(standard) );
        }
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        
    int age, sd; string fn, ln; cin >> age >> fn >> ln >> sd;
    
    Student s1;
    
    s1.set_age(age);
    s1.set_first_name(fn);
    s1.set_last_name(ln);
    s1.set_standard(sd);
    
    cout << age << '\n';
    cout << s1.get_last_name() << ", " << s1.get_first_name() << '\n';
    cout << s1.get_standard() << '\n';
    cout << '\n';
    
    cout << s1.to_string();
    
    return 0;
}
