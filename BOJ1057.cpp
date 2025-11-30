#include <iostream>
using namespace std;
int main(){
int a,b;
int n;
int count=0;
cin >> n >> a >> b;
while(a!=b){
if(a%2==0){
a=a/2;
}
else if(a%2==1){
a=(a/2)+1;
}

if(b%2==0){
b=b/2;
}
else if(b%2==1){
b=(b/2)+1;
}
count++;
}


cout << count;

}