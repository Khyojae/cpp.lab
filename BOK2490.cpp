#include <iostream>
using namespace std;

int main(){
int arr[5];
int a;
int b;
int k=0;
int m=0;
int n=0;

cin >> n >> m ;

for (int i=0; i<=4; i++){
    arr[i]=i+1;
}


for (int i=0; i<=3; i++){
    a=0;
    b=0;
    cin >> a >> b;
    for(int k=0; k<b-a; k++){
        swap(arr[b-k-1],arr[k+a-1]);
    }
}



for(int i=0; i<=4; i++){
    cout << arr[i]<< " ";
}

}