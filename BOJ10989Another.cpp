#include <iostream>
#include <map>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int n, num;
cin >> n;
map <int,int> count;
for(int i=0; i<n; i++){
cin >> num;
count[num]++;
}

for(auto& p: count){
for(int i=0; i<p.second; i++){
    cout << p.first << " ";
}
}


}