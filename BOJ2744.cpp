#include <iostream>
#include <string>
using namespace std;
int main(){
string input;
cin >> input;

for(int i=0; i<input.length(); i++){
if(input[i]>=65 && input[i]<=90){
input[i]+=32;
}
else if(input[i]>=97 && input[i]<=122){
input[i]-=32;
}
}
cout << input;
}