#include<iostream>
#include<string>
using namespace std;
int main(){
string q;
int arr[26];
int count=0;
cin >> q;
for(int i=0; i<26; i++){
    count =0;
    for(int p=0; p<q.length(); p++){
       count++;
        if(char(97+i)==q[p]){
            arr[i]=p; 
           break;
        }
       if(char(97+i)!=q[p] && count == q.length()){
        arr[i]=-1;
       }
        
    }
    
    
}

for(int i=0; i<26; i++){
    cout << arr[i] << " ";
}

}