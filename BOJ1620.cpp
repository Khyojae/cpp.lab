#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL); 
unordered_map <int, string> mp;
unordered_map <string, int> mq;
int n , m;
cin >> n >> m;
for(int i=1; i<=n; i++){
string str;
cin >> str;
mp.insert({i,str});
mq.insert({str,i});
}

for(int k=1; k<=m; k++){
string input;
cin >> input;
if(!isdigit(input[0])){  // 숫자 출력해야
cout << mq[input] << '\n';
}

else if(isdigit(input[0])){    // 문자 출력해야
int a = stoi(input);
cout << mp[a] << '\n';
}
}

}

