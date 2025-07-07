#include <iostream>
using namespace std;
typedef int Datatype;
typedef int element;
class queue{
private:
int size;
Datatype *Items;
int rear, front;

public:
void CreateQueue (int _size)
{
size = _size;
Items = new Datatype[size];
front = rear = 0;
}

bool IsEmpty(){
if(front == rear){
return true;
}
else{
return false;
}
}
void Empty(){
if(front == rear){
cout << 1;
}
else{
cout << 0;
}
}

int IsFull(){
return (rear == size-1);
}

void Enqueue(element item){

Items[rear++]= item;

}
void printfront(){
if(IsEmpty()==false){
cout << Items[front]; // 고치기
}
else{
cout << "-1";
}
}
void printback(){
if(IsEmpty()==false){
cout<< Items[rear-1];
}
else{
cout << "-1";
}
}
void printsize(){
cout <<  rear-front;
}
void Dequeue(){
if(IsEmpty()==true){
cout << "-1";
}
else{
cout << Items[front];
Items[front++];
}


}
};


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin >> n;
string str;
queue q;

q.CreateQueue(2000000);
for(int i=0; i<n; i++){
int k=0;
cin >> str;
if(str=="push"){
cin >> k;
q.Enqueue(k);
}
else if(str=="front"){
q.printfront();
cout << '\n';
}
else if(str=="back"){
q.printback();
cout << '\n';
}
else if(str=="size"){
q.printsize();
cout << '\n';
}
else if(str=="empty"){
q.Empty();
cout << '\n';
}
else if(str=="pop"){
q.Dequeue();
cout << '\n';
}

}


    
}