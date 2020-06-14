#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int Numero_Magico();

int main()
{
     int num_mag = Numero_Magico();//creamos el numero random entre 1 y 100
     int n, contador =0;
     bool flag =  false; //estada para saber si el usuario ha adivinado o no el numero

    //Presentacion del juego 
    cout <<"Bienvenido al juego del numero magico" <<endl;
    cout << "El usuario cuenta con 5 intentos para adivinar el numero magico,\nQue se encuentra entre 0 y 100, este cambia con cada juego." <<endl;
    cout << "Si el usuario aun posee intentos y ya no desea seguir jugando, debera presionar el numero 0"<<endl;
    cout << "EMPECEMOS"<<endl;

    do//Loop que dura los 5 intent0s 
    {
        
        cout << "Este es el intento numero " << contador + 1<< endl;
        cout << "Quedan " << 5 - (contador+1) << " intentos" <<endl;
        cout << "¿Cual numero crees que es el numero magico? " <<endl;
        cin >> n;

        if(n == 0) //Si el jugador desea salir, rompemos el bucle
            break;
        else
        {

             flag = (n == num_mag)? true:false;

            if(flag == false)//Desplegamos este mensaje si el jugador np adivino el numero
            {
                cout << "Oops, numero incorrecto, prueba de nuevo " <<endl;
                if(n < num_mag)//Pistas
                    cout <<"Prueba con un numero mas alto";
                else
                    cout << "Intenta con un numero mas bajo";
                
                cout << "\n\n\n";
                contador++;
            }
        }
    }while(flag == false && contador < 5);

    if(flag == true)// Evaluamos s el jugador gano o no el juego 
    {
        cout << "Has ganado el juego ";
    }
    else
    {
        cout << "Mas suerte la proxima";
    }


    return 0;
}

int Numero_Magico()
{
    srand(time(0)); //Creamos una semilla random, asegurando que cada juego sea distinto
    return ( 1 + rand() % 100 );
} 

