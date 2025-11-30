#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vc;
int n,m;
cin >> n >> m;

vc.push_back(0);
for(int i=1; i<=n; i++){
int num;
cin >> num;
vc.push_back(num);
}


vector<int>tc (n+1);
tc[0]=vc[0];
for(int i=1; i<n+1; i++){
tc[i]=tc[i-1]+vc[i];
}


for(int k=0; k<m; k++){
int p,q;
cin >> p >> q;
if(p==q){
cout << vc[p];
continue;    
}
cout << tc[q]-tc[p-1] << '\n';
}


}