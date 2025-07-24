#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n;
vector<int>adj[10001];
int p[10001];

void bfs(int root){
queue <int> q;
q.push(root);
while(!q.empty()){
int cur = q.front();
q.pop();

for(int nxt : adj[cur]){
if(p[cur]==nxt) continue;
q.push(nxt);
p[nxt]=cur;
}
}

}

int main(){
cin >> n;
for(int i=1; i<n; i++){
int num, num1;
cin >> num >> num1;
adj[num].push_back(num1);
adj[num1].push_back(num);
}
bfs(1);
for(int i=2; i<=n; i++){
cout << p[i] << '\n';
}

}