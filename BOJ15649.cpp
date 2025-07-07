#include <iostream>
#include <cassert>
#include <algorithm> // swap

using namespace std;

void RecurPermutations(int* arr, int left, int right, int m)
{	
	// arr[left], ..., arr[right]
	if (left == right)  
	{for(int k=0; k<m; k++){
	for (int i = 0; i <= right; i++)
			{cout << arr[i+k] << " ";}
	}
		

		
		cout << endl;
	}
	else
	{	
//힌트
//for , swap() , 재귀호출
//같은 변수끼리도 swap() 가능
// right는 고정

for(int i=left; i<=right; i++){
swap(arr[left],arr[i]);	    



if(left<right){
RecurPermutations(arr,left+1,right,m);
}

swap(arr[left],arr[i]);	
}
}	
}



int main()
{
int m;
int n;
int arr[8];

cin >> m >> n;
for(int i=0; i<m; i++){
arr[i]=i+1;
}


RecurPermutations(arr, 0, n-1,m);



	return 0;
}
