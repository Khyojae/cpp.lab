#include <iostream>
#include <deque>
using namespace std;

int main(){
deque<pair<int,int>>dq;

int cnt;
cin >> cnt;

for(int i=0; i<cnt; i++){
int num;
cin >> num;
dq.push_back({i+1,num});
}

while(!dq.empty()){
int cur = dq.front().second;
cout << dq.front().first << " ";
dq.pop_front();
if(dq.empty()){
break;
}

if(cur>0){
for(int i=0; i<cur-1; i++){
dq.push_back(dq.front());
dq.pop_front();
}
}

else if(cur<0){
for(int i=0; i<(-1)*cur; i++){
dq.push_front(dq.back());
dq.pop_back();
}

}

}



}