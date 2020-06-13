#include <iostream>

using namespace std;

bool Bisiesto(int);

int main()
{
    //Declaracion de variables
    int year = 0;

    //Peticion de datos
    cout << "Ingrese el año a determinar si es bisiesto o no ";
    cin >> year;
    
    if(Bisiesto(year) == true)
        cout << "El año " << year << " es bisiesto";
    else
        cout << "El año " << year << " no es bisiesto";

    return 0;




}

bool Bisiesto(int year)
{
    //Comprobamos si el anio cumple alguna de las condiciones
    if( ( year % 400 ) == 0)
        return true;
    else if( ( year % 4 == 0 ) && (year % 100 != 0) )
        return true;
    else 
        return false; //si no se cumplen, el anio no es bisiesto
    
}