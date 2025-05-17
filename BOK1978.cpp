#include <iostream>
using namespace std;
int main(){

int n;
int arr[4];
int count=0;
int result=0;

//몇개 입력할꺼냐
cin >> n;

// 입력하셈
for(int i=0; i<n; i++){
    cin >> arr[i]; 
}

// 소수개수 판단
for(int i=0; i<n; i++){
    count =0;
    for(int q=1; q<=arr[i]; q++){
        if(arr[i]%q==0){
count++;
        }
    }
    if(count==2){
        result++;
    }
}

cout << result;

}