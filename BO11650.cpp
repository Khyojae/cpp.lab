#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<pair<int,int>>vc;
int n;
cin >> n;
for(int i=0; i<n; i++){
int num1, num2;
cin >> num1 >> num2;
vc.push_back({num1,num2});
}
sort(vc.begin(),vc.end());
for(int i=0; i<n; i++){
cout << vc[i].first << " "<< vc[i].second << '\n';
}



}