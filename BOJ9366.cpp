#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int a,b,c;
int n;
cin >> n;


for(int i=0; i<n; i++){
cin >> a>> b>> c;

cout << "Case #"<< i+1 << ": ";

if(a+b>c && a+c>b && b+c>a){

if(a==b==c){
cout<< "equilateral triangle" << endl;
}
if(a!=b&& a!=c && b!=c){
cout<< "scalene triangle" << endl;
}
if((a==b&& a!=c) || (a==c&& b!=c) || (b==c && (a!=b))){
cout<< "isosceles triangle" << endl;
}

}
else{
cout << "invalid!" << endl;
}
}
}