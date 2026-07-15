#include <iostream>
using namespace std;


int main()
{
int n ;
 cout << "Enter Number" << endl;
 cin >> n;
 int arr[10] = {10 , 12 , 81 , 182 , 20 , 211 , 65 , 383 , 29 , 30};
 
 for (int i = 0 ; i <= 10 ; i++){
    if ( n == arr[i]){
        cout << "found it\n"; 
        break;
    }
    cout << "So now not found" << endl;
 }
    return 0;
}
