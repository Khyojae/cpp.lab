#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
vector<int>vc;
vector<int>ac;
for (int i = 0; i < n; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
// 무지성 for
for(int i=0; i<n; i++){
int sum=0;
for(int k=i+1; k<n; k++){
for(int j=k+1; j<n; j++){
sum=vc[i]+vc[j]+vc[k];
if(sum<=m){
ac.push_back(sum);
}
}
}
}
sort(ac.begin(),ac.end());
cout << ac.back();
return 0;





}