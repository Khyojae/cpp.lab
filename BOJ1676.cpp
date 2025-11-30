#include <iostream>
#include <string>
using namespace std;


int main(){
int n;
int count=0;
cin >> n;
for(int i=1; i<=n; i++)
{if(i%125==0){
count+=3;
}   
else if(i%25==0){
count+=2;
}
else if(i%5==0){
count+=1;
}}
cout << count;

}