#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(){
map<string,int>mp;
int n;
cin >> n;
int cnt=0;
for(int i=0; i<n; i++){
string input;
cin >> input;

size_t idx = input.find('.');
input.erase(0,idx+1);
mp[input]++;
}

for(auto& [key,value] : mp){
cout << key << " " << value << '\n';
}
}