#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int up=0;
int cnt;
cin >> cnt;
vector<bool>vc(1000001,true);
for(int i=0; i<cnt; i++){
int num;
cin >> num;
fill(vc.begin(),vc.end(),true);
vector<int>ac(1000001);
vc[0]=vc[1]=false;
for(int i=2; i*i<=num; i++){
if(vc[i]==true){
for(int k=i*i; k<=num; k+=i){
vc[k]=false;
}
}
}

for(int i=1; i<=num; i++){
if(vc[i]==true){
ac.push_back(i);

}
}
ac.erase(remove(ac.begin(),ac.end(),0),ac.end());
int first=0;
int last=ac.size()-1;
int ans=0;
while(first<=last){
if(ac[first]+ac[last]==num){
ans++;
first++;
last--;
}
else if(ac[first]+ac[last]<num){
first++;
}
else if(ac[first]+ac[last]>num){
last--;
}
}

cout << ans << '\n';

}





}

