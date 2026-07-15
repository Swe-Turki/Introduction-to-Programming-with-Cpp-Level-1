#include <iostream>
#include <cmath>
using namespace std;

// void Swap(int N1 , int N2){
// int Temp ;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// cout << "Please Enter N2"<< endl;
// cin >> N2;   
// Temp = N1 ;
// N1 = N2;
// N2 = Temp;

// cout << N1 << endl;
// cout << N2 << endl;

// }

// int CalculateRectangleArea(int N1 , int N2){
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// cout << "Please Enter N2"<< endl;
// cin >> N2; 
// int Area = N1 * N2;

// return Area ;
// }

// float CalculateRectangleArea16(float N1 , float N2){
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// cout << "Please Enter N2"<< endl;
// cin >> N2; 
// float Area = N1 * (sqrt(pow(N2 , 2) - pow(N1 , 2)));

// return Area ;
// }

// float CalculateCircleAred(float N1){
// float Pi = 3.14;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// float Area = Pi * (pow(N1 , 2));   

// return Area ;
// }

// float CalculateCircleAred19(float N1){
// float Pi = 3.14;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// float Area = (Pi * (pow(N1 , 2))) / 4;   

// return Area ;
// }

// float CalculateCircleAredAlong(float N1){
// float Pi = 3.14;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// float Area = (pow(N1 , 2)) / (4 * Pi);   

// return Area ;
// }

// float CalculateCircleAreaInscribed(float N1 , float N2){
// float Pi = 3.14;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// cout << "Please Enter N2"<< endl;
// cin >> N2; 
// float Area = Pi * (pow(N2 , 2) / (4)) * ((2 * N1 - N2) / (2 * N1 + N2));   

// return Area ;
// }

// float CalculateCircleAreaDescribed23(float N1 , float N2 , float N3){
// float Pi = 3.14;
// float P ;
// cout << "Please Enter N1"<< endl;
// cin >> N1; 
// cout << "Please Enter N2"<< endl;
// cin >> N2; 
// cout << "Please Enter N3"<< endl;
// cin >> N3; 
// P = (N1 + N2 + N3) / 2 ;
// float Area = Pi * (pow((N1 * N2 * N3) / (4 * sqrt(P* (P - N1) * (P - N2) * (P - N3))),2));   

// return Area ;
// }

// void Power31(){
// int Number;
// cout << "Please Enter Number"<< endl;
// cin >> Number; 
//   cout << pow(Number , 2) << endl;
//   cout << pow(Number , 3) << endl;
//   cout << pow(Number , 4) << endl;
// }
// void Power32(){
// int Number;
// int M ;
// cout << "Please Enter Number"<< endl;
// cin >> Number; 
// cout << "Please Enter M"<< endl;
// cin >> M; 
//  cout << pow(Number , M) << endl;
// }

// void HomeWork42(){

// int days ;
// int hours ;
// int minutes ;
// int seconde ;

// cout << "Please Enter days : " << endl ;
// cin >> days ;

// cout << "Please Enter hours : " << endl ;
// cin >> hours ;

// cout << "Please Enter minutes : " << endl ;
// cin >> minutes ;

// cout << "Please Enter seconde : " << endl ;
// cin >> seconde ;

// cout << round((days * 24 * 60 * 60) + (hours * 60 * 60 ) + (minutes * 60 ) + (seconde));


// }

void HomeWork43(){
int SecondsPerDay = 24 * 60 * 60 ;
int SecondsPerHour = 60 * 60 ;
int SecondsPerMinute  = 60 ;
int TotalSecondes;
int NumberOfDays ;
int NumberOfHours ;
int NumberOfMinutes ;
int NumberOfSeconds ;
int Remainder ;


cout << "Please Enter seconde : " << endl ;
cin >> TotalSecondes ;

NumberOfDays = ( TotalSecondes / SecondsPerDay );
Remainder= TotalSecondes % SecondsPerDay;
NumberOfHours =  Remainder / SecondsPerHour ;
Remainder = Remainder % SecondsPerHour ;
NumberOfMinutes = Remainder / SecondsPerMinute ;
Remainder = Remainder % SecondsPerMinute ;
NumberOfSeconds = Remainder ;
cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" <<NumberOfSeconds<< endl;
}


int main (){
float N1 ;
float N2 ;
float N3;
int Number;
HomeWork43();
  return 0 ;  
}