#include <iostream>

using namespace std;


int main(){

    //Declaracion de variables
    int divisor = 0, dividendo = 0;


    //Peticion de Datos
    cout << "Bienvenido \n";
    cout << "Vamos a ver si un numero entero es divisible entre otro" <<endl;
    cout << "Ingrese el valor del divisor ";
    cin >> divisor; 
    cout << "Ingrese el valor del dividendo o sea el numero a dividir ";
    cin >> dividendo;


    //Salida de datos
    if ((dividendo % divisor) == 0)
    {
        cout << dividendo <<" si es divisible entre " << divisor;       
    }
    else
    {
         cout << dividendo <<" no es divisible entre " << divisor; 
    }
    
     


    return 0;
}