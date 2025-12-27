#include <iostream>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
int arr[100];

int a,b;

for(int i=1; i<=100; i++){
    arr[i]=i;
}

for(int i=0; i<m; i++){ // 나머지 줄 반복해야함
cin >> a >> b;

for(int i=0; i<=(b-a)/2; i++){ // 대칭성!
swap(arr[a+i],arr[b-i]);

}
}

for(int i=1; i<=n; i++){
    cout << arr[i] << ' ';
}
return 0;
}