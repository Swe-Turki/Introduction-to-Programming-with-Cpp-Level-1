#include <iostream>
using namespace std;

void HomeWork4(int &Age , string &DtriverLicense){

cout << "Please Enter your Age " << endl;
cin >> Age ;
cout << "Do you Have Dtriver License? " << endl;
cin >> DtriverLicense ;

if (Age >= 21 && DtriverLicense == "Yes")
{
  cout << "Hired" << endl;
}
else {
      cout << "Rejected" << endl;
}

}

void HomeWork8(int &Mark){
  cout << "Please Enter your Mark " << endl;
cin >> Mark ;  
if (Mark >= 50)
{
  cout << "PASS" << endl;
}
else {
      cout << "Fail" << endl;
}

}

void HomeWork11(int &Mark1 ,int &Mark2 , int &Mark3 ){
float Avg ;
cout << "Please Enter your Mark1 " << endl;
cin >> Mark1 ;  
cout << "Please Enter your Mark2 " << endl;
cin >> Mark2 ;  
cout << "Please Enter your Mark3 " << endl;
cin >> Mark3 ; 
Avg = (Mark1 + Mark2 + Mark3) / 3; 
if (Avg >= 50)
{
  cout << "PASS" << endl;
}
else {
      cout << "Fail" << endl;
}

}

void HomeWork24(int &ValidAge){
cout << "Please Enter your Age " << endl;
cin >> ValidAge ;  

if (ValidAge >= 18 && ValidAge<=45)
{
  cout << "Valid Age" << endl;
}
else {
      cout << "Ivalid Age" << endl;
}
}

void HomeWork49(int &PinCode){
cout << "Please Enter your PinCode " << endl;
cin >> PinCode ;   
 if (PinCode == 1234)
{
  cout << "Your Balance is : 7500" << endl;
}
else {
      cout << "Wrong PIN" << endl;
}
}

int main (){
int Age , PinCode;
int Mark , Mark1 , Mark2 , Mark3 , ValidAge;
string DtriverLicense;

HomeWork4(Age , DtriverLicense );
HomeWork8(Mark);
HomeWork11(Mark1 , Mark2 , Mark3 );
HomeWork24(ValidAge);
HomeWork49(PinCode);
}   