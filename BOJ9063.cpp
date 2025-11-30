#include <iostream>
#include <algorithm>
using namespace std;

int max = 100000;
int main(){
int n;
int a[100000],b[100000];
cin >> n;
if(n>=2){
for(int i=0; i<n; i++){
cin >> a[i] >> b[i];
}
sort(a,a+n);
sort(b,b+n);
cout << (a[n-1]-a[0])*(b[n-1]-b[0]);
}




else{
for(int i=0; i<n; i++){
cin >> a[i] >> b[i];
}
cout << "0";
}




}