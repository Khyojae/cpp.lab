#include <iostream>
using namespace std;
int checker (int k){
int count =0;
if(1<=k && k<=99){
return k;
}
else{
for(int i=100; i<=k; i++){
int a = i/100;
int b = (i/10)%10;
int c = i%10;
if((a-b)==(b-c)){
count++;
}
}
return 99+count;
}
}

int main(){
int n;
cin >> n;
cout << checker(n);

}