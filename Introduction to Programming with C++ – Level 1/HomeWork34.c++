#include <iostream>
using namespace std;


void MySumProcedure(){
int Number1;
int Number2;

cout << "please enter Number 1 " << endl;
cin >> Number1 ;
cout << "please enter Number 2 " << endl;
cin >> Number2 ;

cout << "**************" << endl;
cout << Number1 + Number2 ;

}

int MySumFunction(){
int Number3;
int Number4;

cout << "please enter Number 3 " << endl;
cin >> Number3 ;
cout << "please enter Number 4 " << endl;
cin >> Number4 ;

cout << "**************" << endl;
return Number3 + Number4; 

}

int main(){

MySumProcedure() ;
cout << MySumFunction();


}