#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
long long filecost(){
priority_queue<long long, vector<long long>,greater<long long>>pq;

int n;
cin >> n;
int cost=0;
for(int i=0; i<n; i++){
long long siz;
cin >> siz;
pq.push(siz);
}
while(pq.size()>1){
long long x1 = pq.top();
pq.pop();
long long x2 = pq.top();
pq.pop();
long long y1 = x1+x2;
cost+=y1;
pq.push(y1);
}
return cost;
}

int main(){
int n;
cin >> n;
while(n>0){
cout << filecost();
cout << '\n';
n--;
}


}