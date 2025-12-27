#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
int a,b,c;
int n;
int count=0;
stack<int>st;
string str;
cin >> a;
cin >> b;
while(a>0){
c=a%b;
st.push(c);
a=a/b;
count++;
}


for(int i=0; i<count; i++){
if(st.empty()){
break;
}
if(st.top()==0 && i==0){   // 제일 처음 0
st.pop();
break;
}

for(int k=0; k<=9; k++){   // 1~9 중에 하나
if(st.empty()){
break;
}
if(st.top()==k){
str.push_back(char(48+k));
st.pop();
break;
}
}

for(int k=10; k<=35; k++){  // 10 넘어감
if(st.empty()){
break;
}
if(st.top()==k){
str.push_back(char(55+k));
st.pop();
break;
}
}
}

for(int i=0; i<count; i++){
cout << str[i];
}



}