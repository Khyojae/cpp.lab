#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100001]={0};
int dp[100001] ={0};
int main(){
int n;
cin >> n;
for(int i=1; i<=n; i++){
int input;
cin >> input;
arr[i]=input;
}
dp[1]=arr[1];
int result = dp[1];
for(int i=2; i<=n; i++){
dp[i]=max((dp[i-1]+arr[i]),arr[i]);
result = max(result,dp[i]);
}
cout << result;

}