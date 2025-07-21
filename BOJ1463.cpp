#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
int x;
cin >> x;
vector<int>vc(x+1);
int k=0;

vc[1]=0;
for(int i=2; i<=x; i++){
int a = vc[i-1]+1;

if(i%3==0){
int b = vc[i/3]+1;
if(a>b){
swap(a,b);
}
}

if(i%2==0){
int c = vc[i/2]+1;
if(a>c){
swap(a,c);
}
}

vc[i]=a;
}


cout << vc[x];



}