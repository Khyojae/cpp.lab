#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;
int main(){
//ios::sync_with_stdio(0);
//cin.tie(nullptr);
int n;
cin >> n;
vector<long long>qd;
vector<long long>vc;  // b원소
vector<long long>ac;  // c원소
deque<long long>dq;   // queue넣다 뺄래
for(int i=0; i<n; i++){  //2번째
long long num;
cin >> num;
qd.push_back(num);
}

for(int k=0; k<n; k++){  //3번째
long long num;
cin >> num;    
if(qd[k]==0){  // queue
dq.push_back(num);
}
else if(qd[k]=1){  // stack
vc.push_back(num);
}
}

long long input;
cin >> input;  //4번째
for(int q=0; q<input; q++){ //5번째
long long in;
cin >> in;
ac.push_back(in);  // 새로넣을꺼
}
long long ansans;

for(int l=0; l<ac.size(); l++){
dq.push_front(ac[l]);
cout << dq.back() << " ";
dq.pop_back();
}





}