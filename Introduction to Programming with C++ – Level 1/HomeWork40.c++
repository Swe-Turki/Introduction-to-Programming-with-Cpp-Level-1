#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadGrade(float Grade[3]){
cout << "Please Enter your Grade 1 ;" << endl;
cin >> Grade [0];
cout << "Please Enter your Grade 2 ;" << endl;
cin >> Grade [1];
cout << "Please Enter your Grade 3 ;" << endl;
cin >> Grade [2];
}

float PrintArrayData(float Grade[3]){

return (Grade [0] + Grade [1] + Grade [2]) / 3 ;
}

int main()
{

float Grade[3];
ReadGrade(Grade);
cout<< "The Avg is : " << PrintArrayData(Grade);




return 0;

}
