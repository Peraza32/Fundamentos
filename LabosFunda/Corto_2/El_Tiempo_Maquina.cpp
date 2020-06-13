#include <iostream>
#include <ctime>
#include <cstring>


using namespace std;

string Get_Actual_Time();
string Add_Second(const string t);


int main()
{
    int h, m,s;
    string a;
    cout << Get_Actual_Time();
    a = Get_Actual_Time();
    cout << "\n" << Add_Second(a);


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



string Add_Second( const string t)
{
    int h = 0, m = 0, s = 0;
    string new_time;
    if(t.length() == 8) // verificamos que la cadena tenga formato HH:MM:SS que posee 8 caracteres
    {
        //Convertimos a enteros la cadena y la dividimos en horas, minutos y segundos.
        h = stoi(t.substr(0,2),0,10); //horas
        m = stoi(t.substr(3,4),0,10); //minutos
        s = stoi(t.substr(6,7),0,10); //segundos

        s += 1;
        if(s >= 60) //Verificamos si ya pasaron 60 seg, si es asi, agregamos un minuto
        {   
            s=00;
            m++;
            if(m >= 60)//Verificamos si ya pasaron 60 min, si es asi, agregamos una hora
            {
                m=00;
                h++; 
                if(h > 24)//Si ya pasaron 24 horas, reiniciamos el contador
                    h == 00;

                new_time = to_string(h) + ":" + to_string(m) + ":" + to_string(s); //Creamos la nueva cadena de tiempo
                return  new_time;
            }
            else{
               new_time = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
                return  new_time;
            }
        }
        else
        {
            new_time = to_string(h) + ":" + to_string(m) + ":" + to_string(s);
            return  new_time;
        }
    }
    else
        return "El dato ingresado como tiempo presenta problemas";
    

}

