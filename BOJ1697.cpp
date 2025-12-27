#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define x first
#define y second
int board[100000];
bool vis[100000];



using namespace std;
int main(){
queue<int>Q;
int n,m;
cin >> n >> m;
int min=0;
board[n]=0;

if(n==m){
cout << 0;
}

while(n!=m){
Q.push(n);
vis[n]=1;

while(!Q.empty()){
int cur = Q.front();
Q.pop();
int dx[3] ={1,-1,cur};
for(int dir=0; dir<3; dir++){
int nx= cur+dx[dir];
if(vis[nx]==1)  continue;
if(nx<0 || nx>100000)  continue;
vis[nx]=1;
Q.push(nx);
board[nx]=1+board[cur];
min = board[nx];
if(nx==m){
cout << min;
return 0;
}
}
}


}
//초가 있어야함 
}

