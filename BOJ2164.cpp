#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
int n;
int a;
cin >> n;
vector<int> vc;
queue<int> q;
for(int i=1; i<=n; i++){
q.push(i);
}
while(q.size()>1){
q.pop();  // 버린다
a=q.front();
q.pop(); //다음꺼는 아래로 옮긴다
q.push(a);
}
cout << q.front();
}