#include <iostream>
using namespace std;
int main() {
char arr[26];
char brr[26];
int crr[26];

string a;
for(int i=0; i<26; i++){
    arr[i]=65+i;
    brr[i]=97+i;
    crr[i]=0;
}


cin >> a;  //문자열 a는 몇개인지 확인해야함

for (int i=0; i<a.length(); i++){
 for(int k=0; k<26; k++){
if(a[i]==arr[k] || a[i]==brr[k]){
crr[k]=crr[k]+1;
 }   
}

//뭐가 제일 크다
int min = crr[0];
for(int i=0; i<26; i++){
if(min<crr[i]){
    min=crr[i];
}
}

int count=0;
for(int i=0; i<26; i++){
    if(crr[i]==min){
        count++;
    }
}

if(count>1){
    cout << "?";
}
else{
   cout<< arr[i]; 
}

}




}