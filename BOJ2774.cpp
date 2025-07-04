#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
int m;
cin >> m;
vector<int>vc;
int a;
while(m!=0){
a=m%10;
vc.push_back(a);
m=m/10;
}
sort(vc.begin(),vc.end());
vc.erase(unique(vc.begin(),vc.end()),vc.end());
cout << vc.size() << '\n';
}


}