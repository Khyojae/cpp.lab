#include <iostream>
#include <stack>
using namespace std;
int main(){
int n,k;
cin >> n >> k;
stack<int>st;
for(int i=0; i<n; i++){
int num;
cin >> num;
st.push(num);
}
int count=0;
int ans=0;
for(int i=0; i<n; i++){
if(k==0){
break;
}

else if(st.top()>k){
st.pop();
}

else{

count=k/st.top();
k=k-st.top()*count;
st.pop();
ans+=count;
}

}
cout << ans;



}