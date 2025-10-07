#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> graph[10001];
vector<int> graphr[10001];
bool visit[10001];
int pre[10001], post[10001];
int clock1;
int ccflag;
int cc[10001];

void pre_r(int v){
pre[v]=clock1++;
}

void post_r(int v){
post[v]=clock1++;
}

void dfs_r(int v){
visit[v]=true;
pre_r(v);
for(int w=0; w<graphr[v].size(); w++){
if(visit[graphr[v][w]]==false) 
{dfs_r(graphr[v][w]);}
}
post_r(v);
}

int get_max_post(){
int max_post =0;
int max_post_val =0;
for(int i=1; i<=n; i++){
if(visit[i]==false){
if(post[i]>max_post_val){
max_post_val=post[i];
max_post=i;
} 
} 
}

return max_post;
}

void dfs(int v){
visit[v]=true;
cc[v]=ccflag;
for(int w=0; w<graph[v].size(); w++){
if(visit[graph[v][w]]==false){
dfs(graph[v][w]);
}
}
}

int main(){
cin >> n >> m;

// 1. G생성 -> G^R 생성
for(int i=1; i<=m; i++){
int u,v;
cin >> u >> v;
graph[u].push_back(v);
graphr[v].push_back(u);
}

for(int i=1; i<=n; i++){
sort(graph[i].begin(),graph[i].end());
}
for(int i=1; i<=n; i++){
sort(graphr[i].begin(),graphr[i].end());
}

// visit 초기화
for(int i=1; i<10001; i++) {
visit[i]=false;
}
// G^r에 대한 dfs 호출 --> pre&post 계산
clock1=1;
for(int i=1; i<=n; i++){
if (visit[i]==false) dfs_r(i);
}

// visit 초기화
for(int i=1; i<10001; i++) {
visit[i]=false;
}
//3. post의 내림차순으로 g에서 dfs 수행
ccflag=1;

vector<vector<int>> scc_result;
for(int i=1; i<=n; i++){
int max_post = get_max_post();
if(max_post==0) break;
dfs(max_post);
vector<int> current_scc;
for(int j=1; j<=n; j++){
if(cc[j]==ccflag){
current_scc.push_back(j);
}
}
scc_result.push_back(current_scc);
ccflag++;
}

sort(scc_result.begin(),scc_result.end());

cout << scc_result.size() << '\n';
for(const auto& scc : scc_result){
for(int node : scc){
cout << node << " ";
}
cout << "-1\n";
}

}