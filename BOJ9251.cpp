#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int vc[1001][1001]={0,};
int main(){
string s1;
string s2;
cin >> s1;
cin >> s2;
int ans1 =s1.length();
int ans2 =s2.length();

for(int i=1; i<=s1.length(); i++){
    for(int k=1; k<=s2.length(); k++){
        if(s1[i-1]==s2[k-1]){
        
        vc[i][k]=max(vc[i-1][k-1]+1,max(vc[i-1][k],vc[i][k-1]));
        }
        else{
        vc[i][k]=max(vc[i-1][k],vc[i][k-1]);
        }
    }
}


cout << vc[ans1][ans2];  
}