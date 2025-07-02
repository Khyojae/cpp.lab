#include <iostream>
using namespace std;
int main(){
double a,b;
int c;
int d;
cin >> a >> b;
cin >> c;
cin >> d;
for(int i=d; i<=100; i++){
if(a*d+b<=c*d && c>a){
cout << 1;
}

else{
cout << 0;
}
}

}