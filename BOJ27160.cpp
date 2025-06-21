#include <iostream>
#include <map>
using namespace std;
int main(){
map <string, int> score;
int a;
cin >> a;

for(int i=0; i<a; i++){
string name;
int point;
cin >> name >> point;
score[name] = score[name]+point;

}

if(score["STRAWBERRY"]==5){
cout<< "YES";
}
else if(score["BANANA"]==5){
cout<< "YES";
}
else if(score["LINE"]==5){
cout<< "YES";    
}
else if(score["PLUM"]==5){
cout<< "YES";    
}
else{
cout << "NO";
}
}