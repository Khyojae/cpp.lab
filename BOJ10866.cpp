#include <iostream>
#include <deque>
using namespace std;
int main(){
int n;
int k;
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
string str;
deque<int> dq;
cin >> n;
for(int i=0; i<n; i++){
cin >> str;

if(str=="push_back"){
cin >> k;
dq.push_back(k);
}

else if(str=="push_front"){
cin >> k;
dq.push_front(k);
}

else if(str=="pop_front"){
if(!dq.empty()){
cout << dq.front() << '\n';
dq.pop_front();
}
else if(dq.empty()){
cout << -1 << '\n';
}
}

else if(str=="pop_back"){
if(!dq.empty()){
cout << dq.back() << '\n';
dq.pop_back();
}
else if(dq.empty()){
cout << -1 << '\n';
}
}

else if(str=="size"){
cout << dq.size() << '\n';
}

else if(str=="empty"){
if(!dq.empty()){
cout << 0 << '\n';
}
else if(dq.empty()){
cout << 1 << '\n';
}
}

else if(str=="front"){
if(dq.empty()){
cout << -1 << '\n';
}
else if(!dq.empty()){
cout << dq.front() << '\n';
}
}
else if(str=="back"){
if(dq.empty()){
cout << -1 << '\n';
}
else if(!dq.empty()){
cout << dq.back() << '\n';
}
}
}




}