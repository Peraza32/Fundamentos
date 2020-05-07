#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;

int main()
{

    //DEclaracion de variables
    string nombre;
    int cant = 0;
    float precio = 0, precio_final = 0;

    //Peticion de datos 
    cout << " Ingrese el nombre del producto " ;
    cin >> nombre;

    cout << " Ingrese el precio del producto ";
    cin >> precio; 

    cout << " Ingrese la cantidad de producto a comprar ";
    cin >> cant;

    //Calculo del precio final 

    precio_final = cant * precio;

    cout << setprecision(5);
    cout << "\nEl precio final de " << nombre << " sera " << precio_final; 

    return 0;
}