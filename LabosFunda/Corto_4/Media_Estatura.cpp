#include <iostream>


using namespace std;

//Prototipos de funciones
float Media_Estatura( const float [], const int );
void Comparacion(int &, int &, const float [], const int , float );



int main()
{

    //Declaracion de variables
    const int tam = 25;
    float estaturas[tam];
    int cont = 0,  menores = 0, mayores = 0;
    float media = 0;

    //Petitcion de datos
    cout << "Vamos a calcular el promedio de estaturas" <<endl;
    do{
        cout << "Ingrese la estatura del alumno " <<(cont+1) <<endl;
        cin >> estaturas[cont];

        cout << "\n";
        cont++;

    }while(cont < tam);



    media =  Media_Estatura(estaturas, tam);
    Comparacion(mayores, menores, estaturas, tam, media);

    cout << " La media de la estatura de  estudiantes es de " << media <<endl;    cout << " la cantidad de alumnos con estatura arriba de la media es " <<mayores <<endl;
    cout << " la cantidad de alumnos con estatura abajo de la media es " <<menores <<endl;


    return 0;
}


float Media_Estatura( const float estaturas[], const int t)
{
    
    float media; 

    for(int i = 0; i < t; i++)
        media += estaturas[i];
    
    media =  media/t;


    return media; 
}


void Comparacion(int &mayores, int &menores, const float e[], const int t,float media)
{

    for(int i = 0;  i < t;  i++)
    {
        if(e[i] > media)
            mayores++;
        else if(e[i] < media)
            menores++;
    }

} 