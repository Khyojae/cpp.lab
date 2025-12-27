#include <iostream>
using namespace std;
int main(){
int a;
int b;
int d[100];
int max =0;
int sum =0;

cin >> a>> b;
for(int i=0; i<a;i++){
    cin >> d[i];
}

// 비교를 할 시, 배열쓰거나 아니면 덮어쓰기
for(int p=0; p<a; p++){
    for(int q=p+1; q<a; q++){
    for(int r=q+1;  r<a; r++){
    sum=(d[p] + d[q] + d[r]) ;
        if (p != q && q != r && p != r && d[p] + d[q] + d[r] <= b) {
        if(sum>max){
            max = sum;
        }
}

}
}

}
cout << max;

}