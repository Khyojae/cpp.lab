#include <iostream>
#include <vector>
#include <algorithm>
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
if(vc.size()>1){
int a = (*vc.begin())* (*(vc.end()-1)); 
cout << a;
}

else if (vc.size()==1){
int b = (*vc.begin()) *  (*vc.begin()) ;
cout << b; 
}





}