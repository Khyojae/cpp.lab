#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100000];
int deg[32000]={0};
int main(){
int n;
int m;

cin >> n >> m;


queue<int> q;
vector<int> result;

for(int i=1; i<=m; i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
deg[v]++;
//cout << deg[v] << ' ';
//if(deg[i]==0) q.push(i);
}

for(int i=1; i<=n; i++){
if(deg[i]==0) q.push(i);
}

while(!q.empty()){
int cur = q.front();
q.pop();
result.push_back(cur);

for(int nxt: adj[cur]){
deg[nxt]--;
if(deg[nxt]==0){
q.push(nxt); 
}
}
if(result.size() ==n){
for(auto x : result) cout << x << " ";

}
}
}