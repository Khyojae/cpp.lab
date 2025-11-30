#include <iostream>
#include <map>
using namespace std;
int main(){
int n, m;
cin >> n >> m;
int count=0;
map<int ,string >mp;
map<int ,string >mq;
map<int ,string >hi;

for(int i=0; i<n; i++){  //듣
string str1;
cin >> str1;
mp.insert({i,str1});
}

for(int i=0; i<m; i++){ //보
string str2;
cin >> str2;
mq.insert({i,str2});
}

if(n>m){
for(int i=0; i<m; i++){
if(mp[i]==mq[i]){
count++;
hi.insert({i,mp[i]});
}
}
}

else{
for(int i=0; i<n; i++){
if(mp[i]==mq[i]){
count++;
hi.insert({i,mq[i]});
}
}
}

cout << count << '\n';
for(auto it = hi.begin(); it !=hi.end(); it++){
cout << it->first << '\n';
}

}