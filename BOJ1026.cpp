#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;
vector<int>vc;
vector<int>ac;
cin >> n;
for(int i=0; i<n; i++){
int num1;
 cin >> num1;
 vc.push_back(num1);
}
sort(vc.begin(),vc.end());

for(int i=0; i<n; i++){
int num2;
 cin >> num2;
 ac.push_back(num2);
}
sort(ac.begin(),ac.end(),greater<int>());
int sum=0;
for(int i=0; i<n; i++){
sum+=vc[i]*ac[i];
}
cout << sum;


}