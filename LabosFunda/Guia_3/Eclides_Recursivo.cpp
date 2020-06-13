#include <iostream>

using  namespace std;

int Metodo_Euclides(int, int);

int main(){


    cout << Metodo_Euclides(13542,1628);


    return 0;
}

int Metodo_Euclides(int m, int n)
{
    int r = 0;
    //Verificamos que el numero menor  sea 0, el caso base
    if(n == 0)
        return m;
    else
    {
        //Guaradmos el residuo y pasamos el nuevo conjunto de valores
        r = m % n;
        Metodo_Euclides(n,r);
    }
}