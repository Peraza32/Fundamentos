#include <iostream>

using namespace std;


void Fill_Array(int [], int ); //Prototipo de funcion para lllenar el arreglo


int main(){

    const int n = 100; //tamano del arreglo
    int a[n];
    Fill_Array( a, n); //Llenamos el arreglo
    
    for(int i = 0; i < n; i++) //Mostramos el arreglo de forma ordenada
        cout << "a[" <<i <<"] :" << a[i] <<endl; 


    return 0;
}



void Fill_Array( int b[], int n) //Funcion para llenar el arreglo

{
    int cont = 0; //COntador inicial
    int i = n; //Contador para la creacion de numeros impares
    do
    {
       b[cont] = (2*i)+1; //Asignacion de numeros impares, numeros generados a traves de la definicion matematica de impar
       cont++;
       i--;
    }while(cont < n);
    
}
