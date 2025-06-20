#include <iostream>
using namespace std;
int main(){

int a;
int b=0;

for(int i=0; i<=4; i++){
    cin >> a;
    b= b+a*a;
}

cout << b%10;



}