#include <iostream>
using namespace std;
int main(){
int arr[7];
int brr[100];


int crr[100];
int len =sizeof(arr)/sizeof(arr[0]);
int b=0;
int d=0;

for(int i=0; i<7; i++)
{
cin >> arr[i];
}

for(int k=0; k<7; k++){
int count1=0;
int count=0;
for(int i=2; i<arr[k]; i++){
   if(arr[k]%i==0){
    brr[k]=count1++;
    count++;
   }
}
if(brr[k]==0){
    crr[d]=arr[k];
    d++;
}
}




}