#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(string a, string b){
if(a.length()==b.length()){
return a<b;
}
else
    return a.length() < b.length();


}

int main() {
 int n;
 cin >> n;
 vector<string> words;

 for(int i=0; i<n; i++){
string word;
cin >> word;
words.push_back(word);  // 동적할당 뒤에 원소 나열
 }

 sort(words.begin(),words.end(),comp);
words.erase(unique(words.begin(),words.end()),words.end());
for(int i=0; i<words.size(); i++){
cout << words[i] << endl;
}
}
