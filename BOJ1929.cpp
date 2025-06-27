#include <iostream>
using namespace std;
int main(){
int a;
int b=0;
int k=1;
int count=0;
cin >> a;


while(1){

b=b+k;
k=k+1;
count++;
if(a<b){
cout << count-1;
return 0;
}
}

}