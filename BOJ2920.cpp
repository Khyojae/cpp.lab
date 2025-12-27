#include <iostream>
using namespace std;
int main(){

int a; 
int b[8];

int count0=0;
int count1=0;

for(int i=0; i<8; i++){
cin >> a;
b[i]=a;
}

for(int i=0; i<7; i++){
if(b[i]<b[i+1]){
 count0= count0+1;   
}

if(b[i]>b[i+1]){
 count1= count1+1;   
}
}

if(count0==7){
    cout << "ascending";
}

else if(count1==7){
    cout << "descending";
}

else{
cout << "mixed";
}

}