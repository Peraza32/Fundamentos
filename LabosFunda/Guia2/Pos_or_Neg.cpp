#include <iostream>

using namespace std;

int main(){

    //Declaracion de varibles
    float num = 0;

    //Peticion de datos 
    cout << "Bienvenido \n";
    cout << "Vamos a determinar si un numero es positivo, negativo o cero" <<endl;
    cout << "Ingrese el numero a determinar \n";
    cin >> num;

    if( num > 0 )
        cout << num <<" es un numero positivo";
    else if (num < 0)
        cout << num <<" es un numero negativo";
    else
        cout << num <<" es cero"; 

    return 0;
}