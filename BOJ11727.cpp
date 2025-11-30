#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vc(1001);
vc[1]=1;
vc[2]=3;


int input;
cin >> input;


if(input==1){
cout << 1;
return 0;
}

if(input==2){
cout << 3;
return 0;
}

for(int i=3; i<=input; i++){
vc[i]=(vc[i-1]+vc[i-2]*2)%10007;
}
cout << vc[input];


}