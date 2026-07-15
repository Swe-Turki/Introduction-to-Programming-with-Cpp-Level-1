#include <iostream>
using namespace std;

int main()
{
 int sum = 0;
 int Number ;
 for (int i = 0 ; i<=4 ; i++){
    cout << "Please Enter Number" << endl;
    cin >> Number;
    if (Number > 50){
        cout << "The Number is Great than 50" << endl;
        continue;
    }
    sum+=Number;
 }

 cout <<"Output" <<sum;

    return 0;
}
