#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
string str;
int x;
set<int>vc;
int num=0;
cin >> num;
for(int i=0; i<num; i++){
cin >> str;
if(str=="add"){
cin >> x;
vc.insert(x);
}


if(str=="remove"){
cin >> x;
auto it =find(vc.begin(),vc.end(),x);
if(it!=vc.end()){
vc.erase(it);
}
}


if(str=="check"){
cin >> x;
auto it =find(vc.begin(),vc.end(),x);

if(it!=vc.end()){
cout << 1 << '\n';
}
else{
cout << 0 << '\n';
}

}

if(str=="toggle"){
cin >> x;
auto it =find(vc.begin(),vc.end(),x);
if(it!=vc.end()){
vc.erase(it);
}
else{
vc.insert(x);
}
}


if(str=="all"){
vc.clear();
for(int i=0; i<20; i++){
vc.insert(i+1);
}
}

if(str=="empty"){
vc.clear();
}
}

}






