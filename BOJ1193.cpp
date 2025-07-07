#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

int w;
cin >> w;
string s = to_string(w);
int arr[10];
int brr[10];
int crr[10];
int r=0;


for(int i=0; i<s.length(); i++){
   arr[i] = s[i] - '0'; 
}

for(int i=0; i< s.length(); i++){
    cout << arr[i] << " ";
}

for(int i=0; i<s.length();i++){
for(int k=0; arr[i]>0; k++){
    brr[r]=arr[i]%2;
    arr[i]=arr[i]/2;
    crr[i]=
    r++;
}
}


}