#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Personalinfo
{
string FirstName;
string lasttName;
int age ;
int phone ;
};

void Readinfo(Personalinfo &info){
cout << "Enter your firstname : " <<endl ;
cin  >> info.FirstName;
cout << "Enter your lastname : " << endl;
cin >> info.lasttName ;
cout << "Enter your age  : "<<endl;
cin >> info.age ;
cout << "Enter your phone : " <<endl ;
cin >> info.phone ; 


}
void Printinfo(Personalinfo info){
cout<< "******************"<<endl;
cout << "firstname : " << info.FirstName <<endl ;
cout <<"lastname : " << info.lasttName << endl;
cout <<"age  : " << info.age <<endl;
cout <<"phone : " << info.phone<<endl ; 
cout<< "******************"<<endl;
}

void ReadPersonosinfo(Personalinfo info[2]){
Readinfo(info[0]);
Readinfo(info[1]);

}
void Print2info(Personalinfo info[2]){
Printinfo(info[0]);
Printinfo(info[1]);
}

int main()
{
Personalinfo info[2] ;
ReadPersonosinfo(info);
Print2info(info);


return 0;

}
