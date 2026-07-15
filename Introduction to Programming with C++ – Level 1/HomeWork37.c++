#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void Swap(int &N1 , int &N2){
int Temp ;
Temp = N1 ;
N1 = N2;
N2 = Temp;

cout << N1 << endl;
cout << N2 << endl;
}


int main(){
int N1 = 10 ;
int N2 = 20 ; 
Swap(N1 , N2) ;
cout << "*********************"<< endl;
cout << N1 << endl;
cout << N2 << endl;
 
}