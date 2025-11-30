#include <iostream>
#include <string>
using namespace std;
int main(){
string p;
getline(cin,p);

while(p[0]!=' ' && p[p.length()-1]!=' '&& p!=""){

for(int i=0; i<p.length(); i++){
    cout<< p[i];
}
cout << endl;
getline(cin,p);
}

}