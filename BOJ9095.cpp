#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr[11];
int cnt;
cin >> cnt;
arr[1]=1;
arr[2]=2;
arr[3]=4;
for(int i=4; i<=10; i++){
arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
}


for(int i=0; i<cnt; i++){
int input;
cin >> input;
if(input==1){
cout << 1 << '\n';
continue;   
}
else if(input==2){
cout << 2 << '\n'; 
continue; 
}

else if(input==3){
cout << 4 <<'\n';
continue; 
}
else{
cout << arr[input] << '\n';
}

}

}