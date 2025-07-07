#include <iostream>
#include <string>
using namespace std;
int main(){
string str;

cin >> str;
while(str!="0"){
int count=0;
for(int i=0; i<str.length(); i++){
if(str[i]==str[str.length()-1-i]){

}
else{
    count++;
}

}

if(count==0){
cout<<"yes"<<'\n';
}
else{
cout<<"no"<<'\n'; 
}
cin >> str;
}

}