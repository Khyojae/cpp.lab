#include <iostream>
#include <cmath>
using namespace std;

int main(){
int dp[101][101]={0};
int n;
cin >> n;

for(int i=1; i<=9; i++){
dp[1][i]=1;
}

for(int i=2; i<=n; i++){
for(int j=0; j<=9; j++){
if(j==0){
dp[i][0]=dp[i-1][1]%1000000000;

}
else if(j==9){
dp[i][9]=dp[i-1][8]%1000000000;
}
else{
if(i==2 && j==1){
dp[i][j]=dp[i-1][j+1]%1000000000;
}
else{
dp[i][j]=(dp[i-1][j-1]%1000000000+dp[i-1][j+1]%1000000000)%1000000000;
}
}
}
}

int sum=0;
for(int i=0; i<=9; i++){
sum+=dp[n][i];
sum=sum%1000000000;
}
cout << sum;
}