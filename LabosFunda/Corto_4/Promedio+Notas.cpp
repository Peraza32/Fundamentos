#include <iostream>

using namespace std;

//Prototipos de funciones

void Calculo_Promedio(float *, int );
void Llenar( float **, int );
void Mostrar(float **, int );

int main()
{

    int num = 0;

//Peticion de datos
    cout << "Vamos a determinar cuantos alumnos pasan o no la materia " <<endl;
    cout << "Ingrese la cantidad de alumnos ";
    cin >> num; //Este numero nos servira como la cantidad de columnas de nuestro arreglo dinamico

    //Creamos el arreglo multimensional mediante un arreglo de punteros, por ende
    //creamos un puntero a puntero, o sea doble **
    float **notas = new float*[num];

    for(int i =  0; i < 7; i++)
        notas[i] = new float[7];//Creamos los arreglos de punteros dinamicos, para almacenar 5 notas, un promedio 
        //y si aprobo o no 
    Llenar(notas, num);
    

    Mostrar(notas, num);

    return 0;

}

void Calculo_Promedio(float notas[], int t) // Calculo de la nota final del estudiante
{
    float media;
    for(int i = 0; i < 5; i++)
        media += (notas[i] * 0.2); //Calculamos la media de sus notas
    
    notas[5] = media; //Asignamos dicha media

    if(media >= 7) //Verificamos si el alumno aprueba o no la materia
        notas[6] = 1;  //Aprobado
    else
        notas[6] = 0; //Reprobado

}

void Llenar( float **notas, int num) //Funcion para pedir las notas
{
    for(int i = 0; i < num; i++)
    {   
        for(int j = 0; j < 5;j++ )
        {
            cout << "Ingrese la nota " <<(j+1) << " del alumno " <<(i+1) << " ";
            cin >> notas[i][j];
            if(j == 4)
                Calculo_Promedio(notas[i], 7); //AL tener las 5 notas, calculamos y asigannmos el promedio
        }

        cout << endl;
        
    }
}


void Mostrar(float **alumnos, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "La nota final es " <<alumnos[i][5];
        if(alumnos[i][6] == 1)
            cout << " Aprobado" <<endl;
        else
            cout << " Reprobado" <<endl;
    }

    for(int i = 0; i <size; i++)
        delete[] alumnos[i];
    
    delete [] alumnos[];
}