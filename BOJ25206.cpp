#include <iostream>
#include <map>
#include <string>
using namespace std;


struct info{
string subject;
double grade;
string result;
double time;
double gradesum=0;
};

int main(){
info ifo;
double b=0;
double value=0;


for(int i=0; i<20; i++){

cin >> ifo.subject >> ifo.time >> ifo.result;
if(ifo.result=="A+"){
ifo.grade=4.5;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="A0"){
ifo.grade=4.0;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="B+"){
ifo.grade=3.5;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="B0"){
ifo.grade=3.0;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="C+"){
ifo.grade=2.5;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="C0"){
ifo.grade=2.0;
ifo.gradesum+=ifo.grade;
}
if(ifo.result=="D+"){
ifo.grade=1.5;
ifo.gradesum+=ifo.grade;
}

if(ifo.result=="F"){
ifo.grade=0.0;
ifo.gradesum+=ifo.grade;
}
if(ifo.result=="P"){
continue;
}
value=ifo.grade*ifo.time;
b=b+value;
}

cout << b/ifo.gradesum;
}