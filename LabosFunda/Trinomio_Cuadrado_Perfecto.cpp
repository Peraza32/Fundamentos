#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a = 0,
          b = 0,
          c = 0;


    cout << "Ingrese el valor de a \n";
    cin >> a;
    cout << "\nIngrese el valor de b \n";
    cin >> b;
    cout << "\nIngrese el valor de c \n";
    cin >> c;        

    if( a == 0 && b == 0 && c == 0)
        cout << "El polinomio no es un trinomio cuadrado perfecto";
    else{
        if( pow(b,2) == (4*a*c) )
            cout << "El polinomio  es un trinomio cuadrado perfecto";
        else
            cout << "El polinomio no es un trinomio cuadrado perfecto";    
    }


  


    return 0;
}