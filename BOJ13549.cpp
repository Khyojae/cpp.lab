#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
//여기선 dist가 time역할을함 
int str,end,u,v,w;
int inf=123456789;
int dist[200001];
vector<pair<int,int>>graph[200001];

void djikstra(int s, int e){
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
for(int i=1; i<=200000; i++){
dist[i]=inf;
}
pq.push({0,s});
dist[s]=0;
while(!pq.empty()){
int cost= pq.top().first;
int cur = pq.top().second;
pq.pop();

if(dist[cur]<cost) continue;
if(cur==e){
cout << dist[cur];
return;    
} 

for(auto &next: graph[cur]){
int nxt=next.first;
int weight=next.second;

if(dist[nxt]>dist[cur]+weight){
dist[nxt]=dist[cur]+weight;
pq.push(make_pair(dist[nxt],nxt));
}
}
}
}

int main(){
int n,k;
cin >> n >> k;
for(int i=0; i<=100000; i++){
if(i-1>=0){
graph[i].push_back({i-1,1});
}
else if(i+1<=100000){
graph[i].push_back({i+1,1});
}
else if(2*i<=100000){
graph[i].push_back({2*i,0});
}
}

djikstra(n,k);

    
}