#include <iostream>
#include <string>
using namespace std;
int main(){
string s1 = "hello world";
size_t pos = s1.find("world"); // find
if(s1.find("world") !=string::npos){
    cout << "Yes"<< '\n';
}

string s2 = "hello world";
s2.replace(6,5,"C++");  // replace
cout << s2 << '\n';


string s3 = "abcdef";
s3.erase(2,2);   // erase
cout << s3 << '\n';

string s4 = "hello";
s4.insert(2,"XX");  // insert
cout << s4 << '\n';

// 시간복잡도 줄일려면 관련 함수 뭐 있는지 생각해보는것도 ㄱㅊ
}