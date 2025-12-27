#include <iostream>
using namespace std;
int main(){
int x,y,w,h;
cin >> x >> y >> w >> h;
int arr[4] ={x, y, h-y, w-x};

for(int i=0; i<4; i++){
for(int k=3; k>i; k--){
    if(arr[k]<arr[k-1]){
        swap(arr[k],arr[k-1]);
    }
}
}
cout << arr[0];

}