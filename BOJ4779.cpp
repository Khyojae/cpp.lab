#include <iostream>
#include <vector>
using namespace std;
string ans(int n){
if(n==0){
return "-";
}
string a = ans(n-1);
string b="";
for(int i=0; i<a.length(); i++){
b+=" ";
}
return a+b+a;
}

int main(){
int n;
while(cin>>n){
cout << ans(n);
}


}