#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[10];
bool isused[10];

void func(int k){
if(k==m){  // 여기는 인출만 담당하기 때문에 건들면 안됨
for(int i=0; i<m; i++)
    cout << arr[i] << ' ';
cout << '\n';
return;
}

// 1. n번 나와야해
// 2. 순차탐색이니 출력 뭐 나올건지 check
for(int i=1; i<=n; i++){
arr[k]=i;   // 출력 뭐 나올건지
isused[i]=1;  // 켜고

if(k>=1 && (arr[k-1]>arr[k])){
continue;
}
if(isused[i]){  // 되돌아올때 걸려서
func(k+1);   // 걸림
}
for(int i=0; i<n;i++){  // 다 0으로
isused[i]=0;
}
}
}



int main(){
cin >> n >> m;
func(0);
}