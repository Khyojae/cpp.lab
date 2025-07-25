#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
int n;
cin >> n;
cin.ignore();
string str;

int cnt=0;
while(n>0){

getline(cin,str);
stack<string>st;
for(int i=0; i<str.length(); i++){


if(str[i]=='A'){
if(st.empty()){
st.push("A");
}
else if(st.top()=="B"){
st.push("A");
}
else if(st.top()=="A"){
st.pop();
}
}

else if(str[i]=='B'){
if(st.empty()){
st.push("B");
}
else if(st.top()=="A"){
st.push("B");
}
else if(st.top()=="B"){
st.pop();
}
}
}

if(st.empty()){
cnt++;
}

while(!st.empty()){
st.pop();
}
n--;    
}

cout << cnt;

}