#include <iostream>
using namespace std;
int main(){
int k;
int a, b, r;
a>b;
int temp;
cin >> a >>b;
r=a%b;
k=a*b;
while(r!=0){

//temp=a;
a=b;
b=r;
r=a%b;
}
cout << b << " " << k/b;
}