#include <iostream>
using namespace std;
int main(){
int p,q;
int arr[10000];
int index=-1;
int b=0;

cin >> p >> q;
for(int i=p; i<=q; i++){
int count=0;
if(i==1){
    continue;
}

for(int k=2; k<=i; k++){
if(i!=k){
if(i%k==0){  // count>0 => 나는 소수 아니다
count++;
}
}

}
if(count==0){
index++;
arr[index]=i;
}
}

if(index>=0){
for(int i=0; i<=index; i++){
b+= arr[i];
}
cout << b <<endl << arr[0];
}
else{
    cout << "-1";
}




}