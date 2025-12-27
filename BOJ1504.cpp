#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int,int>>graph[801];
int inf=123456789;
int dist[801];

int djikstar(int s, int e){
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

for(int i=1; i<=800; i++){
dist[i]=inf;
}
dist[s]=0;
pq.push({0,s});
while(!pq.empty()){
int cost=pq.top().first;
int cur = pq.top().second;
pq.pop();

if(cur==e){
return cost;
}
if(dist[cur]<cost) continue;

for(auto &next: graph[cur]){
int nxt=next.first;
int weight=next.second;

if(dist[nxt]>dist[cur]+weight){
dist[nxt]=dist[cur]+weight;
pq.push(make_pair(dist[nxt],nxt));

}
}
}
return -1;
}

int main(){
int n,m;
cin >> n >> m;

int u,v,w;
for(int i=1; i<=m; i++){
cin >> u >> v >>w;
graph[u].push_back({v,w});
graph[v].push_back({u,w});
}
int start, end;
cin >> start >> end;

if(djikstar(1,start)==-1 ||djikstar(start,end)==-1){
cout << -1;
}
else{
cout << min(djikstar(1,start)+djikstar(start,end)+djikstar(end,n),djikstar(1,end)+djikstar(end,start)+djikstar(start,n));
}



}