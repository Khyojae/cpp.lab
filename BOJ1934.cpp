#include <iostream>
using namespace std;
int main(){
int k;
int a, b, r;

int temp;
int n;

cin >> n;
for(int i=0; i<n; i++){
cin >> a >>b;
swap(a,b);
r=a%b;
k=a*b;
while(r!=0){

//temp=a;

a=b;
b=r;
r=a%b;

}
cout <<  k/b << '\n';
}

}