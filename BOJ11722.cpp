#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cin >> n;

int arr[1001]={0};
int dp[1001];

for(int i=1; i<=n; i++){
int input;
cin >> input;
arr[i]=input;
dp[i]=1;
}

int mx=0;
for(int i=2; i<=n; i++){
for(int j=1; j<n; j++){
if(arr[j]>arr[i]){
dp[i]=max(dp[i],dp[j]+1);
}
if(mx<dp[i]){
mx=dp[i];
}
}
}

cout << mx;
}