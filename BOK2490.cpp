#include <iostream>
using namespace std;

int main(){
int count =0;
int arr[12];
for (int i=0; i<=11; i++){
cin >> arr[i];
}

for(int i=0; i<=2; i++){
count =0;
for(int k=4*i; k<4*i+4; k++){
if(arr[k]==0){
count ++;
}
}

if(count ==0){
    cout<<"E"<<endl;
}
if(count ==1){
    cout<<"A"<<endl;
}
if(count ==2){
    cout<<"B"<<endl;
}
if(count ==3){
    cout<<"C"<<endl;
}
if(count ==4){
    cout<<"D"<<endl;
}
}




}