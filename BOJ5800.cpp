#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
int n;
int m;
cin >> n;
for(int i=0; i<n; i++){
vector<int> vc;
cin >> m;
for(int k=0; k<m; k++){
int num;
cin >> num;
vc.push_back(num);
}
vector<int> ac;
int b;
sort(vc.begin(),vc.end());
for(int k=0; k<m-1; k++){
b=vc[k+1]-vc[k];
if(b<0){
b=-b;
}
ac.push_back(b);
}
sort(ac.begin(),ac.end());
int a = *vc.begin();
int c = *(vc.end()-1);
cout<< "Class " << i+1 << "\n";
cout << "Max " << c << ", " <<"Min " << a << ", "<< "Largest gap " << *(ac.end()-1) << '\n';
}

}