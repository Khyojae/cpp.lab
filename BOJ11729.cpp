#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<char> tower[3];
int count=0;
vector<pair<int, int>> moves;
// 실제로 디스크를 움직여서 스택들을 업데이트
void MoveDisk(int from, int to)  // 옮기는 것 밖에 없다 (목적지로)
{
	if (tower[from].empty())
	{	
		exit(0); // 오류 강제 종료
	}

	auto disk = tower[from].top();   //auto 타입 자동 변환

	// 받을 타워가 비어 있으면 뭐든지 받을 수 있음
	// 알파벳 순서여야 받을 수 있음 (역순 X)
	if (!tower[to].empty() && tower[to].top() > disk)  // E D 이러면 못받아
	{
		exit(0); // 오류 강제 종료
	}

	tower[from].pop();
	tower[to].push(disk);
}

void RecurMoveDisks(int n, int from, int temp, int to)  // n: 디스크 갯수
{
	// TODO:
if(n==0){
return;
}


RecurMoveDisks(n-1,from,to,temp);   // 해체를 하자
moves.push_back({from+1,to+1});

MoveDisk(from,to);  // 옮겨
         // 결합을 하자
RecurMoveDisks(n-1,temp,from,to);

}

int main()
{
	int num_disks;   // 최소횟수?
cin >> num_disks;
	for (int i = 0; i < num_disks; i++)
		tower[0].push('1' + i);

	RecurMoveDisks(num_disks, 0, 1, 2);
cout<< moves.size() << '\n';
for(auto m : moves){
cout << m.first << " " << m.second << '\n';
}
	return 0;
}
