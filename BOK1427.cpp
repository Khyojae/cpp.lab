#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){
    return a>b;
}

int main(){
int a;
cin >> a;
int arr[10];
int count=0;

// 배열 만들기
for (int i=0; a>0; i++){
 arr[i] = a%10;
 a= a/10; 
 count++;
}

sort(arr,arr+count,desc);

// 배열 출력
for (int i=0; i<count; i++){
 cout << arr[i]; 
}



}