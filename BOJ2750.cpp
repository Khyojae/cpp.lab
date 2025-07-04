#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<int>vc;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end()); 
//std::sort(vec.begin(), vec.end(), std::greater<int>());
// less<int>는 보통 생략!
for(int i=0; i<n; i++){
cout<<vc[i]<<'\n';
}
}