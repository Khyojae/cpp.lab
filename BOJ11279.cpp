#include <iostream>
using namespace std;

typedef class node *nptr;
class node{
public:
char key;
nptr lchild, rchild;

node (char k){
    key = k;
    lchild = rchild = nullptr;
}
};

class Heap{

public:
int *heap;
int n=1000;
int cnt=1;

Heap(int size = 1000){
    n= size;
    heap = new int [n+1];
}

void push(int ndata) {
    if (cnt > n) return;  // 안전 처리
    heap[cnt] = ndata;
    heapify_bottomup(cnt);
    cnt++;
}
void heapify_bottomup(int idx) {
    while (idx > 1 && heap[idx] > heap[idx / 2]) {
        swap(heap[idx], heap[idx / 2]);
        idx /= 2;
    }
}

int pop(){
    cout<< heap[1];
    int temp = heap[1];
    heap[1]=heap[cnt-1];
    cnt--;

    heapify_topdown(1);
    return temp;
}

int TOP(){
return heap[1];
}

void heapify_topdown(int idx) {
    int largest = idx;
    int left = 2 * idx;
    int right = 2 * idx + 1;

    if (left < cnt && heap[left] > heap[largest])
        largest = left;
    if (right < cnt && heap[right] > heap[largest])
        largest = right;

    if (largest != idx) {
        swap(heap[idx], heap[largest]);
        heapify_topdown(largest);
    }
}

void print(){
for(int i=1; i<=cnt; ++i){
    cout << heap[i] << ' ';
cout<<"\n";
}
}


};






int main(){
Heap h;
int n;
int i;

cin >> n;
for(int k=0; k<n; k++){
cin >> i;
if(i>0){
  h.push(i);
    }
else if(i==0){
if(h.cnt==1){
cout << "0"<<"\n";
}
else{

h.pop();
cout << "\n";
}

}
  
}






}