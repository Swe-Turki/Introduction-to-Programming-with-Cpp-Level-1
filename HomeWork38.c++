#include <iostream>
using namespace std;

struct Personalinfo
{
string name;
int Age;
string city;
string Country;
float MonthluSalary;
string Gender;
bool Married;
    
};

void Readinfo(Personalinfo &info){
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
cout << "Are you Married ? 1 or 0 :" <<endl;
cin >> info.Married ;
}

void Printinfo(Personalinfo info){
cout<< "******************"<<endl;
cout << "Name : " << info.name <<endl ;
cout <<"Age : " << info.Age << endl;
cout <<"City : " << info.city <<endl;
cout <<"Country : " << info.Country <<endl ; 
cout <<"MonthluSalary : " <<info.MonthluSalary <<endl ;
cout << "Yearly Salary : " << info.MonthluSalary * 12  <<endl;
cout << "Gender : " <<info.Gender  <<endl ;
cout <<"Married : " << info.Married  <<endl; 
cout<< "******************"<<endl;
}


int main()
{
Personalinfo info;
Readinfo(info);
Printinfo(info);



return 0;

}
