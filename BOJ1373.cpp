#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;
int main(){
string str;
stack<int>st;
stack<int>vc;
int sum=0;
int count=0;
cin >> str;
for(int i=0; i<str.length(); i++){


int num = str[str.length()-i-1]-'0';
st.push(num);
count++;


if(count==3){
for(int i=0; i<3; i++){
int a = st.top();
sum=sum+a*pow(2,2-i);
st.pop();
count=0;
}
vc.push(sum);
sum=0;
}
}

if(!st.empty()){  // 못나온거 빼기
int value=0;
int j=0;
int l=st.size();
while(!st.empty()){
value+=st.top()*pow(2,l-1-j);
st.pop();
j++;
}
vc.push(value);
}

if(vc.size()==1 && vc.top()==0){  // 0만 있으면
cout  << vc.top();
return 0;
}

bool leading = true;
while(!vc.empty()){   // 앞자리 0만있는거 방지
if(vc.top()==0 && leading){
vc.pop();
leading = false;
continue;
}

int b=vc.top();
cout << b ;
vc.pop();
leading = false;
}

}

