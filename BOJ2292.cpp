#include <iostream>
using namespace std;
int main(){

int n;
int i=1;
int k=1;

cin >> n;

while(n>k){
k=k+6*(i);
i++;
}
cout << i;
}