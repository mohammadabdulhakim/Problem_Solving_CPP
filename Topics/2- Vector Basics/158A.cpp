#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int k; cin >> k;

    vector<int> participants;
    participants.reserve(n);

    while(n--) {
        int points; cin >> points;
        participants.push_back(points);
    }


    int countOfAdvancers = 0;
    for(int participant: participants){
        if(participant >= participants[k-1] && participant > 0) 
            countOfAdvancers++;
    }
    
    cout << countOfAdvancers;
    
    return 0;
}

/* Another Solution by AI
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= a[k-1] && a[i] > 0)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
*/