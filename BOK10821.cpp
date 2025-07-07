#include <iostream>
using namespace std;
int main(){

string str;
cin >> str;
int count=1;

for(int i=0; i<str.length()-1; i++){
if(str[i]==','){
    count++;
}


}
cout << count;



}