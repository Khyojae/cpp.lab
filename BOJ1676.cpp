#include <iostream>
#include <string>
using namespace std;


int main(){
int n;
int a=0;
int b=4;
int count=0;
cin >> n;
for(int i=1; i<=n; i++)
{if(n%125==0){
count+=3;
}   
else if(n%25==0){
count+=2;
}
else if(n%5==0){
count+=1;
}}


}