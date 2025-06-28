#include <iostream>
#include <math.h>
using namespace std;
long long fact=1;
long long fact2=1;

long long factorial(long long p, long long q){

for(int i=q-p+1 ; i<=q; i++){
fact *=i;
fact/=fact2;
fact2++;
}
return fact;
}




int main(){
int n,m;
int k;
cin >> k;
for(int i=0; i<k; i++){
cin >> n >> m;
cout << factorial(n,m);
}



}