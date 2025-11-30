#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int cnt=0;
int board[15][15]={0};


//이전 state의 상하좌우에 없어야함
bool isSafe(int row,int col){
for(int i=0; i<n; i++){
if(board[i][col]==1) return 0;
}
int x= row-1;
int y= col-1;

while(x>=0 && y>=0 ){
if(board[x][y]==1) return 0;
x-=1;
y-=1;
}

x=row-1;
y=col+1;
while(x>=0 && y<15){
if(board[x][y]==1) return 0;
x-=1;
y+=1;
}
return 1;
}

//row : 행에 배치한 row
void eightQueen (int row){
if(row >=n){
cnt++;
return; 
}  //모든 행에 퀸을 배치한 경우 -> 성공

//현재 행에 퀸을 배치할 수 있는 모든 열을 시도
for(int col=0; col<n; col++){
    if(!isSafe(row,col)) continue;

    //현재 위치에 퀸을 배치
    board[row][col]=1;

    // 다음 행에 대해 재귀적으로 호출
    eightQueen(row+1);
    board[row][col]=0; // backtracking
}
// 현재 행의 어떤 열에서도 퀸을 배치할 수 없는 경우

}

int main(){
cin.tie(NULL);
cout.tie(NULL);
ios::sync_with_stdio(false);
cin >> n;
eightQueen(0);
cout << cnt;
}