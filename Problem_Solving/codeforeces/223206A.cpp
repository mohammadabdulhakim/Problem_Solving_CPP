#include <iostream>
#include <string>
using namespace std;


int main() {
    string s; cin >> s;

    if (s == "?") {
        cout << "a";
        return 0;
    }

    for(int i = 0, j = s.length()-1; i < j;i++, j--){
        if(s[i] == s[j] || (s[i] == '?') || (s[j] == '?')){
            if (s[i] == '?' && s[j] == '?') {
                s.replace(i,1,1,'a');
                s.replace(j,1,1,'a');
            }else {
                if(s[i] == '?'){
                    s.replace(i,1,1,s[j]);
                }else if(s[j] == '?'){
                    s.replace(j,1,1,s[i]);
                }
            }
        }else{
            cout << -1;
            return 0;
        }

    }


    if (char & middleEle = s[s.length()/2]; s.length()%2 != 0 && middleEle == '?') {
        middleEle = 'a';
    }

    cout << s;
    return 0;
}