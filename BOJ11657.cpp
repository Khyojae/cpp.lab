#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

int n,m;
int inf=123456789;
long long dist[501]; // dist+w 가 음수가 될 수 있음 long long


vector<tuple<int,int,int>>edges;

bool bellmanford(int n, int start_node){

for(int i=1; i<=n; i++){
dist[i]=inf;
}
dist[1]=0;

for(int i=1; i<=n-1; i++){
for(const auto &edge : edges){
int u,v,w;
tie(u,v,w)=edge;
if(dist[u]!=inf&&dist[v]>dist[u]+w){
    dist[v]=dist[u]+w;
}
}
}
for(const auto&edge : edges){  //두번걸려서 갱신되면 음수
int u,v,w;
tie(u,v,w)=edge;
if(dist[u]!=inf&&dist[v]>dist[u]+w){
return true;
}
}
return false;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> n >> m;
for(int i=1; i<=m; i++){
int u,v,w;
cin >> u >> v >> w;
edges.emplace_back(u,v,w);
}
int str=1;
if(bellmanford(n,str)){
cout << -1 << '\n';
}
else{
for(int str=2; str<=n; str++){
if(dist[str]==inf){
cout << -1 << '\n';    
}
else{
cout << dist[str] << '\n';
}
}    
}

}