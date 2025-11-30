#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarysearch(const vector<int>& arr,int low, int high, int key){
while(low<=high){
int mid = low+(high-low)/2;

if(arr[mid]==key)
return mid;

else if (arr[mid]>key)
high = mid -1;

else
low = mid+1;
}
return -1;
}



int main(){
int n;
int a;
int b;
vector <int> vc;
vector <int> ac;
cin >> n;
for(int i=0; i<n; i++){
cin >> a;
vc.push_back(a);
ac.push_back(a);
}
stable_sort(vc.begin(),vc.end());
vc.erase(unique(vc.begin(),vc.end()),vc.end());

for(int v=0; v<n; v++){
b=ac[v];
cout << binarysearch(vc,0,vc.size()-1,b)<< " ";
}


}