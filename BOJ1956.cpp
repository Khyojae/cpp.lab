#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<tuple<int,int,int>>graph;
long long inf=123456789;

void floydwashall(int v,vector<vector<int>> &dist){
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
int fir,sec,weight;
cin >> fir >> sec >> weight;
graph.emplace_back(fir,sec,weight);
dist[fir][sec]=weight;
}
floydwashall(v,dist);
int a=inf;




for(int i=1; i<=v; i++){
for(int t=1; t<=v; t++){
if(i==t){
continue;
}
a=min(a,dist[i][t]+dist[t][i]);
}
}


if(a==inf){
cout << -1;
}
else{
cout << a;
}

}