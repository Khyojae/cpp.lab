#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr[15][15]={0,};
for(int i=1; i<15; i++){
arr[0][i]=i;
}

for(int p=1; p<15; p++){
for(int q=1; q<15; q++){
for(int l=1; l<=q; l++){
arr[p][q]+=arr[p-1][l];
}
}
}

int input;
cin >> input;
for(int i=0; i<input; i++){
int k;
int n;
cin >> k;
cin >> n;
cout << arr[k][n] << '\n';


}



}