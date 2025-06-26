#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
int main (){

int n;
cin >> n;
stack<int>mystack;
string str;

for(int i=0; i<n; i++){ //문자열 횟수
cin >> str;
for(int k=0; k<str.length();k++){  //문자 자체를 비교
if(str[k]=='('){
mystack.push('1');
}
else if(str[k]==')'){
if(mystack.empty()){
mystack.push('1');
}
else if(str[0]==')'){
mystack.push('1');    
}
else{
mystack.pop();
}
}

}
if(mystack.empty()){
cout << "YES"<<'\n';
}
else{
cout << "NO"<<'\n';
}
if(!mystack.empty()){
for(int i=0; i<=mystack.size(); i++){
mystack.pop();
}
}


}

}









