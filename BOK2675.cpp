#include <iostream>
#include <string>
using namespace std;
int main(){

int k;
int p;
string q;

cin >> k;
for (int i=0 ; i<k; i++){
cin >> p;
cin >> q;
for(int l=0; l<p; l++){
    for(int i=0; i<p; i++) {
    cout <<q[l];
}
}
cout << endl;
}



}