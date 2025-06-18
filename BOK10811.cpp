#include <iostream>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
int arr[100];

int a,b;

for(int i=0; i<=4; i++){
    arr[i]=i+1;
}

for(int i=0; i<m; i++){ // 나머지 줄 반복해야함
cin >> a >> b;

for(i=0; i<b-a; i++){
int temp = arr[b-i];
arr[b-i]= arr[a+i];
arr[a+i] = temp;

}
}


}