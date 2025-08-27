#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int arr[1001][1001]={0};
int brr[1001][1001]={0};
bool visitied[1001][1001]={0};

int main(){
int n,m;
cin >> n >> m;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
int input;
cin >> input;
arr[i][k]=input;
}
}

queue<pair<int,int>>q;
for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
if(arr[i][k]==2){
q.push({i,k});
visitied[i][k]=1;
}

}
}

while(!q.empty()){
pair<int,int> cur = q.front();
q.pop();

int x = cur.first;
int y = cur.second;

for(int dir=0; dir<4; dir++){
int nx = cur.first + dx[dir];
int ny = cur.second + dy[dir];

if(arr[nx][ny]==0){
continue;
}

if(visitied[nx][ny]==1){
continue;
}

if(nx<0 || nx>=n || ny<0 || ny>=m){
continue;
}

brr[nx][ny]=brr[cur.first][cur.second]+1;
visitied[nx][ny]=1;
q.push({nx,ny});
}
}


for(int i=0; i<n; i++){
for(int k=0; k<m; k++){

cout << brr[i][k]<< " ";
}
cout << '\n';
}


}



