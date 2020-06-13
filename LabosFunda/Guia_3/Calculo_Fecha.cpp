#include <iostream>

using namespace std;

bool Bisiesto(int);
string Calculo_Siguiente_Dia(int , int , int );
string Formato_fecha(int , int , int);
bool Validar_Datos(int , int , int );

int main()
{
    //Declaracion de variables 
    int d = 0, m = 0, y = 0;

    //Emtrada de datos
    cout << "Vamos a calcular el dia siguiente" <<endl;
    cout << "Ingrese el año ";
    cin >> y;
    cout << "Ingrese el mes ";
    cin >> m;
    cout << "Ingrese el dia ";
    cin >> d;

    if(Validar_Datos(y, m, d) == true)
        cout << Calculo_Siguiente_Dia(d,m,y);



    return 0;
}

bool Bisiesto(int year)
{
    //Comprobamos si el anio cumple alguna de las condiciones
    if( ( year % 400 ) == 0)
        return true;
    else if( ( year % 4 == 0 ) && (year % 100 != 0) )
        return true;
    else 
        return false; //si no se cumplen, el anio no es bisiesto
    
}

string Calculo_Siguiente_Dia(int dia, int mes, int year)
{
    string fecha;
    dia++;
        switch(mes)
        {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                if(dia > 31)
                {
                    dia = 1;
                    mes++;

                    if(mes > 12)
                    {
                        mes = 1;
                        year++;     
                        return Formato_fecha(dia,mes,year);
                    }
                    else
                    {
                      return Formato_fecha(dia,mes,year);  
                    }
                    
                }
                else
                {
                    return Formato_fecha(dia,mes,year);
                }
                
                break;

            case 2:

                if(Bisiesto(year) == true)
                {
                    if(dia > 29)
                    {
                        dia = 1;
                        mes++;
                        return Formato_fecha(dia,mes,year);  
                    }
                    else
                    {
                        return Formato_fecha(dia,mes,year);
                    }
                }
                else
                {
                    if(dia > 28)
                    {
                        dia = 1;
                        mes++;
                        return Formato_fecha(dia,mes,year);  
                    }
                    else
                    {
                        return Formato_fecha(dia,mes,year);
                    }
                }
            
            

            break;


            case 4: case 6: case 9: case 11:
            if(dia > 30)
                {
                    dia = 1;
                    mes++;

                      return Formato_fecha(dia,mes,year);  
                    
                }
                else
                {
                    return Formato_fecha(dia,mes,year);
                }
            break;
            default: 
                cout << "Fecha invalida";
                break; 
    }
}

string Formato_fecha(int d, int m, int y)
{
    string f_fecha;
    if(d < 10)
    {
        if(m < 10)
        {
            f_fecha = "0"+to_string(d)+"/"+"0"+to_string(m)+"/"+to_string(y);
            return f_fecha;
        }
        else
        {
            f_fecha = "0"+to_string(d)+"/"+to_string(m)+"/"+to_string(y);
            return f_fecha;
        }
    }
    else
    {
       if(m < 10)
        {
            f_fecha = to_string(d)+"/"+"0"+to_string(m)+"/"+to_string(y);
            return f_fecha;
        }
        else
        {
            f_fecha = to_string(d)+"/"+to_string(m)+"/"+to_string(y);
            return f_fecha;
        } 
    }    
}

bool Validar_Datos(int y, int m, int d)
{
    if( y < 0)
    {
        cout << "Valor de años fuera del rango";
        return false;
    }
    else if( m > 12 || m < 0)
    {
        cout << "Valor de meses fuera del rango";
        return false;
    }
    else if(Bisiesto(y) == false && d > 28 && m == 2)
    {
        cout << "Valor de fecha incorrecto";
        return false;
    }
    else if( d > 31  || d < 0  )
    {
        cout << "Valor de dias fuera del rango";
        return false;
    }
    else
        return true; 
}