#include <iostream>
using namespace std;

void HomeWork33(int &Grade ){

cout << "Please Enter your Grade " << endl;
cin >> Grade ;

if (Grade >= 90 && Grade <=100)
{
  cout << "A" << endl;
}
else if (Grade >=80  && Grade <=89)
{
     cout << "B" << endl;
}
else if (Grade >=70  && Grade <=79)
{
     cout << "C" << endl;
}

else if (Grade >=60  && Grade <=69)
{
     cout << "D" << endl;
}

else if (Grade >=50  && Grade <=59)
{
     cout << "E" << endl;
}

else {
      cout << "F" << endl;
}

}

void HomeWork34(float &TotalSales){
  cout << "Please Enter your TotalSales " << endl;
cin >> TotalSales ;  
if (TotalSales >= 1000000)
{
  cout << TotalSales * 0.01 << endl;
}
else if (TotalSales >=500000  && TotalSales <1000000)
{
     cout << TotalSales * 0.02 << endl;
}

else if (TotalSales >=100000  && TotalSales <500000)
{
     cout << TotalSales * 0.03 << endl;
}

else if (TotalSales >=50000  && TotalSales <100000)
{
     cout << TotalSales * 0.05 << endl;
}

else {
      cout << TotalSales * 0.0 << endl;
}

}

void HomeWork36(int &Number1 , int &Number2 , char &OpType ){

cout << "Please Enter your Number1 " << endl;
cin >> Number1 ;  
cout << "Please Enter your Number2 " << endl;
cin >> Number2 ;  
cout << "Please Enter your OpType " << endl;
cin >> OpType ; 
if (OpType == '+')
{
  cout << Number1 + Number2 << endl;
}
else if (OpType == '-')
{
     cout <<  Number1 - Number2 << endl;
}
else if (OpType == '*')
{
     cout <<  Number1 * Number2 << endl;
}

else if (OpType == '/')
{
     cout <<  Number1 / Number2 << endl;
}
else {
    cout << "Try Again"<< endl;
}
}

void HomeWork44(string &Day){
cout << "Please Enter  Day " << endl;
cin >> Day ;  

if (Day == "1")
{
  cout << "Sunday" << endl;
}
else if (Day == "2")
{
     cout << "Monday" << endl;
}
else if (Day == "3")
{
     cout << "Tuesday" << endl;
}

else if (Day == "4")
{
     cout << "Wednesday" << endl;
}

else if (Day == "5")
{
     cout << "Thursday" << endl;
}

else if (Day == "6")
{
     cout << "Friday" << endl;
}

else if (Day == "7")
{
     cout << "Satrday" << endl;
}

else {
      cout << "Wrong Day" << endl;
}
}


int main (){
int Grade;
float TotalSales ;
int Number1 , Number2 ; 
char OpType;
string Day;

// HomeWork33(Grade);
// HomeWork34(TotalSales);
// HomeWork36(Number1 , Number2 , OpType );
HomeWork44(Day);

}   