#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int a;
cin >> a;
vector<int> vc;
for(int i=0; i<a; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
int sum=0;
for(int k=0; k<a; k++){
for(int i=0; i<=k; i++){
sum+=vc[i];
}
}

cout << sum;

}