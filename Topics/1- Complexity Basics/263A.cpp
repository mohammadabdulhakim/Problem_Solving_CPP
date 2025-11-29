#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];

    int srcIJ[2];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int &ele = matrix[i][j];
            cin >> ele;
            if(ele == 1){
                srcIJ[0] = i;
                srcIJ[1] = j;
            }
        }
    }

    int stepsNeeded = abs(srcIJ[0]-2) + abs(srcIJ[1]-2);
    cout << stepsNeeded;
}

/* Optimized Solution

#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    for (int i = 1; i <= 5; ++i)
        for (int j = 1; j <= 5; ++j) {
            if (!(cin >> x)) return 0;
            if (x == 1) {
                cout << abs(i - 3) + abs(j - 3) << '\n';
                return 0;
            }
        }
    return 0;
}
    
*/