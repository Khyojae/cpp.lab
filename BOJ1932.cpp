#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int arr[501][501];
int vc[501][501]={0};
int n;
cin >> n;
for(int i=1; i<=n; i++){
for(int k=1; k<=i; k++){
int input;
cin >> input;
arr[i][k]=input;
}
}

vc[1][1]=arr[1][1];
vc[2][1]=arr[2][1]+arr[1][1];
vc[2][2]=arr[1][1]+arr[2][2];
int a=0;
int b=0;
for(int i=3; i<=n; i++){
vc[i][1]=vc[i-1][1]+arr[i][1];
for(int k=2; k<=i; k++){

vc[i][k]=max(vc[i-1][k],vc[i-1][k-1])+arr[i][k];
}

vc[i][i]=vc[i-1][i-1]+arr[i][i];
}
b=arr[n][1];
for(int i=1; i<=n; i++){
if(b<=vc[n][i]){
b=vc[n][i];
}
}

cout << b;

}