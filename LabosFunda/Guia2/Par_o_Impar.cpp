#include <iostream>


using namespace std;


int main(){

    //Declaracion de variables
    int num = 0;

    //Peticion de datos 
    cout << "Bienvenido \n";
    cout << "Vamos a determinar si un numero es par o impar" <<endl;
    cout << "Ingrese el numero a determinar \n";
    cin >> num;


    //Salida de datos 
    if( (num % 2) == 0) 
        cout << num <<" es un numero par";
    else
        cout << num << " es un numero impar";


    return 0;
}