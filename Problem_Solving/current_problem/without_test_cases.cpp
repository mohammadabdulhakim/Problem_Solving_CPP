#include<iostream>
using namespace std;


string to_alternating_case(string str)
{
  for(char &c :str){
    bool uppercase = int(c) >= 65 && int(c) < 97;
    bool lowercase = int(c) >= 97;
    if(uppercase){
      c = char(c+32);
    }else if(lowercase){
      c = char(c-32);
    }
  }
	return str;
}

int main(){

    char asccii = 'A';
    cout << to_alternating_case("ALTerNAtiNG CaSe <=> altERnaTIng cAsE");
    return 0;
}
// 65
// 97
