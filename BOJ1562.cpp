#include <iostream>
#include <string>
using namespace std;

int main(){
char arr[100][100];
int n;
cin >> n;

// 방 세팅완성
for(int i=0; i<n; i++){
for(int k=0; k<n; k++){
char input;
cin >> input;
arr[i][k]=input;
}
}

// 잘 곳 찾기
int row_count=0;
int cloumn_count=0;
int count=0;
int count1=0;
for(int i=0; i<n; i++){
count=0;
count1=0;
for(int k=0; k<n; k++){
if(arr[i][k]=='X'){
if(arr[i][k]=='X'&&count>=2){ //중간에 짐
row_count++;
}
count=0;
}
else{
count++;
}

if(arr[k][i]=='X'){
if(arr[k][i]=='X'&&count1>=2){ //중간에 짐
cloumn_count++;
}
count1=0;
}
else{
count1++;
}

if(k==n-1){
if(count>=2){ //끝
row_count++;
}
if(count1>=2){ //끝
cloumn_count++;
}
}
}
}


cout << row_count << " " << cloumn_count;

}