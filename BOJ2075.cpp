#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cin.tie(0);

int n;
cin >> n;
int size=0;
priority_queue<int,vector<int>,greater<int>>pq;
for(int i=0; i<n*n; i++){
int num;
cin >> num;

if(size==n){
if(pq.top()>num){ // 31 41 42
continue;
}

else{
pq.pop();
size--;
}
}

pq.push(num);
size++;

}  // 일단 정렬 ㅇㅇ


cout << pq.top();


}