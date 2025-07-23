#include <iostream>
#include <queue>
using namespace std;
int arr[1000][1000];
bool vis[1000][1000];
int dist[1000][1000];
#define X first
#define Y second
int main(){
int dx[4]= {1,0,-1,0};
int dy[4]= {0,1,0,-1};

int n,m;
cin >> n >> m;
swap(n,m);
int Max=1000;
// 예제 입력 3이 문제

fill(&vis[0][0],&vis[0][0]+Max*Max,false);
fill(&dist[0][0],&dist[0][0]+Max*Max,false);

for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
int num;
cin >> num;
arr[i][k]=num;
}
}

int count=0;
for(int i=0; i<n; i++){   //처음에 토마토가 다 익은 상태인 경우
for(int k=0; k<m; k++){
if(arr[i][k]==1 || arr[i][k]==-1){
count++;
}
}
}
if(count==n*m){
cout << 0;
return 0;
}
 queue<pair<int,int>>q;
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
if(arr[i][k]==1){

q.push({i,k});   
}
}
}

for(int i=0; i<n; i++){  // 처음에 토마토가 다 익은 상태가 아니다
for(int k=0; k<m; k++){
if(arr[i][k]==-1){
continue;
}
if(arr[i][k]==1 && vis[i][k]==0){


while(!q.empty()){
pair<int,int> cur = q.front();
q.pop();
for(int dir=0; dir<4; dir++){
int nx = cur.X+dx[dir];   
int ny = cur.Y+dy[dir]; 
if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
if(arr[nx][ny]==1 ||arr[nx][ny]==-1 || vis[nx][ny]==1) continue;
q.push({nx,ny});
vis[nx][ny]=1;
dist[nx][ny]=dist[cur.X][cur.Y]+1;  //토마토가 모두 익을 때 까지의 최소 날짜
arr[nx][ny]=1;

//cout << "디버깅용 상황 nx ny" << '\n' ;
//cout << nx << " " << ny << '\n';

/*for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
cout << arr[i][k] << " ";
}
cout <<'\n';
}*/


}

}
}



}
}
bool sensor = false;






for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
if(arr[i][k]==0){
sensor = true;
}
}
}

if(sensor == true){  // 0이 마지막에 남아 있으면 토마토가 모두 익지 못함
cout << -1;
}


else{
int max= dist[0][0];
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
if(max<dist[i][k]){
max = dist[i][k];
}

}
}
cout << max;
}
}