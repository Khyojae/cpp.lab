#include <iostream>
using namespace std;
int main(){
int arr[9][9];

//값입력받기
for(int i=0; i<9; i++){
    for (int l=0; l<9; l++){
       cin>> arr[i][l];
    }
}


int k=0;



//제일큰놈 누고
int max = arr[0][0];
for(int i=0; i<9; i++){
    for (int l=0; l<9; l++){
      max = ((arr[i][l]>max)?arr[i][l]:max);
    }
}



cout << max<<endl;

int count=0;
// 최댓값 행열찾기
for(int i=0; i<9; i++){
    for (int l=0; l<9; l++){
        if(arr[i][l]==max){
count++;
if(count>=2){
    break;
}
if(count==1){
    cout<< i+1<< " "<< l+1;
}
        
        }
    }
}


}