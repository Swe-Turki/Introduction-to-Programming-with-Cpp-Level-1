#include <iostream>
using namespace std ;

int main (){

int NumberA ;
int NumberB ;

cout << "Please Enter Number for A : " << endl ;
cin >> NumberA ;
cout << "Please Enter Number for B : " << endl ;
cin >> NumberB ;

cout <<  NumberA << " = "<< NumberB <<  " is " << (NumberA == NumberB) << endl;
cout <<  NumberA << " != "<< NumberB <<  " is " << (NumberA != NumberB) << endl;
cout <<  NumberA << " > "<< NumberB <<  " is " <<(NumberA > NumberB) << endl;
cout <<  NumberA << " < "<< NumberB <<  " is " << (NumberA < NumberB) << endl;
cout <<  NumberA << " >= "<< NumberB <<  " is " << (NumberA >= NumberB) << endl;
cout << NumberA << " <= "<< NumberB <<  " is " << (NumberA <= NumberB) << endl;
}