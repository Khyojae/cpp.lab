#include <iostream>
#include <string>
using namespace std;
int main(){
string str;
int k=0;
int p=0;
int q=0;
int a=0;
int b=0;

cin >> str;
for(int i=0; i<6; i++){  //홀수 짝수 나눠서
if(str[0]=='*'){  //0
for(int i=1; i<=6; i++){
    p=p+str[2*i]-'0';
}
for(int i=0; i<6; i++){
    q=q+str[2*i+1]-'0';
}
cout<< 10-(p+q)%10;

}

if(str[1]=='*'){
for(int i=0; i<1; i++){
    a=a+str[2*i]-'0';
}
for(int i=0; i<1; i++){
    b=b+str[2*i+1]-'0';
}
for(int i=1; i<=6; i++){
    p=p+str[2*i]-'0';
}
for(int i=1; i<6; i++){
    q=q+str[2*i+1]-'0';
}
cout<< 10-(a+b+p+q)%10;
}

if(str[2]=='*'){
for(int i=0; i<1; i++){
    a=a+str[2*i]-'0';
}
for(int i=0; i<1; i++){
    b=b+str[2*i+1]-'0';
}

for(int i=1; i<=6; i++){
    p=p+str[2*i]-'0';
}
for(int i=1; i<6; i++){
    q=q+str[2*i+1]-'0';
}
cout<< 10-(a+b+p+q)%10;
}

if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}
if(str[0]=='*'){

}

}

if(str[12]=='*'){ //마지막 번호 예외처리
for(int i=0; i<6; i++){
    p=p+str[2*i]-'0';
}
for(int i=0; i<6; i++){
    q=q+str[2*i+1]-'0';
}
cout<< 10-(p+q)%10;
}

}