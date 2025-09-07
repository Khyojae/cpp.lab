#include <iostream>
using namespace std;
long long sum1(long long a, long long b){
return (a+b)*(a-b);
}
int main(){
int a,b;
cin >> a >> b;
cout << sum1(a,b);
}