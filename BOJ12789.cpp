#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<int>vc;
vector<int>ac;
stack<int>st;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}

for(int i=0; i<n-1; i++){
if(vc[i]>vc[i+1]){
st.push(vc[i]);   // 4 3
}



else if(vc[i]<vc[i+1]){
if(st.empty()){
ac.push_back(vc[i]);   // 2 1 5
}

else if(st.top()>vc[i]){
ac.push_back(vc[i]);
ac.push_back(st.top());
st.pop();
}

else if(st.top()<vc[i]){
ac.push_back(st.top());
st.pop();
ac.push_back(vc[i]);
}
}
}
    
if(vc[n-1]>st.top()){
ac.push_back(st.top());
st.pop();
ac.push_back(vc[n-1]);
}

else{
ac.push_back(vc[n-1]);
ac.push_back(st.top());
st.pop();
}


while(!st.empty()){
ac.push_back(st.top());
st.pop();
}


bool is_true = false;
for(int i=0; i<n-1; i++){
if(ac[i]>ac[i+1]){
is_true= true;
}
}

if(is_true == true){
cout <<"Sad";
}
else{
cout << "Nice";
}
}