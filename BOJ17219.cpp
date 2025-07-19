#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){

int n,m;
cin >> n >> m;
map <string, string> mp;

for(int i=0; i<n; i++){
string str;
string str1;
cin >> str >> str1;
mp.insert({str,str1});
}

for(int k=0; k<m; k++){
string str2;
cin >> str2;
auto it = mp.find(str2);
if(it !=mp.end()){
cout << mp[str2] << '\n';
}
}

}