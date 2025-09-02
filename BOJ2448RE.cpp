#include <iostream>
using namespace std;
char arr[3072][6144]={0};

void star(int x, int y, int siz){
if(siz==3){
arr[x][y]='*';
arr[x+1][y-1]='*';
arr[x+1][y+1]='*';
arr[x+2][y-2]='*';
arr[x+2][y-1]='*';
arr[x+2][y]='*';
arr[x+2][y+1]='*';
arr[x+2][y+2]='*';
}
else{
int new_siz=siz/2;
star(x,y,new_siz);
star(x+new_siz,y-new_siz,new_siz);
star(x+new_siz,y+new_siz,new_siz);
}
}

int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
for(int k=0; k<2*n-1; k++){
arr[i][k]=' ';
}
}
star(0,n-1,n);
for(int i=0; i<n; i++){
for(int k=0; k<2*n-1; k++){
cout << arr[i][k];
}
cout << '\n';
}

}