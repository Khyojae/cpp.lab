#include <iostream>
#include <vector>
using namespace std;

int main(){
long long num;
cin >> num;
long long count=2;
long long ans=1;
if(num==1 || num==2 || num==3){
cout << 1;
return 0;
}

for(int i= count; i*i<=num; i++){
ans+=1;
}

cout << ans;

}