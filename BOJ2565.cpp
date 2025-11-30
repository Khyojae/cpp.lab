#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int arr[501]={0};
int dp[501]={0};
int n;
cin >> n;

int mx=0;
for(int i=0; i<n; i++){
int l,r;
cin >> l >> r;
arr[l]=r;
if(mx<l){
mx=l;
}
}
dp[1]=1;

for(int i=1; i<=mx; i++){
dp[i]=1;
}

int lis=1;
for(int i=1; i<=mx; i++){
for(int j=1; j<=i; j++){
if(arr[i]>arr[j]){
dp[i]=max(dp[i],dp[j]+1);
}
}
lis = max(lis,dp[i]);
}
//cout << dp[mx] <<'\n';
cout << n-lis;

}