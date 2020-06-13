#include <iostream>

using  namespace std;

int Metodo_Euclides(int, int);

int main(){

    //Peticion de datos 
    int mayor = 0 , menor = 0;
    
    //Informacion al usuario y Peticion de datos
    cout << "Vamos a calcular el MCD de dos numeros" <<endl;
    cout << "Ingrese el primer numero ";
    cin >> mayor;
    cout << "Ingrese el segundo numero ";
    cin >> menor; 

    cout << "El MCD de " << mayor << " y " << menor << " es " <<Metodo_Euclides(mayor,menor);


    return 0;
}

int Metodo_Euclides(int m, int n)
{
    int r = 0;

    do{
        r =  m %n;
        if(r != 0)
        {
            m = n;
            n = r;
        }
    }while(r != 0);
   
    return n;

}