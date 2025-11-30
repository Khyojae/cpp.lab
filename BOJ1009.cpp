#include <iostream>
using namespace std;
int main(){
int n;
int a, b;
cin >> n;
for(int i=0; i<n; i++){
cin >> a >> b;
if(a==1){
cout << 1;
}
else if(a==2){
if(b%4==1){
cout << 2;
}
else if(b%4==2){
cout << 4;
}
else if(b%4==3){
cout << 8;
}
else if(b%4==0){
cout << 6;
}
}

else if(a==3){
if(b%4==1){
cout<<3;
}    
else if(b%4==2){
cout<<9;
}
else if(b%4==3){
cout<<7;
}
else if(b%4==0){
cout<<1;
}
}

else if(a==4){
if(b%2==1){
cout << 4;
}  
else if(b%2==0){
cout << 6;
}
}

else if(a==5){
cout << 5;
}

else if(a==6){
cout << 6;
}

else if(a==7){
if(b%4==1){
cout << 7;
}    
else if(b%4==2){
cout << 9;
}
else if(b%4==3){
cout << 3;
}
else if(b%4==0){
cout << 1;
}
}

else if(a==8){
if(b%4==1){
cout << 8;
}
else if(b%4==2){
cout << 4;
}
else if(b%4==3){
cout <<2;
}
else if(b%4==0){
cout << 6;
}
}
else if(a==9){
if(b%2==1){
cout << 9;
}
else if(b%2==0){
cout << 1;
}
}
else if(a==10){
cout << 10;
}
}




}