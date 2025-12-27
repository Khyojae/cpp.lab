#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin >> n;

stack<int> s;
vector<int> arr(n);
vector<int>vc(n,-1);

for(int i=0; i<n; i++){
cin >> arr[i];

while(!s.empty() && arr[s.top()]<arr[i]){
vc[s.top()]=arr[i];
s.pop();
}
s.push(i);
}

for(int i=0; i<n; i++){
cout << vc[i] << " ";
}
}