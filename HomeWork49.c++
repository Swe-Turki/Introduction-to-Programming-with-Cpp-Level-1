#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void PrintLetters(){
    cout << "**********************************\n";
    
    for (int i = 65 ; i <= 90 ; i++){
      cout << "Letter " << char(i) << endl;
        for (int j = 65 ; j<=90 ; j++ ){

            cout << char(i) << char(j) <<"\n";
        }
         cout << "**********************************\n";
    }
}

void PrintNumbersDescending(){
    for(int i = 10 ; i >= 1 ; i--){
        
        for(int j = 1 ; j <= i ; j++){
            cout << j << " ";
        }
        
        cout << "\n";
        
}
}

void PrintNumbersAscending(){
    for(int i = 1 ; i <= 10 ; i++){
        
        for(int j = 1 ; j <= i ; j++){
            cout << j << " "  ;
        }
        
        cout << "\n";      
}
}

void PrintLettersAscending(){
    for(int i = 1 ; i <= 5 ; i++){
        
        for(int j = 1 ; j <= i ; j++){
            cout << char(64 + j) << " "  ;
        }
        
        cout << "\n";      
}
}

void PrintStarsDescending(){
    for(int i = 10 ; i >= 1 ; i--){
        
        for(int j = 1 ; j <= i ; j++){
            cout << "*" << " ";
        }
        
        cout << "\n";
        
}
}

int main()
{
PrintLetters();
// PrintNumbersDescending();
// PrintNumbersAscending();
// PrintLettersAscending();
// PrintStarsDescending();


return 0;

}
