#include <iostream>
#include <vector>
using namespace std;
int arr[1001][4];
int sum[1001][4];
int main(){
int n;
cin >> n;
int ans=0;
  for (int i = 1; i <= n; i++) {
cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
 }

for(int i=1; i<=n; i++){
sum[i][0]=min(sum[i-1][1],sum[i-1][2])+arr[i][0];
sum[i][1]=min(sum[i-1][0],sum[i-1][2])+arr[i][1];
sum[i][2]=min(sum[i-1][0],sum[i-1][1])+arr[i][2];
ans = min(sum[i][0],min(sum[i][1],sum[i][2]));
}
cout << ans;

}