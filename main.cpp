#include <iostream>
using namespace std;


int main(){

    int points = 0;
    int answers[3];

    int sequences[3][4] = {
        {1,5,9, 13},
        {2,4,8,16},
        {125,25,5,1}
    };


    string message = "Write the last number in this sequence: ";

    cout << message << "[1, 5, 9, ...] : ";
    cin >> answers[0];
    cout << message << "[2, 4, 8, ...] : ";
    cin >> answers[1];
    cout << message << "[125, 25, 5, ...] : ";
    cin >> answers[2];

    if(answers[0] == sequences[0][3]) points++;
    if(answers[1] == sequences[1][3]) points++;
    if(answers[2] == sequences[2][3]) points++;
    

    cout << "Your score: " << points << endl;

    return 0;
}