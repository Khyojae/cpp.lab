#include <iostream>
using namespace std;
int main(){
string str;
cin >> str;
int count=1;

for(int i=0; i<str.length(); i++){
cout<<str[i];
if(count%10==0){
cout<< endl;
}
count++;
}


}