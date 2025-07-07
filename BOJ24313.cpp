#include <iostream>
using namespace std;
int main(){
double a,b;
int c;
int d;
bool e;
cin >> a >> b;
cin >> c;
cin >> d;

for(int i=d; i<=100; i++){
if(a*i+b>c*i){
cout << 0;
return 0;
}
}


cout << 1;

}