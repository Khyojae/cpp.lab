#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int vc[1001]={0};
int dp[1001]={0};
int n;
cin >> n;
for(int i=1; i<=n; i++){
int input;
cin >> input;
vc[i]=input;    
}



for(int i=1; i<=n; i++){
dp[i]=1;
for(int j=1; j<i; j++){
if(vc[j]<vc[i]){
dp[i]=max(dp[i],dp[j]+1);
}
}
}

int ans=0;
for(int i=1; i<=n; i++){
if(ans<dp[i]) ans=dp[i];
}

cout << ans;
}