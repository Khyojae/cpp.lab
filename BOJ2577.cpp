#include <iostream>
using namespace std;
int main(){
int a,b,c;

cin >> a;
cin >> b;
cin >> c;

int temp=a*b*c;
int d[100];
int i=0;
int a0=0;
int a1=0;
int a2=0;
int a3=0;
int a4=0;
int a5=0;
int a6=0;
int a7=0;
int a8=0;
int a9=0;

while(temp>0){
d[i]= temp%10;
temp /=10;
i++;
}


for(int k=0; k<=i ;k++){

if(d[k]==0){
a0=a0+1;
}

if(d[k]==1){
   a1=a1+1; 
}

if(d[k]==2){
 a2=a2+1;   
}

if(d[k]==3){
a3=a3+1;    
}

if(d[k]==4){
 a4=a4+1;   
}

if(d[k]==5){
 a5=a5+1;   
}

if(d[k]==6){
a6=a6+1;  
}

if(d[k]==7){
a7=a7+1;
}

if(d[k]==8){
a8=a8+1;    
}

if(d[k]==9){
a9=a9+1;    
}

}
cout << a0 << endl << a1 << endl << a2 << endl<< a3<< endl << a4 << endl << a5<< endl << a6 << endl << a7 << endl << a8<< endl << a9;
    
}