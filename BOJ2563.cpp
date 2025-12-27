#include <iostream>
using namespace std;
int main(){

int arr[100][100] ={0};
int a, b ,n ;
int count=0;
cin >> n;
for(int i=0; i<n; i++){
 cin >> a >> b;

for(int q=a; q<a+10; q++){
for(int p=b; p<b+10; p++){
if(arr[q][p]==1){
    continue;
}
else{
arr[q][p]=1;

}
}
}
}

for(int q=0; q<100; q++){
for(int p=0; p<100; p++){
if(arr[q][p]==1){
count++;
}
}
}
cout << count;
}




