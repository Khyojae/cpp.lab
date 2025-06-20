#include <iostream>
using namespace std;
int main(){

char arr[5][15];

for(int i=0; i<5; i++){
cin >> arr[i];
}

for(int i=0; i<15; i++){
for(int p=0; p<5; p++){
if(arr[p][i]!=NULL){
    cout << arr[p][i];
}
}
}





}