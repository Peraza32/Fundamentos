#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    //Declaracion de variables
    int num1 = 0, num2 = 0, num3 = 0;

    //Peticion de datos
    cout << "Ingrese 3 valores para calcular su promedio \n";
    cout << "Dato 1: ";
    cin >> num1;
    cout << "Dato 2: ";
    cin >> num2;
    cout << "Dato 3: ";
    cin >> num3;

   

    cout << "\n" << ( ( num1 + num2 + num3 ) / 2 );


}
