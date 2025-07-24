#include <iostream>
#include <queue>
using namespace std;

int lc[9]={0,2,4,6,0,0,0,0,0};
int rc[9]={0,3,5,7,0,8,0,0,0};

void bfs(){   // Level-order-traversal
queue<int>q;
q.push(1);
while(!q.empty()){
int cur= q.front();
q.pop();
cout << cur << ' ';
if(lc[cur]) q.push(lc[cur]);
if(rc[cur]) q.push(rc[cur]);
}
}

void preorder(int cur){  // 전위 순회
cout << cur << ' ';
if(lc[cur]!=0) preorder(lc[cur]);
if(rc[cur]!=0) preorder(rc[cur]);
}

void inorder(int cur){  // 중위 순회
if(lc[cur]!=0) inorder(lc[cur]);
cout << cur << ' ';
if(rc[cur]!=0) inorder(rc[cur]);
}

void postorder(int cur){ // 후휘 순회
if(lc[cur]!=0) postorder(lc[cur]);
if(rc[cur]!=0) postorder(rc[cur]);
cout << cur << ' ';
}
int main(){
cout << "전위 순회" << '\n';
preorder(1);
cout << '\n';

cout << "중위 순회" << '\n';
inorder(1);
cout << '\n';

cout << "후휘 순회" << '\n';
postorder(1);




}