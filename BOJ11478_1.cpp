#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
string str;
cin >> str;
int count =1;
map<string,int>mp;
string str1;
while(count<=str.length()){
for(int i=0; i<str.length(); i++){
string str1;
if(i+count<=str.length()){
for(int k=i; k<i+count; k++){
str1+=str[k];
}
mp.insert({str1,i});
}
}
count++;
}
cout << mp.size();


}