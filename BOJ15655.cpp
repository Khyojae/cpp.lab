#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;
int arr[10];
bool isused[10];

void func(int k,vector<int>& vc){
if(k==m){  // 여기는 인출만 담당하기 때문에 건들면 안됨
for(int i=0; i<m; i++)
    cout << arr[i] << ' ';
cout << '\n';
return;


}

// 1. n번 나와야해
// 2. 순차탐색이니 출력 뭐 나올건지 check
for(int i=1; i<=n; i++){

if(!isused[i-1]){  // 되돌아올때 걸려서
int a =vc[i-1];
arr[k]=a;   // 출력 뭐 나올건지
isused[i-1]=1;  // 켜고
if(k>=1){
if(arr[k-1]>=arr[k]){// 3  2     
continue;
} 
}
func(k+1,vc);   // 걸림
isused[i-1]=0;  // 끄기 ( 다음에 쓸려고)
}

for(int i=0; i<=n; i++){ // 안되는거 되게
isused[i-1]=0;
}

}
}



int main(){
cin >> n >> m;
vector<int>vc;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());
func(0,vc);
}