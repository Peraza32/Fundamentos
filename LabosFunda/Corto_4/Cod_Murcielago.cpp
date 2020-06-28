/* getchar example : typewriter */
#include <iostream>
#include <cstdlib>


using namespace std;


//Protoripos de funciones
char BatiConversion(char );
void BatiCadena(char [], int );

int main ()
{

    //Declaracion de un arreglo para guardar  los caracteres
  int tam = 256, j =0;
  char p[tam]; //Arreglo de memoria dinamica para guardar los caracteres

    cout << " Ingrese las frase a convertir en codigo murcielago, presione [ENTER] para terminar " <<endl;
    cin.getline(p,tam); //guardamos la frase ingresada por el usuario
    j = cin.gcount(); //cantidad de carcteres ingresados, para reducir el tiempo de ejecucion

    BatiCadena(p, j); //convertimos la cadena a clave murcielago

    cout <<p;

  
  return 0;
}


void BatiCadena(char frase[], int t)
{
    for(int i =  0; i < t ; i++) //recorremos la cadena
    {
        //verificamos si aparece alguna de las letras de murcielago, en mayuscula o minuscula
        if(frase[i] ==77 || frase[i] == 109 || frase[i] == 85 || frase[i] == 117 || frase[i] == 82
            || frase[i] == 114 || frase[i] == 67 || frase[i] == 99 || frase[i] == 73 || frase[i] == 105 
            || frase[i] == 69 || frase[i] == 101 || frase[i] == 76 || frase[i] == 108 || frase[i] == 65
            || frase[i] == 97 || frase[i] == 71 || frase[i] == 103 || frase[i] == 79 || frase[i] == 111 )
            frase[i] = BatiConversion(frase[i]);
    }
}


char BatiConversion(char c) //Convertimos la letra a su correspondiente numero
{
    if(c == 77 || c == 109 )
        return '0';
    else if(c == 85 || c == 117 )
        return '1';
    else if(c == 82 || c == 114 )
        return '2';
    else if(c == 67 || c == 99 )
        return '3';
    else if(c == 73 || c == 105 )
        return '4';
    else if(c == 69 || c == 101 )
        return '5';
    else if(c == 76 || c == 108 )
        return '6';
    else if(c == 65 || c == 97 )
        return '7';
    else if(c == 71 || c == 103 )
        return '8';
    else if(c == 79 || c == 111 )
        return '9';
}