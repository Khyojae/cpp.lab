#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;


for(int i=0; i<n; i++){
vector<int> vc;

for(int i=0; i<=9; i++)
{
int a;
cin >> a;
vc.push_back(a);
}
sort(vc.begin(),vc.end());
cout << vc[vc.size()-3] << '\n';
}



}