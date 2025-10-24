#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int v,e,w, start;
int vis[20001]={0};
int dis[20001]={0};
int pre[20001]={0};
int inf=100000;
vector<pair<int,int>>graph[20001];
priority_queue<pair<int,int>>pq;

void dijkstar(int s){
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
for(int i=1; i<=v; i++){
dis[i]=100000;
}
dis[start]=0;
pq.push({0,s});

while(!pq.empty()){
//cin >> v>> e>> w;
int cost=pq.top().first;
int cur=pq.top().second;
pq.pop();

if(dis[cur]<cost) continue;


for(auto &next : graph[cur]){
int nxt = next.first;
int weight = next.second;

if(dis[nxt]>dis[cur]+weight){
dis[nxt]=dis[cur]+weight;
pq.push(make_pair(dis[nxt],nxt));
}
}

}
}


int main(){
cin >> v >> e;
cin >> start;

for(int i=1; i<=e; i++){
int u,neighbor,weight;
cin >> u>> neighbor >> weight;
graph[u].push_back(make_pair(neighbor,weight));
}

dijkstar(start);

for(int i=1; i<=v; i++){
if(dis[i]==100000) cout << "INF" << '\n';
else {cout << dis[i] << '\n'; }
}

}