#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){

double b=0;
double value=0;
string subject;
double grade;
string result;
double time;
double gradesum=0;

for(int i=0; i<20; i++){

cin >> subject >> time >> result;
if(result=="P"){
continue;
}
if(result=="A+"){
grade=4.5;

}

if(result=="A0"){
grade=4.0;

}

if(result=="B+"){
grade=3.5;

}

if(result=="B0"){
grade=3.0;

}

if(result=="C+"){
grade=2.5;

}

if(result=="C0"){
grade=2.0;

}
if(result=="D+"){
grade=1.5;

}

if(result=="F"){
grade=0.0;

}
gradesum+=time;  // 총 들은 학점 수 
b=b+grade*time; // 환산 학점
}
cout << fixed;
cout.precision(6);
cout << b/gradesum;
}