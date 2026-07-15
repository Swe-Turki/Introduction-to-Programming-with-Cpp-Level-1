#include <iostream>
using namespace std ;

int main() {

// Homework 2
string name;
int Age;
string city;
string Country;
float MonthluSalary;
string Gender;
bool Married;


cout << "***************" <<endl;
cout << "Enter your name : " <<endl ;
cin  >> name ;
cout << "Enter your age : " << endl;
cin >> Age ;
cout << "Enter your city : "<<endl;
cin >> city ;
cout << "Enter your Country : " <<endl ;
cin >> Country ; 
cout << "Enter your MonthluSalary : " <<endl ;
cin >> MonthluSalary ;
cout << "Yearly Salary : " << MonthluSalary * 12  <<endl;
cout << "Enter your Gender : "  <<endl ;
cin >> Gender;
cout << "Are you Married ? 1 or 0 :" <<endl;
cin >> Married ;

cout << "Name : " << name <<endl ;
cout <<"Age : " <<Age << endl;
cout <<"City : " <<city <<endl;
cout <<"Country : " <<Country <<endl ; 
cout <<"MonthluSalary : " <<MonthluSalary <<endl ;
cout << "Yearly Salary : " << MonthluSalary * 12  <<endl;
cout << "Gender : " <<Gender  <<endl ;
cout <<"Married : " << Married  <<endl;
cout << "***************" <<endl;


cout << "###################\n\n";

// Homework 2.1 
int x;
int y ;
int z ;

cout << "Enter number for x : " << endl;
cin >> x ;
cout << "Enter number for y : " << endl;
cin >> y ;
cout << "Enter number for z : " << endl;
cin >> z ;

 int Total = x + y + z ;
 cout << "The Total is : " << Total << endl << endl;

cout << "###################\n\n";

// // Homework 2.2 
int MyAge ;
cout << "Enter Your Age : " << endl;
cin >> MyAge ; 
cout << "After 5 years you will be " << MyAge + 5 << "  years old";




return 0 ;
}


