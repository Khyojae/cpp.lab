#include <iostream>
#include <vector>
using namespace std;
vector<int>vc;
vector<int>ac;

void sieve(int n){
vector<bool> is_prime(n+1,true);
is_prime[0]=is_prime[1]=false; // 0과 1은 소수가 아님

for(int p=2; p*p<=n; ++p){
if(is_prime[p]){
    for(int i=p*p; i<=n; i=i+p){
        is_prime[i]=false;
    }
}

}

for(int i=2; i<n; i++){
if(is_prime[i]){
vc.push_back(i);
}
}
}

void sieve1(int m){
vector<bool> is_prime(m+1,true);
is_prime[0]=is_prime[1]=false; // 0과 1은 소수가 아님

for(int p=2; p*p<=m; ++p){
if(is_prime[p]){
    for(int i=p*p; i<=m; i=i+p){
        is_prime[i]=false;
    }
}

}

for(int i=2; i<=m; i++){
if(is_prime[i]){
ac.push_back(i);
}
}

}

int main(){
int n,m;
cin >> n >> m;
sieve(n);
sieve1(m);

for(int i=0; i<vc.size(); i++){
for(auto it = ac.begin(); it !=ac.end();){
    if(vc[i]==*it){
        it = ac.erase(it);
    }
    else{
        ++it; 
       }
}
}


for(int i=0; i<ac.size(); i++){
cout << ac[i] << " ";
}
}