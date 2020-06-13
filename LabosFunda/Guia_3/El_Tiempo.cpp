#include <iostream>
#include <ctime>
#include <cstring>


using namespace std;


string Add_Second( int, int, int );
string Get_Actual_Time();
string Formato_Tiempo( int, int, int );
bool Validar_Datos( int, int, int );

int main()
{
    //Defincion de Variables
    int h,m,s;

    //Petiion de Datos 
    cout << "Ingrese las horas ";
    cin >> h;
    cout << "Ingrese los minutos ";
    cin >> m;
    cout << "Ingrese los segundos ";
    cin >> s; 
    //Validacion de Datos 
    if( Validar_Datos(h,m,s) == true )
        cout << "\n" << Add_Second(h,m,s); //Procesamiento de Datos 
    




    return 0;
}


string Get_Actual_Time()
{

    //Declaracion de datos 
    time_t raw;
    struct tm * tiempo;
    char data[80];
    string formato;

    time (&raw); //se obtine la cantidad de tiempo en segundos, sin procesar
    tiempo = localtime(&raw); // convertimos el tiempo en segundos a los valores correspondientes, en el tiempo local
    strftime(data, 80,"%T", tiempo);
    return data; //creamos y retormanos las string con el tiempo en format hh:mm:ss
}


string Add_Second( int h, int m, int s)
{
    string new_time;
        //Convertimos a enteros la cadena y la dividimos en horas, minutos y segundos.
        s += 1;
        if(s >= 60) //Verificamos si ya pasaron 60 seg, si es asi, agregamos un minuto
        {
            s = 0;
            m++;
            if(m >= 60)//Verificamos si ya pasaron 60 min, si es asi, agregamos una hora
            {
                m=0;
                h++; 
                if(h > 23)//Si ya pasaron 24 horas, reiniciamos el contador
                    h = 0;

                //Creamos la nueva cadena de tiempo
                return  Formato_Tiempo(h,m,s);
            }
            else{
               
                return  Formato_Tiempo(h,m,s);
            }
        }
        else
        {
            
            return  Formato_Tiempo(h,m,s);
        }

    
}


string Formato_Tiempo(int h, int m, int s)
{
    string f_tiempo;
    if(h < 10)
    {
        if(m < 10)
        {
            if(s < 10)
            {
                f_tiempo = "0"+to_string(h)+":"+"0"+to_string(m)+":"+"0"+to_string(s);
            return f_tiempo;
            }
            
            f_tiempo = "0"+to_string(h)+":"+"0"+to_string(m)+":"+to_string(s);
            return f_tiempo;
            
        }
        else
        {
            f_tiempo = "0"+to_string(h)+":"+to_string(m)+":"+to_string(s);
            return f_tiempo;
        }
    }
    else
    {
       if(m < 10)
        {
            if(s < 10)
            {
                f_tiempo = "0"+to_string(h)+":"+"0"+to_string(m)+":"+"0"+to_string(s);
                 return f_tiempo;
            }
            
            f_tiempo = "0"+to_string(h)+":"+"0"+to_string(m)+":"+to_string(s);
            return f_tiempo;
        }
        else
        {
            if(s < 10)
            {
                f_tiempo = to_string(h)+":"+to_string(m)+":"+"0"+to_string(s);
                 return f_tiempo;
            }
            else
            {
                f_tiempo = to_string(h)+":"+to_string(m)+":"+to_string(s);
                return f_tiempo;
            }
            
        } 
    }        
}

bool Validar_Datos(int h, int m, int s)
{
    if( h > 23 || h < 0)
    {
        cout << "Valor de horas fuera del rango";
        return false;
    }
    else if( s > 60 || s < 0)
    {
        cout << "Valor de segundos fuera del rango";
        return false;
    }
    else if( m > 60 || m < 0)
    {
        cout << "Valor de minutos fuera del rango";
        return false;
    }
    else
        return true; 
}

