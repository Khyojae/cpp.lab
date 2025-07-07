#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int main(){
     ios::sync_with_stdio(false);  
    cin.tie(NULL);   
int n;
cin >> n;
priority_queue<int, vector<int>,greater<int>>minHeap;
for(int i=0; i<n; i++){
int a;
cin >> a;
if(minHeap.empty() &&a==0){
cout << 0 << '\n';
continue;
}
else if(!minHeap.empty() && a==0){
cout << minHeap.top() << '\n';
minHeap.pop();
continue;
}
minHeap.push(a);
}

}