#include <iostream>
using namespace std;
int main(){

int A,B,V;
int count=1;
cin >> A >> B >> V;
count += (V-A)/(A-B);

if((V-A)%(A-B)==0){
cout << count;
}
if((V-A)%(A-B)==1){
cout << count+1;
}
}