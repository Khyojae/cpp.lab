#include <iostream>
using namespace std;
int main(){
double a;
double b=0;
double k=1;
double count=0;
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