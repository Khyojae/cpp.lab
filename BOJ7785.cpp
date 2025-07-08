#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
map <string, string, greater<string>>mp;
int n;
cin >> n;
for(int i=0; i<n; i++){
string str;
string str1;
cin >> str >> str1;

if(str1=="enter"){
mp.insert({str,str1});
}

else if(str1=="leave"){
mp.erase(str);
}
}

for(auto it : mp){
cout << it.first << '\n';
}




}