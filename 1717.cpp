#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getParent(int parent[],int x){
if(parent[x]==x) return x;
return parent[x] = getParent(parent,parent[x]);
}

int unionParent(int parent[],int a ,int b){
    a=getParent(parent,a);
    b=getParent(parent,b);
    if(a<b) return parent[b]=a;
    else  return parent[a]=b;
}

string findParent(int parent[], int a, int b){
    a = getParent(parent,a);
    b = getParent(parent,b);
    if(a==b) return "YES";
    else return "NO";
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin >> n >> m;
int parent[1000001];
for(int i=1; i<=n; i++){
parent[i]=i;
}

for(int i=1; i<=m; i++){
int k,p,q;
cin >> k >> p >> q;

if(k==0){
unionParent(parent,p,q);
}
else{
cout << findParent(parent,p,q) << '\n';
}


}

}