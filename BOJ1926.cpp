#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define x first
#define y second
int board[500][500];
bool vis[500][500];

int dx[4] ={1,0,-1,0};
int dy[4] ={0,1,0,-1};

using namespace std;
int main(){
queue<pair<int,int>>Q;
vector<int>vc;
int n,m;
cin >> n >> m;
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
cin >> board[i][k];
}
}
int count =0; // 그림개수
int width =0;


for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
int width =0;


if(vis[i][k]==0 && board[i][k]==1){
count++;   //처음에 만나면 그림개수 count
Q.push({i,k});
}

vis[i][k]=1;



while(!Q.empty()){
width++;
pair<int,int> cur = Q.front();
Q.pop();
for(int dir=0; dir<4; dir++){
int nx= cur.x+dx[dir];
int ny = cur.y+dy[dir];
if(nx<0 || nx>=n || ny <0 || ny>=m) continue;  //범위 밖일 경우 넘어감
if(vis[nx][ny]||board[nx][ny]!=1)  continue;
vis[nx][ny]=1;
Q.push({nx,ny});
}
}
vc.push_back(width);
}
}






}