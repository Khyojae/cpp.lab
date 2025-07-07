#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int arr[50];
vector<vector<char>> v(a, vector<char>(b,0));
for(int i=0; i<a; i++){
for(int k=0; k<b; k++){
cin >> v[i][k];  // a * b 인 체스판 생성
}
}

for(int i=0; i<a; i++){
for(int k=0; k<b; k++){
for(int p=i; p<=i+8; p++){
for(int q=k; q<=k+8; q++){
if(p>i+8 || q>k+8){
break;
}
if(v[0][0]=='W'){
if(p%2==0 && q%2==0){
if(v[p][q]=='B'){
arr[i]++;
}
}

else if(p%2==1 && q%2==0){
if(v[p][q]=='W'){
arr[i]++;
}    
}

else if(p%2==0 && q%2==1){
if(v[p][q]=='W'){
arr[i]++;
}    
}

else if(p%2==1 && q%2==1){
if(v[p][q]=='B'){
arr[i]++;
}    
}
}

else if(v[0][0]=='B'){
if(p%2==0 && q%2==0){
if(v[p][q]=='W'){
arr[i]++;
}
}

else if(p%2==1 && q%2==0){
if(v[p][q]=='B'){
arr[i]++;
}    
}

else if(p%2==0 && q%2==1){
if(v[p][q]=='W'){
arr[i]++;
}    
}

else if(p%2==1 && q%2==1){
if(v[p][q]=='B'){
arr[i]++;
}    
}
    
}
}
}
}
}
sort(arr,arr+49);
cout << arr[0];
}