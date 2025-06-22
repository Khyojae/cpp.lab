#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n;
int count=0;

cin >> n;
for (int i=1; i<n; i++){
string str = to_string(i);
int arr[100];
int b=0;
for(int k=0; k<str.length(); k++){
arr[k]=str[k]-'0';

}
for(int p=0; p<str.length(); p++){
b+=arr[p];

}
if(b+i==n){
cout << i;
return 0;
}
count++;
}
if(count>0){
cout << '0';
}


}