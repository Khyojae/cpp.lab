#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(3);
v.push_back(5);
for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
}
cout << v.size()<<'\n';
cout << *v.begin() << '\n';
v.erase(v.begin()+1);
cout << v[1];


}