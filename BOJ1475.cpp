#include <iostream>
#include <string>
using namespace std;
int main(){
int arr[9]={0};
int brr[9]={0};
for(int i=1; i<=9; i++){
    arr[i]=i;
}
int input;
cin >> input;

int count=1;  // 필요한 세트 개수 설정
while(input!=0){
int remain=input%10;  // 9999에서 9가 남음
if(remain==6&&brr[remain]>=1){  //66인 경우
brr[9]++;    
}        
else if(remain==9&&brr[remain]>=1){  //99인 경우
brr[6]++;    
}          
else{
brr[remain]++;
}

for(int i=1; i<=9; i++){
if(brr[remain]>=2){ // 필요한 세트 수가 추가됨
count=count+(brr[remain]-1);
}
}
input=input/10;  //9999 -> 999
}
cout << count;
}