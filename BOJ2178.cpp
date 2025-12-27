#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#define x first
#define y second
int board[500][500];
bool vis[500][500];
int labeling[500][500];
int dx[4] ={1,0,-1,0};
int dy[4] ={0,1,0,-1};

using namespace std;
int main(){
queue<pair<int,int>>Q;
vector<int>vc;
int n,m;
cin >> n >> m;
for(int i=1; i<=n; i++){
string row;
cin >>row;
for(int k=1; k<=m; k++){
board[i][k]=row[k-1]-'0';
}
}





Q.push(make_pair(1,1));
vis[1][1]=1;
labeling[1][1]=1;
while(!Q.empty()){
pair<int,int> cur = Q.front();
Q.pop();


for(int dir=0; dir<4; dir++){
int nx= cur.x+dx[dir];
int ny = cur.y+dy[dir];
if(nx<0 || nx>n || ny <0 || ny>m) continue;  //범위 밖일 경우 넘어감
if(vis[nx][ny]||board[nx][ny]!=1)  continue;
vis[nx][ny]=1;
Q.push({nx,ny});
labeling[nx][ny]=labeling[cur.x][cur.y]+1;
if(nx==n && ny==m){
cout << labeling[nx][ny];
return 0;
}
}
}

}
