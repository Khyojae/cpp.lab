#include <iostream>
#include <cmath>
using namespace std;

int number(int p) {
	int k;
	int l=0;
	int arr[100];
	int q=0;

for(k=0;k<20;k++){
	if(p<pow(10,k)){
		 q = k-1;
		 break;
	}
		  
	}


for (int z = q ; z >= 0; z--) {
        arr[z] = p / (int)pow(10, z);  // z번째 자리 값
        p = p % (int)pow(10, z);       // 남은 숫자 갱신
    }

for(int z=0; z<=q; z++){
	if(arr[z] ==1){
			pow(2,z);
		 l = l + pow(2,z);  
		
}

}

return l;
}




int main() {
	int arr[100];
	int k;

	cin >> k;

	cout << number(k);
}

