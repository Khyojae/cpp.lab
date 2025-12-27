#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
int k;
cin >> n;
cin >> k;
vector<int> vc;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
cout << vc[vc.size()-k];



}