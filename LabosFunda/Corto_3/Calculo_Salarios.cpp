#include <iostream>
#include <iomanip>



using namespace std;

//Declaramo constantes los valores de las horas y los descuentos, pues no deben de cambiar a lo largo del programa
const float  VALOR_HORA_T = 1.75;
const float VALOR_HORA_EX = 2.50;
const float SEGURO = 0.04;
const float AFP = 0.0625;
const float RENTA =  0.1;

//Encabezados de funciones
float Calculo_Salario_Total(float, float);
float Calculo_Salario_Real(float);
float Descuentos(float);

int main()
{

    //Declaracion de Variables
    int n_empleados = 0;
    float hora_t = 0, hora_ex = 0;
    float salario_n;

    //Peticion de Datos y Menu
    cout << "Calculo de planilla" <<endl;
    cout << "Ingrese el numero de empleados ";
    cin >> n_empleados;

    if(n_empleados <= 0)
        cout << "Numero de empleados invalido";
    else
    {
        for(int i = 0; i < n_empleados; i++) //iteramos hasta que hayamos cumplido con el numero total de empleados
        {
            salario_n = 0;

            //solicitamos las horas trabajadas por cada empleado
            cout << "Ingrese las horas normales trabajadas por el empleado n°" <<(i+1) << " ";
            cin >> hora_t;
            cout << "Ingrese las horas extras trabajadas por el empleado n°" <<(i+1) << " ";
            cin >> hora_ex;

            if( hora_ex < 0 || hora_t < 0)
                break;

            salario_n = Calculo_Salario_Total(hora_t, hora_ex);
            cout << "\nEl Salario total del empleado n°" <<(i+1) << " es " << salario_n <<endl;
            cout << fixed << setprecision(2) <<"El Total de descuentos del empleado n°" <<(i+1) << " es " <<Descuentos(salario_n)<<endl;
            cout << fixed << setprecision(2) <<"El Salario real del empleado n°" <<(i+1) << " es " << Calculo_Salario_Real(salario_n)<<endl;
            cout << "\n\n\n\n";

        }   
    }
    

    


    return 0;
}

//Funciones

//Funcion que calcula el salario total de cada empleado
float Calculo_Salario_Total(float horas_t = 0, float extra = 0)
{
    return (horas_t * VALOR_HORA_T) + ( extra * VALOR_HORA_EX);
}

//Funcion que calcula el salario real de cada empleado
float Calculo_Salario_Real(float salario_t)
{
    return salario_t - Descuentos(salario_t);
}

//Funcion que calcula los descuentos de cada empleado
float Descuentos(float salario)
{
    if(salario > 500) //Si el empleado gana mas de 500, se le descuenta renta
        return (salario * AFP)+(salario * SEGURO)+(salario * RENTA);
    else 
        return (salario * AFP)+(salario * SEGURO);
}