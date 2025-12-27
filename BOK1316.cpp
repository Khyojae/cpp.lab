#include <iostream>
using namespace std;
int main (){
int k=0;

cin >> k;
string str;

int count=0;
int p=0;



for(int i=0; i<k; i++){
char arr[100]={0};

bool flag = false;
cin >> str;
for(int i=0; i<str.length(); i++){
    if(str[i]!=str[i+1]){
        arr[i]=str[i];
    }
   
}
//arr[i]=str[i] (한 문자가 끝나는 시점)  str[i]==str[p] (다시 시작)
    for(int i=0; i<str.length(); i++){
        for(int p=str.length()-1; p>i; p--){
            if(arr[i]==str[i]&&str[i]==str[p]){ //뒤에서부터 다시 의심군있는지 확인
                //만약에 있으면 단어가아님
              flag = true;
                
                break;
                
            }
         
        }}
        if(flag == true){
            
        }
        else{
            count++;
            
        
    }
}

cout << count;




}