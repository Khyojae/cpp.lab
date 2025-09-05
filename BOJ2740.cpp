#include <iostream>
using namespace std;
int arr[100][100]={0};
int brr[100][100]={0};
int crr[100][100]={0};
int mult(int a, int b){
return a*b;
}

int main(){
int n,m;
cin >> n >> m;

for(int i=0; i<n; i++){
for(int k=0; k<m; k++){
int input;
cin >> input;
arr[i][k]=input;
}
}

int p,q;
cin >> p >> q;

for(int i=0; i<p; i++){
for(int k=0; k<q; k++){
int input;
cin >> input;
brr[i][k]=input;
}
}

int sum=0;
for(int i=0; i<n; i++){
for(int t=0; t<q; t++){
int sum=0;

for(int k=0; k<m; k++){
sum+=arr[i][k]*brr[k][t];
}
crr[i][t]=sum;
}
}

for(int i=0; i<n; i++){
for(int t=0; t<q; t++){
cout << crr[i][t] << " ";
}
cout << '\n';
}

}