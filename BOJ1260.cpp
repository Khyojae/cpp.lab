#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
const int Max =1000;
vector<int> adj[Max];
bool vis[Max];
int n,m,b;
void dfs(int cur){

    vis[cur] =true;
    cout << cur << ' ';
    for(auto nxt : adj[cur]){
        if(vis[nxt]) continue;
        dfs(nxt);
    }
}

void bfs(){

queue <int> q;
q.push(b);
vis[b]=true;
while(!q.empty()){
int cur = q.front();
cout << cur << ' ';
q.pop();
for(auto nxt : adj[cur]){
if(vis[nxt]) continue;
q.push(nxt);
vis[nxt]=true;
}
}

}

int main(){

cin >> n >> m >> b;
fill(vis,vis+n+1,false);
for(int i=0; i<=m; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 for(int i=1; i<n; i++){
sort(adj[i].begin(),adj[i].end());
}

dfs(b);

cout << '\n';

fill(vis,vis+n+1,false);   

bfs();
}