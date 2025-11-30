#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main (){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
int k;
stack<int> mystack;
string str;
cin >> n;

for(int i=0; i<n; i++){
cin>>str;
if(str=="1"){
cin >> k;
mystack.push(k);
}
if(str=="2"){
if(mystack.empty()){
cout<<"-1"<<'\n';
}
else{
cout << mystack.top()<<'\n';
mystack.pop();
}
}
if(str=="3"){
cout << mystack.size()<<'\n';
}
if(str=="4"){
if(mystack.empty()){
cout << "1"<<'\n';
}
else{
cout << "0"<<'\n';
}
}
if(str=="5"){
if(mystack.empty()){
cout << "-1"<<'\n';
}
else{
cout << mystack.top()<<'\n';
}
}
}

}