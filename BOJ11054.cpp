#include <iostream>
#include <algorithm>
using namespace std;
int main(){

int n;
cin >> n;

int arr[1001]={0};
int dp1[1001]={0};
int dp2[1001]={0};
int dp3[1001]={0};

for(int i=1; i<=n; i++){
int input;
cin >> input;
arr[i]=input;
dp1[i]=1;
dp2[i]=1;
dp3[i]=1;
}

int mx1=0;
for(int i=2; i<=n; i++){
for(int j=1; j<i; j++){
if(arr[i]>arr[j]){
dp1[i]=max(dp1[i],dp1[j]+1);
}
}
if(mx1<=dp1[i]){
mx1=dp1[i];
}
}


int mx2=0;
for(int i=n; i>=1; i--){
for(int j=i+1; j<=n; j++){
if(arr[i]>arr[j]){
dp2[i]=max(dp2[i],dp2[j]+1);
}
}
}


int mx3=0;
dp3[1]=dp2[1]+dp1[1];
for(int i=1; i<=n; i++){
dp3[i]=dp2[i]+dp1[i]-1;
if(dp3[i]>mx3){
mx3=dp3[i];
}
}

cout << mx3;


}