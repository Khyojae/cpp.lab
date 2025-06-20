#include <iostream>
using namespace std;

int factorial(int a){
int b=a;
 if(a==1){
return 1;
 }   

 for(int i=a; i>=1; i--){
    a= a*i;
 }

return a/b;
}

int main(){
int a;
int b;

cin >> a >> b;



int d= factorial(a);
int e= factorial(a-b);
int f= factorial(b);

cout << d/(e*f);
}