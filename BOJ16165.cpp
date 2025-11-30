#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
multimap <string,string> mp;
multimap <string,string> mp1;
int n,m;
cin >> n >> m;
for(int i=0; i<n; i++){
string girlname;
cin >> girlname;

int k;
cin >> k;

for(int i=0; i<k; i++){
string mem;
cin >> mem;
mp.insert({girlname,mem});
mp1.insert({mem,girlname});
}
}
//sort(mp1.begin(),mp1.end());

for(int p=0; p<m; p++){
string name;
cin >> name;

int select=-1;
cin >> select;

if(select==1){
auto it = mp1.find(name);
if(it != mp1.end()){
cout << it->second << '\n';
}
}

else if(select==0){
auto range = mp.equal_range(name);
vector<string>members;

for(auto it = range.first; it!=range.second; ++it){
members.push_back(it->second);
}
sort(members.begin(),members.end());
for(auto &mem : members){
cout << mem << '\n';
}


}
}

}