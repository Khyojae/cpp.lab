#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int num;
vector<int>vc;
vector<int>ac;
for(int i=0; i<7; i++){
cin >> num;
if(num%2==1){
vc.push_back(num);
}
}

int sum=0;
sort(vc.begin(),vc.end());
for(int i=0; i<vc.size(); i++){
sum+=vc[i];
}
cout << sum << '\n';
cout << vc.front();

}