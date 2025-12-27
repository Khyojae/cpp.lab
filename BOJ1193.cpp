#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
vector<pair<int,int>>vc;
long long n;
cin >> n;
long long count=1;
long long num=1;
for(int i=1; i<=count; i++){
long long top=1;
long long bottom=count;
bool coin = true;
for(int q=1; q<=i; q++){
if(coin == true){
top=top-1;
bottom=bottom+1;
coin =false;
}

top++;
bottom--;
if(i%2==1){
vc.push_back({bottom,top});
}
else if(i%2==0){
vc.push_back({top,bottom});
}

if(num==n){
cout << vc[n-1].first << "/" <<vc[n-1].second;
return 0;
}
num++;
}
count++;
}



}