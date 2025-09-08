#include <iostream>
using namespace std;
char arr[1000][1000]={0};

void star(int x, int y, int siz){
if(siz==1){
arr[y][x]='*';
return ; 
}
else{
int len= 4*siz-3;
int llen=4*siz-1;

for(int i=x; i<x+len; i++) arr[y][i]='*';
for(int i=y; i<y+llen; i++) arr[i][x]='*';
for(int i=x; i<x+len; i++) arr[y+llen-1][i]='*';
for(int i=y+2; i<y+llen; i++) arr[i][x+len-1]='*';
for(int i=x+2; i<x+len-1; i++) arr[y+2][i]='*';
for(int i=y+3; i<y+llen-2; i++) arr[i][x+2]='*';
star(x+2,y+2,siz-1);
}
}

int main(){
int n;
cin >> n;
int x_siz=-3+4*n;
int y_siz=-1+4*n;
for(int i=0; i<y_siz; i++){
for(int j=0; j<x_siz; j++){
arr[i][j]=' ';
}
}

if(n==1){
cout<<'*';
return 0;
}
star(0,0,n);

for(int i=0; i<y_siz; i++){
int last = x_siz;
while(last>=0 && arr[i][last]==' ') last--;
for(int j=0; j<=last; j++){
cout << arr[i][j];
}

cout << '\n';
}


}