#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct xy {
int x;
int y;
xy(int a, int b) : x(a), y(b) {}
};

bool compare (const xy &a, const xy &b){
if(a.y==b.y){
return a.x < b.x;
}
else{
return a.y < b.y;    
} 
}
int main(){
vector <xy> vc;
int n;
cin >> n;
for(int i=0; i<n; i++){
int x,y;
cin >> x >> y;
vc.push_back(xy(x,y));
}

sort(vc.begin(),vc.end(),compare);
for(const auto &p : vc){
cout << p.x << " " << p.y << '\n';

}

}