#include <iostream>  
#include <vector>
#include <ctime>
#include <cstdlib>


using namespace std; 


//Prototipos de funciones 

int Count_Occurrence(const vector<int>, const int);
void Fill_Array(vector<int> &, int, int, int);
int Gen_Rand(int, int );

int main()
{
    //Declaracion de variables
    int minimo = 0, maximo = 1, size = 0;
    int num = 0;
    vector<int> numeros;
    bool flag = false;

    //Peticion de datos
    cout << "Vamos a contar las ocurrencias de un numero \n"
            <<"en un arreglo generado de manera aleatoria" <<endl;
    
    cout << "Ingrese el valor minimo de los numeros que pueden aparecer ";
    cin >> minimo;

    cout << "Ingrese el valor maximo de los numeros que pueden aparecer ";
    cin >> maximo;

    cout << "Ingrese el tamaño del arreglo ";
    cin >> size;

    cout << "Ingrese el numero del cual vamos a buscar la cantidad de veces que aparece ";
    do{
        cin >> num;
        if(num < minimo || num > maximo ) //validamos que el usuario ingrese un numero dentro del rango
        {
            
            cout << "\nValor fuera del rango, intente de nuevo ";
        }
        else
            flag = true;

    }while(flag == false);

    Fill_Array(numeros, minimo, maximo, size);

    //Mostramos los reultados
    cout << "El numero de ocurrencias de " <<num <<" es " <<Count_Occurrence(numeros, num);





    return 0;
}

//Funcion para encontrar cuantas veces se repite un numero en un arreglo
int Count_Occurrence(const vector<int> v, const int num )
{
    int t_num = 0;

    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i] == num ) //Verificamos si el numero en la posicion i, es igual a nuestro numero buscado
            t_num++;
    }
    

    return t_num;

}

//Funcion que llena el arreglo con numeros aleatorios
void Fill_Array(vector<int> &v, int scaling, int shifting, int size)
{

    srand(time(0));
    
    for(int i = 0; i < size; i++)
        v.push_back((scaling + rand() % shifting)); //generamos los numeros aleatorios, y los agregamos l final de la cola
}

