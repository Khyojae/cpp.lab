#include <iostream>
#include <algorithm>
int arr[10001]={0};
int dp[10001]={0};
using namespace std;
int main(){
int n;
cin >> n;
for(int i=1; i<=n; i++){
int input;
cin >> input;
arr[i]=input;
}
dp[1]=arr[1];
dp[2]=arr[1]+arr[2];

for(int i=3; i<=n; i++){
dp[i]=max(arr[i]+dp[i-2],max(arr[i]+arr[i-1]+dp[i-3],dp[i-1]));
}
cout << dp[n];


}