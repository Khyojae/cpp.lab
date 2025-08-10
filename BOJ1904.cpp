#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<long long> vc(1000001);
vc[1]=1;
vc[2]=2;
long long input;
cin >> input;
if(input==1){
cout << 1;
return 0;
}

else if(input ==2){
cout << 2;
return 0;
}

else{
for(int i=3; i<=input; i++){
vc[i]=(vc[i-1]%15746+vc[i-2]%15746)%15746;
}

}
cout << vc[input];

}