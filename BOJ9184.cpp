#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][101][101];

int backt(int a, int b, int c){
if(a<=0 || b<=0 || c<=0){
return 1;
}    

else if(a>20 || b>20 || c>20){
return backt(20,20,20);
}

else if(arr[a][b][c]!=0) return arr[a][b][c];

else if(a<b && b<c){
arr[a][b][c]=backt(a,b,c-1)+backt(a,b-1,c-1)-backt(a,b-1,c);
}

else {
arr[a][b][c]=backt(a-1,b,c)+backt(a-1,b-1,c)+backt(a-1,b,c-1)-backt(a-1,b-1,c-1);
}

return arr[a][b][c];
}


int main(){
int a, b, c;
cin >> a>> b>> c;

while(1){
if(a==-1 && b==-1 && c==-1){
return 0;
}
cout << "w(" << a << ", " <<b << ", " <<c << ") = " << backt(a,b,c)<<'\n';
cin >> a>> b>> c;    
}

}