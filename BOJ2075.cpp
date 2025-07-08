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
if(size==n){
pq.pop();
size--;
}

int num;
cin >> num;
pq.push(num);
size++;

}  // 일단 정렬 ㅇㅇ


cout << pq.top();


}