#include <iostream>
using namespace std;

long long fibonachi(long long k){
long long a=1;
long long b=1;
long long c=a+b;
if(k==1 || k==2){
return 1;
}  
while(k>2){
k--;
long long tmp = b;
b= c;
a =tmp;
c=(a+b)%10007;
}
return b;
}

long long fibonachi1(long long k){
long long a=0;
long long b=1;
long long c=a+b;
if(k==1){
return 0;
}    
if(k==2 || k==3 ){
return 1;
}    
while(k>=3){
k--;
long long tmp = b;
b= c;
a =tmp;
c=(a+b)%10007;
}
return b;
}

int main(){
long long n;
cin >>n;

cout << fibonachi(n)%10007 << '\n';

cout << fibonachi1(n)%10007 << '\n';
cout << ((fibonachi(n))+(fibonachi1(n)))%10007;

}