#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node{
    int x, y, broken;
};

int n,m;
int board[1001][1001];
int dist[1001][1001][2];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int bfs(){
queue<Node>q;
q.push({0,0,0});
dist[0][0][0]=1;

while(!q.empty()){
Node cur = q.front();
q.pop();

if(cur.x == n-1 && cur.y == m-1){
return dist[cur.x][cur.y][cur.broken];
}

for(int dir=0; dir<4; dir++){
int nx = cur.x + dx[dir];
int ny = cur.y + dy[dir];

if(nx<0 || nx>=n || ny<0 || ny>=m) continue;

if(board[nx][ny]==0 && dist[nx][ny][cur.broken]==0){
dist[nx][ny][cur.broken] = dist[cur.x][cur.y][cur.broken] + 1;
q.push({nx,ny,cur.broken});
}

if(board[nx][ny]==1 && cur.broken == 0 && dist[nx][ny][1]==0){
dist[nx][ny][1] = dist[cur.x][cur.y][cur.broken]+1;
q.push({nx,ny,1});
}
}
}
return -1;
}

int main(){
cin >> n >> m;
for(int i=0; i<n; i++){
string row;
cin >> row;
for(int j=0; j<m; j++){
board[i][j] = row[j] - '0';
}
}

cout << bfs();
}
