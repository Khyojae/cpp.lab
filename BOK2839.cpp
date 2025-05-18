#include <iostream>
using namespace std;
int main(){

int k=0;
int p=0;
int q=0;
int result =-1;
cin >> k;



for(int p=0; p<=k/5;p++){
if(k%5==0){
    result =k/5;
    
}
    for(int q=0; q<=k/3;q++){
if(k%3==0){
    result= k/3 ;

}
if(k%15==0){
  result =( k/5 > k/3) ? k/3 : k/5;

}
  if(5*p+3*q==k&&k%3==0){
            
            result =( p+q > result) ? result : p+q;
           
        }
  if(5*p+3*q==k&&k%5==0){
            
            result =( p+q > result) ? result : p+q;
           
        }
   
    
}
}

cout << result;

}