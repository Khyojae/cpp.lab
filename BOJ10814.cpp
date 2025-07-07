#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Person{
    int age;
    string name;

    Person(int a, string n) : age(a), name(n) {}
    // 생성자로 구조체 Person 객체를 만들 때 나이와 이름을 한 번에 
    // 초기화해주는 역할을 함
};

bool compare(const Person &a, const Person &b){
return a.age < b.age;
}

int main(){
int n;
cin >> n;
vector<Person> people;
for(int i=0; i<n; i++){
int age;
string name;
cin >> age >> name ; 
people.push_back(Person(age,name));  //people배열에 person을 넣는다
}
stable_sort(people.begin(),people.end(),compare);
for(const auto &p : people){ // 컨테이너 쓸 때 유용
// const 읽기 전용 
// auto : 타입을 자동 추론
// &p : 참조 (복사 안하고 직접 접근) 
//  컨테이너 : 여러 개의 데이터를 저장하고 관리할 수 있는 자료구조
    cout << p.age << " " << p.name << '\n';
}
return 0;


}