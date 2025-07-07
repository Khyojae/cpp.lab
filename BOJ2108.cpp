#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
int main(){
int n;
vector<int>vc;
cin >> n;
for(int i=0; i<n; i++){   // 대입
int num;
cin >> num;
vc.push_back(num);
}
sort(vc.begin(),vc.end());   // 정렬
double sum=0;
for(int i=0; i<n; i++){   // 산술평균 구할려고
sum+=vc[i];
}






cout << round(sum*10)/10.0 << '\n';   // 산술평균
cout << vc[(0+vc.size())/2]  << '\n';   // 중앙값

cout << vc.end() - vc.begin();   // 범위


}