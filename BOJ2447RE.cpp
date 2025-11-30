#include <iostream>
using namespace std;
char arr[2187][2187];

void star(int x, int y, int siz){
if(siz==1){
arr[x][y]='*';
}
else{
int new_siz = siz/3;
for(int i=0; i<3; i++){
for(int k=0; k<3; k++){

if(i==1 && k==1){
continue;
}
star(x+i*new_siz,y+k*new_siz,new_siz);
}
}
}


}

int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
for(int k=0; k<n; k++){
arr[i][k]=' ';
}
}

star(0,0,n);
for(int i=0; i<n; i++){
for(int k=0; k<n; k++){
cout << arr[i][k];
}
cout << '\n';
}

}