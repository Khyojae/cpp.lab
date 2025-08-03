#include <iostream>
#include <vector>
using namespace std;
bool is_prime(long long n){
if(n<2) return false;
for(long long i=2; i*i<=n; i++){
if(n%i==0) return false;
}
return true;
}

int main(){
long long count;
cin >> count;
for(int i=0; i<count; i++){
long long num;
cin >> num;

if(is_prime(num)==true){
cout << num << '\n';

}
else{
num+=1;
while(is_prime(num)==false){
num+=1;
}
cout << num << '\n';

}
}



}