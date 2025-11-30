#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
cin >> n;
string str;
string target ="666";
int count =1;
int  arr[10000];
int k=0;
int q=1;
while(k<n){    //k를 계속 카운트

string str = to_string(q);
if(str.find(target)!=string::npos){
arr[count]=q;
count++;
k++;  //k는 입력 숫자 카운트
}
q++;  // 출력 숫자 카운트
}



cout << arr[n];



}