#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main(){
vector<int> adj[101];
bool vis [101]={false, };
int n,m;
cin >> n >> m;
for(int i=0 ; i<m; i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);
}

int sick=0;

queue<int>q;
q.push(1);
vis[1]=true;
while(!q.empty()){
int cur = q.front();
q.pop();
//cout << cur << ' ';
for(auto nxt : adj[cur]){
if(vis[nxt]) continue;
q.push(nxt);
vis[nxt]= true;
sick++;
}
}

cout <<sick;



}