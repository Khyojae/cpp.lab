#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int T;
int n,m,t;
int dist[2001]={0};
int inf=123456789;
vector<pair<int,int>>graph[2001];
//priority_queue<pair<int,int>>pq;
void djikstar(int s, int n_nodes, long long result_dist[]){
priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
for(int i=1; i<=n; i++){
result_dist[i]=inf;
}
result_dist[s]=0;
pq.push({0,s});

while(!pq.empty()){
long long cost=pq.top().first;
int cur=pq.top().second;
pq.pop();

if(result_dist[cur]<cost) continue;


for(auto &next :graph[cur]){
int nxt= next.first;
int weight = next.second;

if(result_dist[nxt]>result_dist[cur]+weight){
result_dist[nxt]=result_dist[cur]+weight;
pq.push(make_pair(result_dist[nxt],nxt));
}
}
}
}

int main(){
cin >> T ;
long long dist_s[20001];
long long dist_g[20001];
long long dist_h[20001];

for(int i=1; i<=T; i++){
vector<int>result;
cin >> n >> m >> t;

for(int j=1; j<=n; j++){
graph[j].clear();
}

int s,g,h;
cin >> s >> g >> h;
int a, b, d;
int L_gh=0;
for(int i=1; i<=m; i++){
cin >> a >> b >> d;
if((a==g && b==h) || (a==h && b==g)){
L_gh=d;
}
graph[a].push_back({b,d});
graph[b].push_back({a,d});
}
vector<int>vc;
for(int i=1; i<=t; i++){
int l;
cin >> l;
vc.push_back(l);
}

djikstar(s,n,dist_s);
djikstar(g,n,dist_g);
djikstar(h,n,dist_h);

for(const auto& element: vc){
long long L_gh_val = (long long)L_gh;

long long dist_s_x_min = dist_s[element];
long long dist_s_g = dist_s[g];
long long dist_s_h = dist_s[h];


long long dist_g_x=dist_g[element];

long long dist_h_x =dist_h[element];

long long path1= dist_s_g+L_gh_val+dist_h_x;
long long path2= dist_s_h + L_gh_val+dist_g_x;

long long dist_gh_path=min(path1,path2);

if(dist_s_x_min==dist_gh_path){
result.push_back(element);
}
}
sort(result.begin(),result.end());
for(auto const& rs: result){
cout << rs << " ";
}
cout << "\n";
}

}

