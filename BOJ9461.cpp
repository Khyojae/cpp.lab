#include <iostream>
#include <vector>
using namespace std;
int main(){
long long cnt=0;
cin >> cnt;
vector<long long>vc(101);
for(int k=0; k<cnt; k++){
int n;
cin >> n;
if(n<4){
cout << 1 << '\n';   
continue;
}
if(4<=n && n<=5){
cout << 2 << '\n';
continue;
}

vc[1]=vc[2]=vc[3]=1;
vc[4]=vc[5]=2;

for(int i=6; i<=n; i++){
vc[i]=vc[i-1]+vc[i-5];
}
cout << vc[n] << '\n';
}





}