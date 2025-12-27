#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool cmp(const pair<int,int>& a, const pair<int,int>& b){
if(a.second==b.second) return a.first > b.first;
    return a.second < b.second;
}

int main(){
int n,m,b;
cin >> n >> m >> b;
int k=b;
int arr[501][501];
int time=0;
vector<pair<int,int>>vc1;
vector<pair<int,int>>result;
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
int num;
cin >> num;
arr[i][k] = num;
vc1.push_back({num,time});
}
}

sort(vc1.begin(),vc1.end());
vc1.erase(unique(vc1.begin(),vc1.end()),vc1.end());


for(int p=vc1[0].first; p<=vc1[vc1.size()-1].first; p++){   //기준으로 맞추자
time=0;
b=k;
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
if(p>arr[i][k] ){   // 63(기준)  > 61 => 쌓자
time=time+(p-arr[i][k]);
b-=(p - arr[i][k]);
}
else if(p<arr[i][k] ){   // 63(기준) < 65  => 지우자
time=time+2*(arr[i][k]-p);
b+= (arr[i][k]-p);
}
}    
}
/*if(b<0){
cout << "불가";    
}*/
if(b>=0){
result.push_back({p,time});
}

}
sort(result.begin(),result.end(),cmp);
cout <<result[0].second  << " " <<  result[0].first;


}