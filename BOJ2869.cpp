#include <iostream>
using namespace std;
#include <cmath>
int main(){

int A,B,V;
int count=0;
cin >> A >> B >> V;


int day =ceil((double)(V-A)/(A-B))+1;
cout << day;
}