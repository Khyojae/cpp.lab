#include <iostream>
using namespace std;
#include <cmath>

int main(){
int a,b;
cin >> a >> b;
int c= sqrt(a);
int d= sqrt(b);


int arr[1000];
int p=0;
int sum=0;

for(int i=c; i<=d; i++){
if(sqrt(a)<=i && i<=sqrt(b)){
arr[p]=i*i;
p++;    
}
}

if(p>0){



for(int i=0; i<p; i++){
    sum=arr[i]+sum;
}
cout << sum<< endl;
cout << arr[0];
}

if(p==0){
    cout << "-1";
}

}