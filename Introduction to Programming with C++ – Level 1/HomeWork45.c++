#include <iostream>
using namespace std;

void HomeWork36(int &Number1 , int &Number2 , char &OpType ){

cout << "Please Enter your Number1 " << endl;
cin >> Number1 ;  
cout << "Please Enter your Number2 " << endl;
cin >> Number2 ;  
cout << "Please Enter your OpType " << endl;
cin >> OpType ; 

switch (OpType)
{
case '+' :
    cout << Number1 + Number2 << endl;
    break;
case '*' :
    cout << Number1 * Number2 << endl;
    break;
case '-' :
    cout << Number1 - Number2 << endl;
    break;
case '/' :
    cout << Number1 / Number2 << endl;
    break;


default:
cout << "Try Again"<< endl;
    break;
}


}

void HomeWork44(int &Day){
cout << "Please Enter  Day " << endl;
cin >> Day ;  
switch (Day)
{
case 1:
cout << "Sunday" << endl;
    break;
case 2:
    cout << "Monday" << endl;
    break;
case 3:
cout << "Tuesday" << endl;
    break;
case 4:
 cout << "Wednesday" << endl;
    break;
case 5:
    cout << "Thursday" << endl;
    break;
case 6:
    cout << "Friday" << endl;
    break;
case 7:
    cout << "Satrday" << endl;
    break;

default:
cout << "Wrong Day" << endl;
    break;
}
}

int main (){
int Number1 , Number2 ; 
char OpType;
int Day;

HomeWork36(Number1 , Number2 , OpType );
// HomeWork44(Day);

}   