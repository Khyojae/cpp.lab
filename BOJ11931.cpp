#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL); 
vector<int>vc;
cin >> n;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
for(int i=0; i<n; i++){
cout << vc[i] << '\n';
}




}