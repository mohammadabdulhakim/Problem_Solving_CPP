// https://codeforces.com/contest/1999/problem/B


#include <iostream>
#include <vector>
#include <string>

using namespace std;

void io_handler()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    io_handler();

    int t; cin >> t;

    while(t--){
        int sun1; cin >> sun1;
        int sun2; cin >> sun2;
        
        int sla1; cin >> sla1;
        int sla2; cin >> sla2;
        
        int wins = 0;

        // Round 1
        int round1 = 0;
        if(sun1 > sla1) round1++;
        else if(sun1 < sla1) round1--;
        if(sun2 > sla2) round1++;
        else if(sun2 < sla2) round1--;
        
        if(round1 > 0) wins++;


        // Round 2
        int round2 = 0;
        if(sun1 > sla2) round2++;
        else if(sun1 < sla2) round2--;
        if(sun2 > sla1) round2++;
        else if(sun2 < sla1) round2--;

        if(round2 > 0) wins++;


        // Round 3
        int round3 = 0;
        if(sun1 > sla1) round3++;
        else if(sun1 < sla1) round3--;
        if(sun2 > sla2) round3++;
        else if(sun2 < sla2) round3--;

        if(round3 > 0) wins++;


        // Round 4
        int round4 = 0;
        if(sun1 > sla2) round4++;
        else if(sun1 < sla2) round4--;
        if(sun2 > sla1) round4++;
        else if(sun2 < sla1) round4--;

        if(round4 > 0) wins++;


        cout << wins << '\n';

        
        // if(sun1 + sun2 > sla1 + sla2 && sun1 > sla1 && sun1 > sla2 && sun2 > sla1 && sun2 > sla2) cout << 4 << '\n';
        // else if(sun1 + sun2 < sla1 + sla2 && sun1 < sla1 && sun1 < sla2 && sun2 < sla1 && sun2 < sla2) cout << 0 << '\n';
        // else if(sun1 + sun2 == sla1 + sla2) cout << 0 << '\n';
        // else if(sun1 + sun2 < sla1 + sla2) cout << 0 << '\n';
        // else if(sun1 + sun2 > sla1 + sla2) cout << 2 << '\n';
    
    }
    

    return 0;
}


/*
6
3 8 2 6    - 2
1 1 1 1    - 0
10 10 2 2  - 4
1 1 10 10  - 0
3 8 7 2    - 2
1 8 7 2    - 0
*/
