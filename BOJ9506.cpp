#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
while(n!=-1){
int arr[10]={ };
int count=0;
int b=0;

for(int i=1; i<n; i++){
if(n%i==0){
arr[count]=i;
count++;
}
}
for(int i=0; i<count; i++){
b+=arr[i];
}

if(b==n){
cout << b <<  "= ";
for(int i=0; i<count; i++){
cout << arr[i] << "";

if(i<count-1){
cout << "+" << " ";
}


}
}

else{
cout << n << " "<< "is NOT perfect.";
}

cin>> n;

}

    
}