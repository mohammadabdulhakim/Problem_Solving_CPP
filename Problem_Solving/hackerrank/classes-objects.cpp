#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int scores[5];
        int totalScore;
        
        void input(int s[]){
            for(int i = 0; i < 5; i++){
                scores[i] = s[i];
            }
        }
        
        int calculateTotalScore(){
            totalScore = 0;
            
            for(int i=0; i< 5; i++){
                totalScore += scores[i];
            }
            
            return totalScore;
        }
};

int main() {
    int n; cin >> n;
        
    int studentsScoredHigherThanHer = 0;
    int herGrade = 0;
    for(int i = 0; i < n; i++)
    {
        Student student;
        
        int scores[5];
        for(int i = 0; i < 5; i++){
            cin >> scores[i];
        }
        student.input(scores);
        
        int studentGrade = student.calculateTotalScore();
        if(i == 0) herGrade = studentGrade;
        else{
            if(studentGrade > herGrade) studentsScoredHigherThanHer++;
        }
    }
     
     cout << studentsScoredHigherThanHer;
    return 0;
}
