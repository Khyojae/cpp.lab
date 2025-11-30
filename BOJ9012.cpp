#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
int main (){

int n;
cin >> n;

string str;
string result;
for(int i=0; i<n; i++){ //문자열 횟수
stack<int>mystack;
result = "YES";
cin >> str;
for(int k=0; k<str.length();k++){  //문자 자체를 비교
if(str[k]=='('){
mystack.push('1');
}
else if(str[k]==')'){
if(!mystack.empty()){
mystack.pop();
}

else{
result= "NO";

}
}

}

if(!mystack.empty()){
result = "NO";
}
cout << result << endl;


}

}









