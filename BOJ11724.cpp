#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector<int> adj[1001];
bool vis[1001];
int n,m;
cin >> n >> m;
int count=0;


if(m==0){
cout << n;
return 0;
}

for(int i=0; i<n; i++){
adj[i+1].push_back(i+1);
}

for(int i=0; i<m; i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);
}

for(int i=1; i<=n; i++){   
sort(adj[i].begin(),adj[i].end());
}

queue<int> q;
for(int i=1; i<=n; i++){  // n: 노드 개수

if(vis[i]==false){
q.push(adj[i][0]);
vis[i]=true;
count++;
}

while(!q.empty()){
int cur = q.front();
q.pop();
for(auto nxt : adj[cur]){
if(vis[nxt]) continue;
q.push(nxt);
vis[nxt]=true;
}
}
}




cout << count;
}