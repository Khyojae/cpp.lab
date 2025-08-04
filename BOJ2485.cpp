#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
while(b!=0){
long long temp = a%b;
a=b;
b=temp;
}   
return a;
}

long long gcd2(vector<long long>ac){
long long result = ac[0];
for(long long i=1; i<ac.size(); i++){
    result = gcd(result,ac[i]);
}    
return result;
}

int main(){

long long count;
cin >> count;
vector<long long>vc;
vector<long long>ac;
for(int i=0; i<count; i++){
long long num;
cin >> num;
vc.push_back(num);
}
for(int i=1; i<vc.size(); i++){
ac.push_back(vc[i]-vc[i-1]);
}
sort(ac.begin(),ac.end());
unique(ac.begin(),ac.end());
long long start=vc.front();
long long diff = gcd2(ac);
long long ans=0;

ans = vc.size()-(((vc.back()-vc.front())/diff)+1);

cout << ans;

}