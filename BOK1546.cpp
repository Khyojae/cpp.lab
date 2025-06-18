#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int arr[1000];
int brr[1000];
int k=0;
int max;

cin >> k;
for(int i=0; i<k; i++)
{
cin >> arr[i];
brr[i]=arr[i];
}

//큰 수 찾기
for(int j=0; j<k-1; j++){
for(int i=k-1; i>j; i--){
if(brr[i-1]<=brr[i]){
swap(brr[i-1],brr[i]);
}
}
}


max=brr[0];

//다시 재정렬

int b=0;

for(int i=0; i<k; i++){
    b=b+brr[i];
}
cout << fixed << setprecision(6);
cout << double(b) * 100 / (max * k);


return 0;
}