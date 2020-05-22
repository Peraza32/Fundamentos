//Realice un programa que verifique si una palabra termina con la misma letra con la que inicia
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //Declaracion de datos
    string palabra; 

    //Entrada de datos
    cout << "Bienvenido" <<endl;
    cout <<"Vamos a identificar si una palabra termina con la letra con la cual inicia " <<endl;
    cout << "NOTA: Las letras mayusculas y minusculas seran tomadas como distintas" <<endl;
    cout << "Ingrese la palabra " <<endl;
    cin >> palabra;

    if(palabra[0] == palabra[palabra.length()-1])
        cout << "La palabra termina con la misma letra con la cual inicia";
    else
        cout << "La palabra no termina con la misma letra con la cual inicia";

    
    return 0;
}