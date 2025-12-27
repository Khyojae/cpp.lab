#include <iostream>
using namespace std;

long long k=1;

long long multi(long long a, long long b, long long c){
if(b==1){
k=k*a%c;     //처음에는 나눠진거
return k;
}
k=k*k;
multi(a,b/2,c);
if(b%2==0){
return k;
}
else{
return k*a%c;
}
}


int main(){
int a,b,c;
cin >> a >> b >> c;
cout << multi(a,b,c);

    
}