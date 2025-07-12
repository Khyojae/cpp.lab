#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
int tmp;
if(a < b){
    swap(a,b);
}
while(b!=0){
 tmp=a%b;
 a=b;
 b=tmp;   
}
return a;
}  // gcd 구하기


int main(){
int a,b,c,d;
cin >> a >> b;
cin >> c >> d;
int g1= gcd(a,b);
a=a/g1;
b=b/g1;

int g2 =gcd(c,d);
c=c/g2;
d=d/g2;

int g3 =gcd(b,d);
int size = b*d/g3;  // 1)분모의 최소공배수를 구한다
int front = size/b;  // 2) 분자와 분모에 무엇을 곱하는지 파악한다
int rear = size/d;

int ans_top = a*front+c*rear;
int ans_bottom = size;

int g4= gcd(ans_top,ans_bottom);

ans_top=ans_top/g4;
ans_bottom=ans_bottom/g4;


cout << ans_top << " " << ans_bottom;

}