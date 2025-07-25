#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj[10000];
int p[10000];
int dist[10000];
int n,m;
int count=0;
void bfs(int root){
count=0;
queue <int> q;
q.push(root);
dist[root]=1;
while(!q.empty()){
int cur = q.front();
q.pop();

for(int nxt: adj[cur]){   // 연결됨
if(dist[nxt]!=-1) continue;
//cout << "nxt : " << nxt  << " dist[nxt] :"  << dist[nxt] <<'\n';
q.push(nxt);
p[nxt]=cur;
dist[nxt]=dist[cur]+1;
count++;
cout << "nxt : " << nxt  << " dist[nxt] :"  << dist[nxt] <<'\n';
}
}
}

int main(){
int Max=10000;
int test=0;
cin >> test;
for(int i=0; i<test; i++){
cin >> n >> m;
fill(dist,dist+Max,-1);
for(int i=0; i<m; i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);
}
bfs(1);
cout << count << '\n';

vector<int> adj(10000,0);
}


}