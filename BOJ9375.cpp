#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin >> n;
map<string, int>mp;
for(int i=0; i<n; i++){
int m;
cin >> m;
mp.clear();
int num;
num=0;
for(int k=0; k<m; k++){
string str;
string str1;

cin >> str >> str1;
mp.insert({str1,num});
mp[str1]++;
}
int count=1;
for(auto it:mp){
count*=(it.second)+1; 
}


cout << count-1;
}




}