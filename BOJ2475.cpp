#include <iostream>
#include <string>
using namespace std;
int main(){
string str;
int n;
int b=0;
char arr[36]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                   'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                   'U', 'V', 'W', 'X', 'Y', 'Z'};


cin >> str >> n;
for(int i=0; i<=str.length(); i++){
b= b+pow(n,i); 
}





}