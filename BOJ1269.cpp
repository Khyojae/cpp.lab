#include <iostream>
#include <map>
using namespace std;
int main(){
map<int,bool> mp;
int n,m;
cin>> n >> m;
for(int i=0; i<n+m; i++){   // 버퍼라서 상관없음 ㄷ
int num;    
cin >> num;
if(mp[num]==true){  // [] : operater 하는 과정이 대입과정
mp.erase(num);
}
else{
    mp[num]=true;
}
}
cout << mp.size();



}