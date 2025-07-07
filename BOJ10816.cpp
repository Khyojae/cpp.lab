#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n,m;
int num;
vector <int> vc;
vector <int> ac;
 unordered_map<int, int> ums;
cin >> n;
for(int i=0; i<n; i++){
cin >> num;
ums[num]++;
}

cin >> m;
for(int i=0; i<m; i++){
cin >> num;
ac.push_back(num);
}

//sort(ums.begin(),ums.end());
for(int i=0; i<m; i++){
cout << ums(ac[i])<< " ";
}


}