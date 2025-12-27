#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
string str;
int a;
int b;
int sum=0;
cin >> str;
cin >> b;
for(int p=0; p<str.length();p++){
for(int i=0; i<10; i++){
if(str[p]== char(48+i)){
sum+=(i)*pow(b,str.length()-1-p);
}
}
for(int i=0; i<26; i++)
if(str[p] == char(65+i)){
sum+=(10+i)*pow(b,str.length()-1-p);
}
}
cout << sum;



}



