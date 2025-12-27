#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main(){
string str;
cin >> str;
int count =1;
set<string>mp;
for(int i=1; i<=str.size(); i++){  // 자를 길이
string str1;
for(int k=0; i+k<=str.size(); k++){  // 이동 위치
mp.insert(str.substr(k,i));
}
}


cout << mp.size();
}