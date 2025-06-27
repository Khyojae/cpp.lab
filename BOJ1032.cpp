#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
cin >> n;

string str;
string vs;

cin >> str;
for(int i=0; i<n-1; i++){  // 처음에 먼저 문장 입력함
cin >> vs;
for(int k=0; k<str.length();k++){
if(str[k]!=vs[k]){
str[k]='?';    
}
}
}

cout << str;
}