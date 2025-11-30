#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int num;
vector<int>vc;
for(int i=0; i<5; i++){
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
int sum=0;
for(int i=0; i<5; i++){
sum=sum+vc[i];
}
cout << sum/5 << '\n';
cout << vc[2];



}