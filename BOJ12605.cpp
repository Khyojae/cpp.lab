#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main(){
stack<string>st;
int n;
cin >> n;
string str ;
string input = "";
int count=1;
cin.ignore();

for(int i=0; i<n; i++){
string str;
getline(cin,str);

for(int i=0; i<str.length(); i++){
if(str[i]!=' '){
input+=str[i];
}

if(str[i+1]==' '){
st.push(input);
input = "";
}
}
st.push(input);


cout << "Case #" << count << ":" <<' ';
count++;
while(!st.empty()){
cout << st.top() << ' ';
st.pop();
}
input="";
cout << '\n';

}



}
