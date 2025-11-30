#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binary_search(vector<int>& arr, int len, int target){
int low =0, high=len-1;
while(low<=high){
int mid = (low+high)/2;
if(target==arr[mid]) return true;
else if(target < arr[mid]){
high = mid-1;
}
else if(target > arr[mid]){
low = mid+1;
}

}
return false; 
}


int main(){
int n,m;
bool real;
vector<int>vc;
vector<int>ac;
cin >> n;
for(int i=0; i<n; i++){
int num;
cin >> num;
vc.push_back(num);
}   // o(n)
sort(vc.begin(),vc.end());
cin >> m;

for(int i=0; i<m; i++){
int num1;
cin >> num1;
ac.push_back(num1);
}  // o(n)

for(int i=0; i<m; i++){
if(binary_search(vc.begin(),vc.end(),ac[i])==true){
cout << "1 ";
}
else{
cout << "0 ";
}

}

}