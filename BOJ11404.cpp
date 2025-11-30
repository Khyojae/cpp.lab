#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<tuple<int,int,int>>graph;
const long long inf =123456789;

void floydwarshall(int v, vector<vector<int>>& dist){
for(int k=1; k<=v; k++){
for(int i=1; i<=v; i++){
for(int j=1; j<=v; j++){
if(dist[i][k]!=inf && dist[k][j]!=inf){
dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
}
}
}
}
}


int main(){
int v,e;
cin >> v >> e;
vector<vector<int>> dist(v+1,vector<int>(v+1,inf));
for(int i=1; i<=v; i++){
dist[i][i]=0;
}

for(int i=1; i<=e; i++){
int fir,nxt,weight;
cin >> fir >> nxt >> weight;
if(dist[fir][nxt]!=weight){
dist[fir][nxt]=min(dist[fir][nxt],weight);
}
graph.emplace_back(fir,nxt,weight);
}

floydwarshall(v,dist);
for(int i=1; i<=v; i++){
for(int k=1; k<=v; k++){
if(dist[i][k]!=inf){
cout << dist[i][k] << " ";
}
else{
cout << 0 << " ";
}
}
cout << '\n';
}
}