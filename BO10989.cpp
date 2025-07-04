#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int>vc;
vector<int>ac;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;

for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
ac.push_back(num);  // 원본 
}
sort(vc.begin(),vc.end());   // 정렬하기


vector<int>vec;
int ac=-1;
int counts[1000] = {0};
for(int i=0; i<n; i++){  // 횟수 카운트
if(i==0 || vc[i] != vc[i-1]){
vec.push_back(vc[i]);
ac++;
}
counts[ac]++;
}

for(int i=0; i<vec.size(); i++){  // 횟수 만큼 출력
for(int j=0; j<counts[i]; j++){
cout << vec[i] << '\n';
}
}



}