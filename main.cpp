#include <iostream>
using namespace std;

int main()
{
    int n1, n2, ope;
    cout << "Enter your first number\n";
    cin >> n1;
    cout << "Enter your first number\n";
    cin >> n2;
    cout << "Enter the operation\n 1 > [+]\n 2 > [-]\n 3 > [*] \n 4 > [/]\n";
    cin >> ope;

    switch (ope)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2;
        break;
    case 3:
        cout << n1 << " * " << n2 << " = " << n1 * n2;
        break;
    case 4:
        cout << n1 << " / " << n2 << " = " << n1 / n2;
        break;
    default:
        cout << "Choose a valid operation";
    }

    cout << endl;

    return 0;
}