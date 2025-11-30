#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct cmp{
bool operator()(int a, int b){ // abs가 같으면 작은게 먼저
    if(abs(a)==abs(b)) return a>b;
   return abs(a) > abs(b);
}
};

int main (){
priority_queue<int, vector<int>, cmp> pq;
int n;
cin >> n;
for(int i=0; i<n; i++){
int num;
cin >> num;
if(num!=0){
pq.push(num);
}

else{
if(pq.empty()){  // 아무것도 없음
cout << 0 << '\n';
}
else{
cout << pq.top() << '\n';  // x가 0이라면 배열에서 절댓값이 가장 작은 값을 출력
pq.pop();
}
}

}




}