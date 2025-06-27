#include <iostream>
using namespace std;
int main(){
char arr[8][8];
int count=0;
for(int i=0; i<8; i++){
for(int k=0; k<8; k++){
arr[i][k]='.';
}
} 

for(int i=0; i<8; i+2){  // i하고 k 둘다 짝수여야함
for(int k=0; k<8; k+2){
if(arr[i][k]=='F'){
count++;
}
}
} 


cout << count;
}