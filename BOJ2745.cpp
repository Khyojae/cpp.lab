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
for(int p=str.length()-1; p>=0;p--){
for(int i=0; i<10; i++){
if(str[p]== char(48+i)){
sum+=(i+1)*pow(b,p);
}
}
for(int i=0; i<26; i++)
if(str[p] == char(65+i)){
sum+=(10+i)*pow(b,p);
}
}
cout << sum;



}



