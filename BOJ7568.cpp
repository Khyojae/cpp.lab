#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
vector<pair<int,int>> v;
int n,a,b;
int cnt=0;
int arr[50];
for(int i=0; i<n; i++){
arr[i]=1;
}
cin >> n;
for(int i=0; i<n; i++){
cin >> a >> b;
v.push_back(pair<int,int>(b,a));
}
for(int i=0; i<n; i++){
for(int k=i+1; k<n; k++){
if(v[i].first>v[k].first && v[i].second>v[k].second){
arr[k]++;
}
else if(v[i].first<v[k].first && v[i].second<v[k].second){
arr[i]++;    
}
else if(v[i].first>=v[k].first && v[i].second<=v[k].second){
continue;    
}
else if(v[i].first<=v[k].first && v[i].second>=v[k].second){
continue;    
}
}
}


for(int i=0; i<n; i++){
cout << arr[i] << " ";
}
}