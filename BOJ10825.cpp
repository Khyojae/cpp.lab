#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
bool comp(tuple<string,int,int,int>a , tuple<string,int,int,int>b){
int totalA = (get<3>(a)+get<1>(a)+get<2>(a));
int totalB =(get<3>(b)+get<1>(b)+get<2>(b));
if(get<1>(a) != get<1>(b)){
return get<1>(a) > get<1>(b);  // 내림차순
}
else if(get<3>(a) != get<3>(b)){ // 국어점수가 같으면
return get<3>(a) < get<3>(b);  // 오름차순
}

else if((get<2>(a) != get<2>(b))){
return get<2>(a) > get<2>(b);
}


return get<0>(a) < get<0>(b);


}

int main(){
vector<tuple<string,int,int,int>>vc;
int n;
cin >> n;
for(int i=0; i<n; i++){
string name;
int korean;
int math;
int english;
cin >> name >> korean >> math >> english;
vc.push_back({name,korean,math,english});
}
sort(vc.begin(),vc.end(),comp);


for(int i=0; i<n; i++){
cout << get<0>(vc[i]) <<'\n';
}

}