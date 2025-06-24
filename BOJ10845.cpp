#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<int> myqueue;
int n;
int k;
string str;
cin>>n;
for(int i=0; i<n; i++){
cin >> str;
if(str=="push"){
cin >> k;
myqueue.push(k);
}
if(str=="pop"){
if(myqueue.empty()){
cout<<"-1"<<'\n';
}
else{
cout<<myqueue.front();
myqueue.pop();
}

}
if(str=="size"){
cout << myqueue.size()<<'\n';

}
if(str=="empty"){
if(myqueue.empty()){
cout<<"1"<<'\n';
}
else{
cout<<"0"<<'\n';
}

}
if(str=="front"){
if(myqueue.empty()){
cout<<"-1"<<'\n';
}
else{
cout<<myqueue.front();
}

}
if(str=="back"){
if(myqueue.empty()){
cout<<"-1"<<'\n';
}
else{
cout<<myqueue.back()<<'\n';
}

}
}


}