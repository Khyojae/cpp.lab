#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
int num;
vector <int> vc;
vector <int> ac;
cin >> n;
for(int i=0; i<n; i++){
cin >> num;
vc.push_back(num);  
}
int maxValue = *max_element(vc.begin(),vc.end());
ac.resize(maxValue+1,0);
for(int i=0; i<n; i++){
ac[vc[i]]+=1;
}
sort(vc.begin(),vc.end());
for(int i=0; i<n; i++){
if(ac[vc[i]]>0){
cout << vc[i] << " ";
ac[vc[i]]-=1;
}
else{
continue;
}

}

}