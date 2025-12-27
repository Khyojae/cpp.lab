#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n,v;
int dp[101][101]={0};
int W[101]={0};
int V[101]={0};

cin >> n >> v;
for(int i=1; i<=n; i++){
cin >> W[i] >> V[i];
}

for(int i=1; i<=n; i++){
for(int j=1; j<=v; j++){
if(j>=W[i]){
dp[i][j]=max(dp[i-1][j],dp[i-1][j-W[i]]+V[i]);
}
else{
dp[i][j]=dp[i-1][j];
}
}
}

cout << dp[n][v];


}