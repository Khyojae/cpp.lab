#include <iostream>
using namespace std;
int arr[2187][2187]={0};

int zero = 0;
int minus1 = 0;
int one = 0;

void cut(int x, int y, int siz){
int first = arr[y][x];
bool swi = false;

for(int i=y; i<y+siz; i++){
for(int j=x; j<x+siz; j++){
if(arr[i][j]!=first){
swi=true;
break;
}
}
}
if(swi == true){
int nxt = siz/3;
cut(x,y,nxt);
cut(x+nxt,y,nxt);
cut(x+nxt*2,y,nxt);
cut(x,y+nxt,nxt);
cut(x+nxt,y+nxt,nxt);
cut(x+nxt*2,y+nxt,nxt);
cut(x,y+nxt*2,nxt);
cut(x+nxt,y+nxt*2,nxt);
cut(x+nxt*2,y+nxt*2,nxt);
}
else{
if(first==0){
zero++;
}
else if(first==1){
one++;
}
else{
minus1++;
}
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

cut(0,0,n);
cout << minus1 << '\n';
cout << zero << '\n';
cout << one << '\n';
}