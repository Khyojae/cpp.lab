#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
int n;
int a;
cin >> n;
queue<int> q;
vector<int> p;
int count=0;
for(int i=1; i<=n; i++){
q.push(i);
}
while(q.size()>0){
p.push_back(q.front());
q.pop();  // 버린다

a=q.front();
q.pop(); //다음꺼는 아래로 옮긴다
q.push(a);


count++;
}
for(int i=0; i<n; i++){
cout << p[i] << " ";
}
}