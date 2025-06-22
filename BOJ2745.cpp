#include <iostream>
using namespace std;
int main(){
string str;
int brr[26] = {0};
char arr[26] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z'
};

cin >> str;
for(int p=0; p<str.length();p++){
for(int i=0; i<26; i++){
if(str[p]==arr[i]){
brr[i] +=1; 
}
}
}

for(int i=0; i<26; i++){
cout<<brr[i]<<" ";
}

}


