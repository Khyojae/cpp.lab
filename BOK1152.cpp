#include <iostream>
#include <string>
using namespace std;
int main(){
string q;
int count =0;

getline(cin,q);
for(int i=0; i<q.length();i++){
if(q[0]==' '&& q.length()==1){
    cout << "0";
    return 1;
}


if(q[i]==' ' && i>0){
count ++;
}

if(q[i]==' ' && i==q.length()-1){
count = count-1;
}

}

cout << count+1;
}

