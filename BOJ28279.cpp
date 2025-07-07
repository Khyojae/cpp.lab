#include <iostream>
#include <deque>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);

deque<int> dq;
int n;
cin >> n;
for(int i=0; i<n; i++){
int k;
int p;
cin >> k;
if(k==1){
cin >> p;
dq.push_front(p);
}

else if(k==2){
cin >> p;
dq.push_back(p);
}

else if(k==3){
if(!dq.empty()){
cout << dq.front()<<'\n';
dq.pop_front();

}    
else if(dq.empty()){
cout << -1<<'\n';
}
}
else if(k==4){
if(!dq.empty()){
cout << dq.back()<<'\n';
dq.pop_back();

}    
else if(dq.empty()){
cout << -1<<'\n';
}
}
else if(k==5){
cout << dq.size()<<'\n';
}
else if(k==6){
if(dq.empty()){
cout << 1<<'\n';
}
else if(!dq.empty()){
cout << 0<<'\n';
}
}
else if(k==7){
if(!dq.empty()){
cout << dq.front()<<'\n';
}
else if(dq.empty()){
cout << -1<<'\n';
}
}
else if(k==8){
if(!dq.empty()){
cout << dq.back()<<'\n';
}
else if(dq.empty()){
cout << -1<<'\n';
}
}
}
}