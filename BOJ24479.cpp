#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int Max = 100005; // 여유 있게 크게
vector<int> adj[Max];
bool vis[Max];
int numling[Max]={0};
int label =1;
void dfs(int cur){
numling[cur]=label;
label++;
vis[cur]=true;

for(auto nxt:adj[cur]){
    if(vis[nxt]) continue;
    dfs(nxt);
}
}


int main() {

    int label =1;
    int n, m, b;
    cin >> n >> m >> b;
    fill(vis, vis + n + 1, false); // 입력 후 초기화!

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1; i<=n; i++){
    sort(adj[i].begin(),adj[i].end());
    }

 dfs(b);

    for(int i=1; i<=n; i++){

    cout << numling[i] << '\n';
  
    }
}
