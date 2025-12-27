#include <iostream>
using namespace std;

int main(){
int N;
int k;

cin >> N >> k ;

int a[1000];

for (int i=0; i<N; i++){
    cin >> a[i];
}

// 배열 정렬하기
for (int i=0; i<N-1; i++){
for(int k=0; k<N-i-1; k++ ){
   if(a[k]<a[k+1]){

    swap(a[k],a[k+1]);
}
}
}



cout << a[k-1];
return 0;
}




