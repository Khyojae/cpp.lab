#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int MAX =10;
int cnt=0;

void DFS(int start, vector<int> graph[], bool check[]){
check[start]=true;
cout << start << "\n";
cout << "check 값 : " << check[start];
for(int i=0; i<graph[start].size(); i++){
int next = graph[start][i];

if(!check[next]){
DFS(next, graph, check);
}
}


}

int main(){
int n,m,start; //노드개수, 간선개수
cin >> n >> m >> start;  //그래프는 뭐 딱히 설정해줘야하는게 없다
vector<int>graph[n+1];
bool check[n+1]={false};
for(int i=0; i<m; i++){
int u,v;
cin >> u >> v;
graph[u].push_back(v);
graph[v].push_back(u);
}
for(int i=1; i<=n; i++){
sort(graph[i].begin(),graph[i].end());
}
DFS(start,graph,check);
for(int i=1; i<=n;i++){
if(check[i]==false){
cout << 0 << '\n';
}
}

}