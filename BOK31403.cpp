#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout<< a+b-c;
    string p = to_string(a);
    string q = to_string(b);
    int num = stoi(p+q);
    
    cout << num - c;
}