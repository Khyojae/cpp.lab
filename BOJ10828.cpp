#include <iostream>
#include <map>
using namespace std;

class stack{

public:
int *STACK;
int n=100000;
int cnt=0;
map<string,int> m;

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

void empty(){
    if(cnt ==0){
        cout << "1";
    }
    else{
        cout <<"0";
    }
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
string str;

int n;
int k;
cin >> n;
for(int i=0; i<n; i++){
cin >> str;

if(str=="pop"){
s.pop();
}
else if(str=="empty"){
s.empty();
}

else if(str=="size"){
cout << s.cnt;
}
else if(str=="push"){

}
}


}