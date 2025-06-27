#include <iostream>
using namespace std;
int count =0;
int paste;
int recursive(int k){
for(int i=0; i<count; i++){
cout << "____";
}

cout << "\"재귀함수가 뭔가요?\""<<endl;
if(k==0){
for(int i=0; i<count; i++){
cout << "____";
}
cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\""<<endl;
paste=count;
for(int i=0; i<=paste; i++){
for(int i=0; i<count; i++){
cout << "____";
}
cout << "라고 답변하였지."<<endl;    
count--;
}
}


if(k>0){
for(int i=0; i<count; i++){
cout << "____";
}
cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<endl;
for(int i=0; i<count; i++){
cout << "____";
}
cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
for(int i=0; i<count; i++){
cout << "____";
}
cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
}

count++;
if(k>=1){
return recursive(k-1);
}
else{
return 0;
}


}


int main(){
int n;
cin >> n;
cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다."<<endl;
recursive(n);



}