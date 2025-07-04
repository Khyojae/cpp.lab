#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<int>vc;
vector<int>ac;
for(int i=0; i<10; i++){
int a;
cin >> a;
vc.push_back(a);
}
sort(vc.begin(),vc.end());
int sum1=0;
for(int i=0; i<3; i++){
sum1=sum1+vc[vc.size()-i];
}
cout << sum1  << " ";

for(int i=0; i<10; i++){
int b;
cin >> b;
ac.push_back(b);
}
sort(ac.begin(),ac.end());
int sum2=0;
for(int i=0; i<3; i++){
sum2=sum2+vc[ac.size()-i];
}
cout << sum2;

}