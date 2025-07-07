#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct online{
int age;
string name;
online(int a, string b): age(a) , name(b){}
};

bool compare(const online &a, const online &b){
return a.age > b.age;
}

int main(){
int n;
cin >> n;
vector <online> vc;
for(int i=0; i<n; i++){
int age;
string name;
cin >> age >> name;
vc.push_back(online(age,name));
}
stable_sort(vc.begin(),vc.end(),compare);
for(const auto &p:vc ){
    cout << p.age << " " << p.name << '\n';
}


}