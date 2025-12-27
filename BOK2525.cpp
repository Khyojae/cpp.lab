#include <iostream>
using namespace std;
int main(){
int a=0;
int b=0;  // 원래 시간

int c=0;  //입력하는 시간



cin >> a >> b;
cin >> c;


int d=(c/60);
int e=(c%60); // c변환

int h=(b+e)/60;
int g=(b+e)%60;

//c에 의해 시간이 정해짐

if((b+e<60) && (a+d<24)){  // 시, 분 둘다 경계값안넘음
cout << (a+d) << " " << (b+e) << endl;
return 0;
}


if((b+e<60) && (a+d>=24)){  // 시만 경계값 넘음
cout << (a+d)-24 << " " << (b+e) << endl;
return 0;
}

//&& (a+d<24)
if((b+e>=60) ){  // 분만 경계값 넘음
if(a+d+h>=24){
    cout << (a+d)+h-24 << " " << g << endl;
    return 0;
}
cout << (a+d)+h << " " << g << endl;
return 0;
}


/*if((b+e>=60) && (a+d>=24)){  // 시, 분 둘다 경계값 넘음
cout << (a+d) << " " << g << endl;
return 0;
}
*/


}
