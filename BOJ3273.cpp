#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int>vc;
int n;
cin >> n;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num); 
}
sort(vc.begin(),vc.end());

int ans;
cin >> ans;

int cnt=0;

int left=0;
int right=n-1;
while(left<right){

if(vc[left]+vc[right]>ans){
right--;
}

if(vc[left]+vc[right]==ans){
cnt++;
right--;
left++;
}

if(vc[left]+vc[right]<ans){
left++;
}
}


cout << cnt;
}