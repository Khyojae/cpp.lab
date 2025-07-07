#include <iostream>
#include <algorithm>
using namespace std;
int main(){

int a,b,c;
cin >> a >> b >> c;

while(a!=0 && b!=0 && c!=0){
int arr[3]= {a,b,c};
sort(arr,arr+3);
if(arr[2]*arr[2]==(arr[1]*arr[1])+(arr[0]*arr[0])){
cout << "right"<<'\n';
}
else{
cout << "wrong"<<'\n';
}

cin >> a>> b>>c;

}

}