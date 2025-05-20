#include <iostream>
#include <string>
using namespace std;
int main(){
string p;
int count=0;
cin >> p;
for(int i=0 ;i<p.length(); i++){
if('A'<=p[i]&&p[i]<='C'){
count=count+3;
}

if('D'<=p[i]&&p[i]<='F'){
count=count+4;
}

if('G'<=p[i]&&p[i]<='I'){
count=count+5;
}

if('J'<=p[i]&&p[i]<='L'){
count=count+6;
}

if('M'<=p[i]&&p[i]<='O'){
count=count+7;
}

if('P'<=p[i]&&p[i]<='S'){
count=count+8;
}

if('T'<=p[i]&&p[i]<='V'){
count=count+9;
}

if('W'<=p[i]&&p[i]<='Z'){
count=count+10;
}


}


cout << count;
}