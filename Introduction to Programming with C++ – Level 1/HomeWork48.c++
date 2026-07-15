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



void Readinfo(Personalinfo info[100] , int &NumberOfUseres){
cout << "Plese Enter The Number Of Useres " <<endl;
cin >> NumberOfUseres;

for (int i = 0 ; i<= NumberOfUseres - 1 ; i++){
    cout << "Enter your firstname : " << i <<endl ;
    cin  >> info[i].FirstName;
    cout << "Enter your lastname : " << i << endl;
    cin >> info[i].lasttName ;
    cout << "Enter your age  : "<< i <<endl;
    cin >> info[i].age ;
    cout << "Enter your phone : " << i <<endl ;
    cin >> info[i].phone ; 
}


}
void Printinfo(Personalinfo info [100] , int NumberOfUseres){
for(int i = 0 ; i <= NumberOfUseres - 1 ; i++){
cout<< "******************"<<endl;
cout << "firstname : " << info[i].FirstName << i <<endl ;
cout <<"lastname : " << info[i].lasttName << i << endl;
cout <<"age  : " << info[i].age << i <<endl;
cout <<"phone : " << info[i].phone<< i <<endl ; 
cout<< "******************"<<endl;
}

}

int main()
{
Personalinfo info[100] ;
int NumberOfUseres;
Readinfo(info , NumberOfUseres);
Printinfo(info , NumberOfUseres);


return 0;

}
