#include <iostream>
#include <cmath>
#include <string>
using namespace std;



int main()
{

float Grade[3];

cout << "Please Enter your Grade 1 ;" << endl;
cin >> Grade [0];
cout << "Please Enter your Grade 2 ;" << endl;
cin >> Grade [1];
cout << "Please Enter your Grade 3 ;" << endl;
cin >> Grade [2];


cout << "The Avg is : " <<  (Grade [0] + Grade [1] + Grade [2]) / 3 ;
return 0;

}
