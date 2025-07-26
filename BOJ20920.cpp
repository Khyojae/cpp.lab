#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

bool cmp(const pair<string,int>& a, const pair<string,int>& b){
if(a.second!=b.second){
return a.second>b.second;
}
else if(a.first.length()!=b.first.length()){
return a.first.length()>b.first.length();
}
else if(a.first.length()==b.first.length()){
return a.first>b.first;
}
}



int main(){
int n,m;
cin >> n >> m;
map<string,int>mp;

for(int i=0; i<n; i++){
string str;
cin >> str;
if(str.length()>=m){
mp[str]++;
}
}
vector<pair<string,int>> vc(mp.begin(),mp.end());
sort(vc.begin(),vc.end(),cmp);
for(const auto &it : vc){
cout << it.first << '\n';
}

}