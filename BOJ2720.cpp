#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
int a=0;
int b=0;
int c=0;
int d=0;
int input=0;
cin >> input;
if(input>=25){
a=input/25;
input=input-25*a;
}

if(input>=10){
b=input/10;
input=input-10*b;
}

if(input>=5){
c=input/5;
input=input-5*c;
}

if(input>=1){
d=input/1;
input=input-1*d;
}
cout << a << " " << b << " " << c << " " << d << '\n';
}


}