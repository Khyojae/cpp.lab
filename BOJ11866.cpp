#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
queue<int> q;
vector<int> vc;
int n,m;
int count=1;
cin >> n >> m;
for(int i=1; i<=n; i++){
q.push(i);
}
int a=q.front();
while(!q.empty()){
if(m==1){
vc.push_back(a);
q.pop();
a=q.front();
continue;
}
if(count%m==0){
a=q.front();
vc.push_back(a);
q.pop();
count =1;
}
if(q.empty()){
break;
}
a=q.front();
q.pop();
q.push(a);
count++;
}


cout << '<';
for(int i=0; i<vc.size()-1;i++){
cout<< vc[i]<<", ";
}
cout << vc[vc.size()-1];
cout << '>';




}