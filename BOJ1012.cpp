#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define X first
#define Y second
int main() {
int label=0;
const int Max = 50; 
int k=0;
int adj[Max][Max];
bool vis[Max][Max];



int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int count=0;
int n, m, b;
cin >> count;
while(count>0){
cin >> m >> n >> b;
fill(&vis[0][0], &vis[0][0] + Max * Max, false); // 입력 후 초기화!
    
for(int i=0; i<m; i++){  // 보드판 0으로 초기화
        for(int k=0; k<n; k++){   
            adj[i][k]=0;
        }
    }

  for(int p=0; p<b; p++){  
    int i,k;           // 배추를 심자
    cin >> i;
    cin >> k;    
    adj[i][k]=1;
    }

    cout << "디버깅용 현재 위치" << '\n';
  for(int i=0; i<m; i++){  // 보드판 0으로 초기화
        for(int k=0; k<n; k++){   
            cout << adj[i][k] << ' ';
        }
        cout <<'\n';
    }
  


int sensor=false;
  for(int i=0; i<m; i++){
    for(int k=0; k<n; k++){
  
  if(vis[i][k]==0 && adj[i][k]==1){  // 아예 새로발견
        //  sensor=false;
        cout << "좌표 : " << i << " " << k << '\n';
        label++;
  vis[i][k]=1;

  queue<pair<int,int>> q;
 q.push({i,k});
   vis[i][k] = true;
    while (!q.empty()) {
        pair<int,int> cur = q.front(); 
        q.pop();

        for (int dir =0; dir<4; dir++) {
          int nx = cur.X+dx[dir];
          int ny = cur.Y+dy[dir];
          
          if(nx<0 || nx>=m || ny<0 || ny>=n) continue;
          cout << " 방문 첫번째 " << nx << " " << ny << '\n';
            if (vis[nx][ny] || adj[nx][ny]!=1) continue;
            q.push({nx,ny});
 
            vis[nx][ny] = true;
     
            cout << "방문 " << nx << " " << ny << '\n';
        }
    }
 }
 
  
    }
  
  }
  
cout << label << '\n';
  count--;
  


}
    

}
