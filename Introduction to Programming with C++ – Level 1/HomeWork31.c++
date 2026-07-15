#include <iostream>
#include <string>
using namespace std;


int main()
{

string S1;
string S2;
string S3;



cout << "Please Enter S1 : " << endl;
getline(cin ,S1);

cout << "Please Enter S2 : " << endl;
cin >> S2;
cout << "Please Enter S3 : " << endl;
cin >> S3;


cout << "********************" << endl;
cout << S1.length() << endl;
cout << S1[0]  << endl ;
cout << S1[2]  << endl ;
cout << S1[4]  << endl ;
cout << S1[7]  << endl ;


cout << S2 + S3  << endl;

int sum = stoi(S2) * stoi(S3) ;
cout << sum << endl;

}