#include <iostream>
using namespace std;
int arr[65][65]={0};
int first;

void cut(int n, int r, int c){
first=arr[c][r];
bool swi=false;
for(int i=c; i<c+n; i++){
for(int j=r; j<r+n; j++){
if(first!=arr[i][j]){
swi=true;
break;
}
}
}

if(swi==false){
if(first==0){
cout<< '0';
}
else{
cout<< '1';
}
}
else{
int new_siz=n/2;
cout << '(';
cut(new_siz,r,c);
cut(new_siz,r+new_siz,c);
cut(new_siz,r,c+new_siz);
cut(new_siz,r+new_siz,c+new_siz);
cout << ')';
}
}

int main(){
int n;
cin >> n;
for(int i=0; i<n; i++){
for(int k=0; k<n; k++){
char input;
cin >> input;
arr[i][k]=input-'0';
}
}

cut(n,0,0);




}