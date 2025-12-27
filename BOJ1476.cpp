#include <iostream>
using namespace std;
int main(){
int E=1,S=1,M=1;
int A,B,C;
int count=1;
cin >> A >> B >> C;
while(E!=A || S!=B || M!=C){
E+=1;
S+=1;
M+=1;
if(E>15){
E=1;
}
if(S>28){
S=1;
}
if(M>19){
M=1;
}
count++;
}
cout << count;

}