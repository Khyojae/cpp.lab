#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int arr[1001]={0};
int dp[1001]={0};
int ans[1001];
int n;
cin >> n;
for(int i=1; i<=n; i++){
int input;
cin >> input;
arr[i]=input;
dp[i]=input;
ans[i]=1;
} // 초깃값

int mx=dp[1];

for(int i=2; i<=n; i++){

for(int j=1; j<i; j++){
if(arr[i]>arr[j]){
dp[i]=max(dp[i],dp[j]+arr[i]);
// 이 지점에서의 mx은 한정된 집합에서 벗어난 케이스다
}
}
if(mx<dp[i]){
mx=dp[i];
} // i 이전중 최고를 찾았다
}  //가장 큰 증가하는 수열


cout << mx;

}