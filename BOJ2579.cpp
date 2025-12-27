#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int cnt;
cin >> cnt;
vector<int>vc(cnt+1);
vector<int>dp(cnt+1);

for(int i=1; i<=cnt; i++){
int input;
cin >> input;
vc[i]=input;
}

dp[0]=vc[0];
dp[1]=vc[1];
dp[2]=vc[1]+vc[2];

for(int i=3; i<=cnt; i++){
dp[i]=max(dp[i-3]+vc[i-1],dp[i-2])+vc[i];
}

cout << dp[cnt];
}