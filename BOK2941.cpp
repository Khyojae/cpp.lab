#include <iostream>
using namespace std;
int main() {

string str;
cin >> str;
int count=0;
int a=0;

for(int i=0; i<str.length(); i++){
if(str[i]=='c'&&str[i+1]=='='){
count++;
i=i+1;
}

else if(str[i]=='c'&&str[i+1]=='-'){
count++;
i=i+1;
}

else if(str[i]=='d'&&str[i+1]=='z' &&str[i+2]=='='){
count++;
i=i+2;
}

else if(str[i]=='d'&&str[i+1]=='-'){
count++;
i=i+1;
}

else if(str[i]=='l'&&str[i+1]=='j'){
count++;
i=i+1;
}

else if(str[i]=='n'&&str[i+1]=='j'){
count++;   
i=i+1;
}

else if(str[i]=='s'&&str[i+1]=='='){
count++;   
i=i+1;
}

else if(str[i]=='z'&&str[i+1]=='='){
count++;   
i=i+1;
}

else{
count++;
}

}

cout << count;



}