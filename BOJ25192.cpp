#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
int n;
cin >> n;
map<string,int>mp;
int count=0;
for(int i=0; i<n; i++){
string str;
cin >> str;
if(str=="ENTER"){
mp.clear();
map<string,int>mp;
}
else{
if(mp.find(str)!=mp.end()){
mp[str]+=1;
}
else{
mp.insert({str,0});
count++;
}
}

}

cout << count;


}