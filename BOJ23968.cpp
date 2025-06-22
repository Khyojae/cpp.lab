#include <iostream>
using namespace std;
int main(){
int count=0;
int p,q;
int r;
int arr[10];
cin >> p>> q;
for(int i=0; i<p; i++){
cin >> arr[i];
}

for(int i=p-1; i>1; i--){
for(int k=0; k<i; k++){
if(arr[k]>arr[k+1]){
swap(arr[k],arr[k+1]);
count++;
}
if(count==q){
r=k;
i=0;
break;
}
}
}
if(count<q){
    cout << "-1";
}
else{
cout << arr[r] << " " << arr[r+1];
}


}