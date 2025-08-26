#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
int arr[101]={0};
int visited[101]={0};
int dir[7]={0,1,2,3,4,5,6};

for(int i=1; i<=100; i++){
arr[i]=i;
}

int n,m;
cin >> n >> m;

for(int i=0; i<n; i++){
int u,v;
cin >> u >> v;
arr[u]=v;
}

for(int i=0; i<m; i++){
int u,v;
cin >> u >> v;
arr[u]=v;
}

queue<pair<int,int>>q;
int cnt=0;
q.push({1,0});

while(!q.empty()){
auto [cur,cnt] = q.front();
q.pop();

if(cur==100){
cout << cnt;
return 0;
}

for(int num=1; num<=6; num++){
int nx = dir[num] + cur;

if(nx>100){
continue;
}

nx=arr[nx];

if(!visited[nx]){
visited[nx]=true;
q.push({nx,cnt+1});
}
}


}


}