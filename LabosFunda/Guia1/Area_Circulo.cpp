#define _USE_MATH_DEFINES_

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){

    float r, perimetro, area;


    cout << "Programa para calcular el perimetro y el area de un circulo" << endl;
    cout << "Ingrese el valor del radio del circulo" <<endl;
    cin >> r; 

    //Calculamos los resultados 
    perimetro = (2 * M_PI * r);
    area = M_PI * pow(r,2);

    //Mostramos los resultados
    cout << setprecision(5);
    cout << "Perimetro del circulo: " << perimetro <<endl;
    cout << "Area del circulo: " << area ;


    return 0;
}