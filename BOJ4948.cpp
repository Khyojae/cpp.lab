#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int input;
cin >> input;

while(input!=0){
input=input*2;
int count=0;
vector<bool>arr(2*input,true);
arr[0]=arr[1]=false;
for(int i=2; i*i<=input; i++){  //확인할 리스트
if(arr[i]==true){
for(int k=i*i; k<=input; k+=i){
arr[k]=false;    
}
}
}
for(int i=input/2+1; i<=input; i++){
if(arr[i]==true){
count++;
}
}
cout << count << '\n';
cin >> input;

}


}