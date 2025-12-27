#include <iostream>
#include <vector>
using namespace std;
int main(){
long long k;
int n;
cin >>k;
vector<pair<int,int>> dp[100];
int a,b;
while(k>0){
k--;
cin >> n;
dp[0].push_back({1,0});
dp[1].push_back({0,1});
dp[2].push_back({1,1});


if(n<3){
cout << dp[n][0].first << " " << dp[n][0].second << '\n';
}

int hi=2;
if(n>=3){
while(hi<=n){
a =dp[hi-1][0].first+dp[hi-2][0].first;
b =dp[hi-1][0].second+dp[hi-2][0].second;
dp[hi].push_back({a,b});
hi++;
}
cout << a << " " << b << '\n';
}


}


}