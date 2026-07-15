#include <iostream>
using namespace std;

enum isMarried {Yes_is_Married ,No_isNot_Married };
enum MyfavColor {Red , Green , Yellow , Blue};
enum Gender {Male , Famle} ;

string getColorName(MyfavColor color) {
    switch (color) {
        case Red: return "Red";
        case Green: return "Green";
        case Blue: return "Blue";
        default: return "Unknown";
    }
}
int main (){

isMarried Married;
MyfavColor color ;
Gender Gender;
color = MyfavColor::Green;
string name = "Turki Abdullah Alotaibi";
int Age = 21 ;
string city = "Makkah";
string Country = "Saudi";
float MonthluSalary = 16000;
cout << name <<endl ;
cout << Age << endl;
cout << city <<endl;
cout << Country <<endl ; 
cout << MonthluSalary <<endl ;
cout << "Yearly Salary : " << MonthluSalary * 12  <<endl;
cout << (Gender = Gender::Male)  <<endl ;
cout << (Married = isMarried::Yes_is_Married) << endl;
cout << getColorName(color) <<endl;
cout << (color = MyfavColor::Green) <<endl;
}