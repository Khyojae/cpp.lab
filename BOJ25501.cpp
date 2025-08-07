#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int cnt=0;

int recursion(const char*s ,int l, int r){
cnt++;
if(l>=r) {
cout << 1 << ' ';
return 1;
}

else if (s[l]!=s[r]){
cout << 0 << ' ';
return 0;
} 
else return recursion(s,l+1,r-1);
}

int isPalindrome(const char *s){
return recursion(s,0,strlen(s)-1);
}


int main(){
int num;
cin >> num;
for(int i=0; i<num; i++){
cnt=0;
string input;
cin >> input;
isPalindrome(input.c_str());
cout << cnt << '\n';
}


}