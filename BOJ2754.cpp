#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double score=0.0;
string input;
cin >> input;

if(input=="A+"){
score+=4.3;

}

else if(input=="A"){
score+=4.0;

}

else if(input=="A-"){
score+= 3.7;

}

else if(input=="B+"){
score+= 3.3;

}

else if(input=="B0"){
score+= 3.0;

}

else if(input=="B-"){
score+= 2.7;

}

else if(input=="C+"){
score+= 2.3;

}

else if(input=="C0"){
score+= 2.0;

}

else if(input=="C-"){
score+= 1.7;

}

else if(input=="D+"){
score+= 1.3;

}

else if(input=="D0"){
score+= 1.0;
}

else if(input=="D-"){
score+=0.7;

}

else if(input=="F"){
score+= 0.0;

}

cout << fixed << setprecision(1) << score;
}