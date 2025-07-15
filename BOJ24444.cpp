#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int Max = 100005; // 여유 있게 크게
vector<int> adj[Max];
bool vis[Max];

int main() {
int numling[Max]={0};  
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

    queue<int> q;
    q.push(b);
    numling[b]=label;
     cout << numling[b] << '\n';
    label++;
  
    vis[b] = true;

    while (!q.empty()) {
        int cur = q.front(); 
        //cout << label << '\n';
        q.pop();
       //cout << cur << '\n';
        for (auto nxt : adj[cur]) {
            if (vis[nxt]) continue;
            q.push(nxt);
            numling[nxt]=label;
            label++;
            vis[nxt] = true;
        }
    }


    for(int i=1; i<=n; i++){

    cout << numling[i] << '\n';
  
    }
}
