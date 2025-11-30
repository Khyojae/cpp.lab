#include <iostream>
using namespace std;
int main(){
char arr[8][8];
int count=0;
for(int i=0; i<8; i++){
for(int k=0; k<8; k++){
cin>> arr[i][k];
}
} 

for(int i=0; i<8; i=i+2){  // i하고 k 둘다 짝수여야함
for(int k=0; k<8; k=k+2){
if(arr[i][k]=='F'){
count++;
}
}
} 

for(int i=1; i<8; i=i+2){  // i하고 k 둘다 짝수여야함
for(int k=1; k<8; k=k+2){
if(arr[i][k]=='F'){
count++;
}
}
} 

cout << count;
}