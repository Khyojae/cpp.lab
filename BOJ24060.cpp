#include <iostream>
using namespace std;
const int mx=500000;
int arr[mx];
int tmp[mx];
int p,q,r;
int cnt=0;
int n,k;
void merge(int arr[],int p,int q,int r, int k){
int i=p;
int j=q+1;  // 가운데 변수
int t=0;

while(i<=q && j<=r){
if(arr[i]<=arr[j]){
tmp[t++]=arr[i++];
}

else{
tmp[t++]=arr[j++];
}
}
while(i<=q){
tmp[t++]=arr[i++];
}

while(j<=r){
tmp[t++]=arr[j++];
}

i=p;
t=0;
while(i<=r){

arr[i++]=tmp[t++];
cnt++;

if(cnt==k){
cout << tmp[t-1];
}


}

}


void merge_sort(int arr[],int p,int r, int k){
if(p<r){
int q=(p+r)/2;    
merge_sort(arr,p,q,k);
merge_sort(arr,q+1,r,k);  //쪼개라
merge(arr,p,q,r,k);  // 합쳐라
}
}



int main(){

cin >> n;
cin >> k;

for(int i=0; i<n; i++){
int input;
cin >> input;
arr[i]=input;
}
merge_sort(arr,0,n-1,k);
if(cnt<k){
cout << -1;
}

}