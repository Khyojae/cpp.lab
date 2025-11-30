#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int main(){
int Max=300;
int adj[300][300];
bool vis[300][300];
int dist[300][300];

int dx[8]={1,-1,-1,1,2,2,-2,-2};
int dy[8]={2,2,-2,-2,1,-1,1,-1};

int test=0;
int a;
int x, y;
int x1, y1;
cin >> test;

for(int i=0; i<test; i++){

cin >> a;
cin >> x >> y;
cin >> x1 >> y1;

if(x==x1 && y==y1){
cout << 0 << '\n';
continue;
}
fill(&adj[0][0], &adj[0][0]+Max*Max,0);
fill(&vis[0][0], &vis[0][0]+Max*Max,false);
fill(&dist[0][0], &dist[0][0]+Max*Max,0);
queue<pair<int,int>>q;
q.push({x,y});

while(!q.empty()){

pair<int,int> cur = q.front();
q.pop();
for(int dir=0; dir<8; dir++){  // 말판이 8방향으로 이동
int nx = cur.X+dx[dir];
int ny = cur.Y+dy[dir];
if(nx<0 || nx>=a || ny<0 || ny>=a) continue;
if(vis[nx][ny]!=0) continue;
vis[nx][ny]=1;
q.push({nx,ny});
dist[nx][ny]=dist[cur.X][cur.Y]+1;

if(vis[nx][ny]==1 && nx==x1 && ny==y1){
cout << dist[nx][ny] << '\n'; 
}
}
}


  
}





}