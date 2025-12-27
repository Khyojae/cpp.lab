#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
int n , m;
int count=0;
cin >> n >> m;

map<string , int> mp;

for(int i=0; i<n; i++){   // mp 비교할 맵 만들기
string str;
cin >> str;
mp.insert({str,i});
}


for(int i=0; i<m; i++){  // 비교해주기
string str1;
cin >> str1;
if(mp.find(str1) != mp.end()){
count ++;
}
}

cout <<  count;

}