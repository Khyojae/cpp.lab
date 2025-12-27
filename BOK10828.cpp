#include <iostream>
using namespace std;

class stack{

public:
int *STACK;
int n=100000;
int cnt=0;

stack(int size=100000){
    n=size;
    STACK = new int [n+1];

}



void push(int data){

    STACK[cnt]=data;
    cnt++;
}

int pop() {
    if (cnt == 0) return 0;  // 기본값 반환
    cnt--;
    return STACK[cnt];
}


void print_stack(){
for(int i=0; i<cnt; i++){
    cout << STACK[i] << " ";
}
}

~stack() {
    delete[] STACK;
}
};


int main(){
stack s;
int n;
int k;
cin >> n;
for(int i=0; i<n; i++){
cin >> k;
if(k!=0){
s.push(k);  
//s.print_stack();
/*for(int i=0; i<s.cnt-1; i++){
if(s.STACK[s.cnt]==s.STACK[s.cnt+1]){
s.pop();
}
 
}*/

}
if(k==0){
s.pop();
}
}


int b=0;
for(int i=0 ; i<s.cnt; i++){
b=b+s.STACK[i];
}
if(s.cnt==0){
cout << "0";
}
else{
cout << b;
}

}