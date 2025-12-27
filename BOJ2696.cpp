#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
priority_queue<int, vector<int>,greater<int>>pq;
int n;
cin >> n;
for(int i=0; i<n; i++){
vector<int>vc;
vector<int>ac;
int num;
cin >> num;
int cnt=1;
int nxt=1;
for(int i=0; i<num; i++){
int input;
cin >> input;
pq.push(input);
vc.push_back(input);
if((cnt)%2==1){
sort(vc.begin(),vc.end());
ac.push_back( vc[((cnt+1)/2)-1]);
}
cnt++;
}
cout << (cnt+1)/2 << '\n';
for(int i=0; i<ac.size(); i++){
cout << ac[i] << " ";
nxt++;
if(nxt==11){
cout << '\n';
}
}
}




}


