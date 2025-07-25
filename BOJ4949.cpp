#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
stack<string>st;

string str;
getline (cin,str);

while(str!="."){
for(int i=0; i<str.length(); i++){
if(str[i]=='('){  // 여는 괄호
st.push("(");
}
if(str[i]=='['){  // 여는 괄호
st.push("[");
}

if(str[i]==')'){  // 닫는 괄호
if(st.empty()){
st.push(")");
}
else if(st.top()=="["){
st.push("]");
}
else if(st.top()=="]"){
st.push("]");
}
else if(st.top()==")"){
st.push(")");
}

else if(st.top()=="("){
st.pop(); 
//cout << "yes" << '\n';   
}
}

if(str[i]==']'){  // 닫는 괄호
if(st.empty()){
st.push("]");
}
else if(st.top()=="("){
st.push(")");
}

else if(st.top()==")"){
st.push(")");
}
else if(st.top()=="]"){
st.push("]");
}

else if(st.top()=="["){
st.pop(); 
//cout << "yes" << '\n';   
}
}
}
if(!st.empty()){
cout << "no" << '\n';
}
else{
cout << "yes" << '\n';
}
while(!st.empty()){
st.pop();
}
getline (cin,str);
}



}