#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
int n;
cin >> n;
vector<int>vc;
while(n!=0){
int num = n%10;
vc.push_back(num);
n=n/10;
}
sort(vc.begin(),vc.end(),greater<int>());
for(int i=0; i<vc.size(); i++){
cout<<vc[i];
}



}