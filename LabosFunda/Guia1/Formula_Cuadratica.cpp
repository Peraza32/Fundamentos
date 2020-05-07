#include <iostream>
#include <cmath>
#include <iomanip> 


using namespace std;

int main(){

    //Declaracion de variables
    int a = 0, b = 0, c = 0, disc;
    double x1 = 0, x2 = 0;

    //Peticion de datos
    cout << "Vamos a calcular el resultado de una ecuacion cuadratica usando la formula general \n";
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    //Calculamos el disrimante  
    disc = pow( b , 2 ) - ( 4 * a * c ); 
    //Verificamos que las respuestas sean numeros reales
    if(disc < 0)
        cout << "los resultados  tendran valores imaginario";
    else
    {
        //Calculamos y mostramos los resultados 
        x1 =  ( -b + sqrt( disc ) ) / ( 2 * a );
        x2 =  ( -b - sqrt( disc ) ) / ( 2 * a );

        cout << setprecision(5);
        cout << "El valor de x1 es " <<x1 <<endl;
        cout << "El valor de x2 es " <<x2 <<endl;

    }


   

    return 0;

}