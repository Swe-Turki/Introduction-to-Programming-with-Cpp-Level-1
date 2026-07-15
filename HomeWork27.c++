#include <iostream>
using namespace std;

struct stAddress
{

string Adres ;
int NationalAddress;

};

struct PersonalContact
{
  string X ;
  int phone ;
  string Email;
};

struct PersonaInfo
{
string name ;
int Age;
string city;
string Country ;
float MonthluSalary ;
string Gender ;
bool Married;
stAddress PersonalAddress;
PersonalContact contactt ;

};

int main (){

PersonaInfo info;

cout << "Enter your name : " <<endl ;
cin  >> info.name ;
cout << "Enter your age : " << endl;
cin >> info.Age ;
cout << "Enter your city : "<<endl;
cin >> info.city ;
cout << "Enter your Country : " <<endl ;
cin >> info.Country ; 
cout << "Enter your MonthluSalary : " <<endl ;
cin >> info.MonthluSalary ;
cout << "Enter your Gender : "  <<endl ;
cin >> info.Gender;
cout << "Are you Married ? 1 or 0 : " <<endl;
cin >> info.Married ;
cout << "what is your Address ? : " <<endl;
cin >> info.PersonalAddress.NationalAddress;
cout << "what is your phone : " <<endl;
cin >> info.contactt.phone;

cout << "--------------------------" << endl;

cout << "Name : " << info.name <<endl ;
cout <<"Age : " <<info.Age  << endl;
cout <<"City : " <<info.city <<endl;
cout <<"Country : " <<info.Country <<endl ; 
cout <<"MonthluSalary : " <<info.MonthluSalary <<endl ;
cout << "Yearly Salary : " << info.MonthluSalary * 12  <<endl;
cout << "Gender : " <<info.Gender  <<endl ;
cout <<"Married : " << info.Married  <<endl;
cout << "Address : " <<info.PersonalAddress.NationalAddress  <<endl ;
cout <<"phone : " << info.contactt.phone  <<endl;


}