#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n,m;
int num;
vector<int>vc;
vector<int>ac;
cin >> n;
for(int i=0; i<n; i++){
cin >> num;
vc.push_back(num);
}
cin>>m;
for(int i=0; i<m; i++){
cin >> num;
ac.push_back(num);
}
sort(vc.begin(),vc.end());


for(int i=0; i<m; i++){
bool found= binary_search(vc.begin(),vc.end(),ac[i]);
if(found==false){
cout << 0 << "\n";
}
else if(found==true){
cout << 1 << "\n";
}
}
}