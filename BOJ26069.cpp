#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<pair<string,bool>> vc(2*n);
for(int i=0; i<n; i++){
string str;
string str1;
bool ans;
cin >> str >> str1;

vc[i].first=str;
vc[i+1].first=str1;

if(vc[i].first=="ChongChong"||vc[i+1].first=="ChongChong"){
vc[i].second=true;
vc[i+1].second=true;
}
else if(vc[i].second==true||vc[i+1].second==true){
vc[i].second=true;
vc[i+1].second=true;    
}
}

int count=0;
for(int i=0; i<vc.size(); i++){
if(vc[i].second==true){
count++;
}
}

cout << count;

}