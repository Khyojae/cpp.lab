#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int arr[100][100][100];
bool vis[100][100][100];
int dist[100][100][100];

int main(){

int dx[6]= {1,0,-1,0,0,0};
int dy[6]= {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

int n,m,r;
cin >> n >> m >> r;
//swap(n,r);
int Max=100;
// 예제 입력 3이 문제

fill(&vis[0][0][0],&vis[0][0][0]+Max*Max*Max,false);
fill(&dist[0][0][0],&dist[0][0][0]+Max*Max*Max,0);

for(int i=0; i<r; i++){ // 5
for(int k=0; k<m; k++){  // 3
for(int s=0; s<n; s++){  // 2
int num;
cin >> num;
arr[i][k][s]=num;
}
}
}

int count=0;
for(int i=0; i<r; i++){   //처음에 토마토가 다 익은 상태인 경우
for(int k=0; k<m; k++){
for (int s=0; s<n; s++){

if(arr[i][k][s]==1 || arr[i][k][s]==-1){
count++;
}

}
}
}

if(count==n*m*r){
cout << 0;
return 0;
}

queue<tuple<int,int,int>>q;
for(int i=0; i<r; i++){
for(int k=0; k<m; k++){
for(int s=0; s<n; s++){

if(arr[i][k][s]==1){
q.push(make_tuple(i,k,s));   
}

}
}
}


for(int i=0; i<r; i++){  // 처음에 토마토가 다 익은 상태가 아니다
for(int k=0; k<m; k++){
for(int s=0; s<n; s++){
    
if(arr[i][k][s]==-1){
continue;
}




while(!q.empty()){
tuple<int,int,int> cur = q.front();
q.pop();
for(int dir=0; dir<6; dir++){
int nz = get<0>(cur)+dz[dir];   
int ny = get<1>(cur)+dy[dir];
int nx = get<2>(cur)+dx[dir];
//swap(nx,nz);
if(nx<0 || nx>=n || ny<0 || ny>=m || nz<0 || nz>=r) continue;
if(arr[nz][ny][nx]==1 ||arr[nz][ny][nx]==-1 || vis[nz][ny][nx]==1) continue;
q.push({nz,ny,nx});
vis[nz][ny][nx]=1;
dist[nz][ny][nx]=dist[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;  //토마토가 모두 익을 때 까지의 최소 날짜
arr[nz][ny][nx]=1;

//cout << "디버깅용 상황 nz ny nx" << '\n' ;
//cout << nz << " " << ny << " " << nx << '\n';

/*for(int i=0; i<r; i++){
for(int k=0; k<m; k++){
for (int s=0; s<n; s++){
cout << arr[i][k][s] << " ";
}
cout <<'\n';
}
cout <<'\n';
}
*/
}

}

}




}
}
bool sensor = false;






for(int i=0; i<r; i++){
for(int k=0; k<m; k++){
for(int s=0; s<n; s++){

if(arr[i][k][s]==0){
sensor = true;
}

}
}
}

if(sensor == true){  // 0이 마지막에 남아 있으면 토마토가 모두 익지 못함
cout << -1;
}


else{
int max= dist[0][0][0];
for(int i=0; i<r; i++){
for(int k=0; k<m; k++){
for(int s=0; s<n; s++){

if(max<dist[i][k][s]){
max = dist[i][k][s];
}

}
}
}
cout << max;
}
}