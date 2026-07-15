#include <iostream>
using namespace std;

void HomeWork26(int &Number){
cout << "Please Enter a Number \n";
cin >> Number;

for(int i = 1 ; i<=Number ; i++){
    cout << i << endl;
}
}

void HomeWork27(int &Number){
cout << "Please Enter a Number \n";
cin >> Number;

for(int i = Number ; i>=1 ; i--){
    cout << i << endl;
}
}

int HomeWork28(int &Number){
int sum ;
cout << "Please Enter a Number \n";
cin >> Number;

for(int i = 1 ; i<=Number ; i+=2){
   sum +=i;
}
 return sum ; 
}

int HomeWork29(int &Number){
int sum ;
cout << "Please Enter a Number \n";
cin >> Number;

for(int i = 0 ; i<=Number ; i+=2){
   sum +=i;
}
 return sum ; 
}

int HomeWork30(int &Number){
int Factorial ;
cout << "Please Enter a Number \n";
cin >> Number;
Factorial = Number;

for(int i = Number -1 ; i>=1 ; i--){
   Factorial*=i;
}
return Factorial;
}

void HomeWork46(){
for(int i = 65 ; i <= 90 ; i++){
   cout << char(i) << endl;
}

}
int main(){
int Number;

HomeWork46();
}
