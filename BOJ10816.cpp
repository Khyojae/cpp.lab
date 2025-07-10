#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
int n,m;
int num;
vector <int> vc;
vector <int> ac;
 unordered_map<int, bool> ums;
  unordered_map<int, int> ams;
cin >> n;    // 첫번째줄

bool same= false;
int count=1;
for(int i=0; i<n; i++){   // 두번째줄
cin >> num;
if(ums[num]==true){
ams[num]=ams[num]+1;
}
else{
ums[num]=true;
}
}


cin >> m;   // 세번째줄
for(int i=0; i<m; i++){    // 네번째줄
cin >> num;
ac.push_back(num);
}


for(int k=0; k<m; k++){
auto it = ums.find(ac[k]);
if(it !=ums.end()){
cout << 1+ams[ac[k]] << " ";
}
else{
cout << 0 << " ";
}
}


}