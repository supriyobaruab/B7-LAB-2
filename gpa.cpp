#include <iostream>
using namespace std;

int main(){
    int course1;
    int course2;
    int course3;
    int course4;
    int course5;
    string Grade;
    int mark;
cin >> mark;
cout<<"Input the mark of course 1";
cin >> course1;
cout<<"Input the mark of course 2";
cin >> course2;
cout<<"Input the mark of course 3";
cin >> course3;
cout<<"Input the mark of course 4";
cin >> course4;
cout<<"Input the mark of course 5";
cin >> course5;
cout<< "Grade in course1 : marks"
if(mark >=90){
    Grade = "A+";
}
else if(mark >=85){
    Grade = "A";
}
else if(mark >=80){
    Grade = "B+";
}
else if(mark >=75){
    Grade = "B+";
}
else if(mark >=70){
    Grade = "B";
}
else if(mark >=65){
    Grade = "C+";
}
else if(mark >=60){
    Grade = "C";
}
else if(mark >=55){
    Grade = "D+";
}
else if(mark >=50){
    Grade = "D";
}
else{
    Grade = "F";
}
cout <<Grade;
}