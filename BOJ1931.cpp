#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
int n;
cin >> n;
int p,q;
vector<pair<int,int>>ac;
for(int i=1; i<=n; i++){
cin >> p >> q;
ac.push_back({q,p});
}    
sort(ac.begin(),ac.end());   // 뒤


int cnt=1;
int strtime=ac[0].first;

for(int i=1; i<=n; i++){
if(ac[i].second<strtime){
continue;
}
else{
cnt++;
strtime=ac[i].first;
}
}
cout << cnt;
}

