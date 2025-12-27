#include <iostream>
using namespace std;

int arr[129][129]={0};
int sum[129][129]={0};
int blue=0;
int white=0;
/*
한 블록에 색이 통일이 안되면 나눈다
쪼개고 첨부터 끝까지 확인하기
멈추는 조건 : 블록 한개 남을 때
인수 -> 정사각형의 길이 
*/


void solve(int y, int x, int size){
int start_color=arr[y][x];
bool is_same = true;

for(int i=y; i<y+size; i++){
for(int j=x; j<x+size; j++){
if(arr[i][j]!=start_color){
is_same=false;
break;
}
}


}

if(is_same){
if(start_color==0){
white++;
}
else{
blue++;
}
}
else{
int next_size = size/2;
solve(y,x,next_size);
solve(y,x+next_size,next_size);
solve(y+next_size,x,next_size);
solve(y+next_size,x+next_size,next_size);
}
}



int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
for(int k=0; k<n; k++){
int input;
cin >> input;
arr[i][k]=input;

}
}

solve(0,0,n);
cout << white << '\n';
cout << blue << '\n';



}