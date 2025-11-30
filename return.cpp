#include <iostream>
using namespace std;

int sum=0;
int a=1;
int gj(int k){

if(k==1){
sum=sum+k;
return sum;
}
sum=sum+k;
return gj(--k);
}

int gjj(int k){
if(a>k){
return sum;
}
sum+=a;
++a;
cout << sum << " ";
return gjj(k);    
}

int main(){
int k;
cin >>k;
cout << gjj(k); 
}