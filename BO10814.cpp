#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<pair<int,string>>vc;
for(int i=0; i<n; i++){
int num;
string name;
cin >> num >> name ;
vc.push_back({num,name});
}
// 함수 즉석에서 만들어서 비교할꺼면 람다를 써도 됨 (풀이2)
stable_sort(vc.begin(),vc.end(), [](pair<int,string>a,pair<int,string>b){
return a.first < b.first;    
});


for(int i=0; i<n; i++){
cout << vc[i].first << " " << vc[i].second << '\n';
}




}