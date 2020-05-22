#include <iostream>
#include <cstring>



using namespace std;

int main(){

    //Declaracion de datos 
    string palabra = "";
    int a = 0;

    //Peticion de datos 

    cout << "Bienvenido" <<endl;
    cout << "Vamos a determinar la cantidad de caracteres de una palabra, y si esta cantidad es par o impar " <<endl ;
    cout << "Ingrese la palabra a usar " << endl;
    getline(cin, palabra);

    //longitud de la palabra
    a = palabra.length();


    if( a >= 10)
    {
        cout << "\nLa longitud de la palabra " <<palabra << " es mayor a 10 caracteres" <<endl;
        cout << "Cantidad de caracteres " << a <<endl;

         if(a % 2 == 0)
            cout << "Longitud par";
        else
            cout << "Longitud impar";
    }
    else
    {
        cout << "\nLa longitud de la palabra " <<palabra << " es menor a 10 caracteres" <<endl;
        cout << "Cantidad de caracteres " << a <<endl;

         if(a % 2 == 0)
            cout << "Longitud par";
        else
            cout << "Longitud impar";
    }
    

    return 0;
}