#include <iostream>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <clocale>



using namespace std;

string To_Lower(string);

int main(){

    setlocale(LC_ALL, "spanish");

    //Declaracion de variables
    string pais;
    double precio, iva;

    //Peticion de adtos
    cout << "Calculo de IVA"<<endl;
    cout.width(40) ;
    cout << left <<setfill('-') <<"";
    cout.width(20) ;
    cout.fill(' ');
    cout << left << setw(20) <<"\n|Pais" <<setw(20) <<"IVA" <<setw(25) <<"|"<<endl ;
    cout << left << setw(40) <<setfill('-') <<""
         << setw(20) <<setfill(' ') <<"\n|El Salvador" 
         <<setw(20) <<"13%"<<setw(25) <<"|" ;
    cout << setw(20) <<setfill(' ') <<"\n|Guatemala" 
         <<setw(20) <<"9%"<<setw(25) <<"|" ;
    cout  << setw(20) <<setfill(' ') <<"\n|Honduras" 
         <<setw(20) <<"15%"<<setw(25) <<"|" ;
    cout<< setw(21) <<setfill(' ') <<"\n|España" 
         <<setw(20) <<"20%"<<setw(25) <<"|"
         << setw(41) <<setfill('-') <<"\n" ;

    cout << "\nIngrese el nombre del país ";
    getline(cin, pais);

    cout <<"\nIngrese el precio al que se le calculara el IVA: $";
    cin >> precio;
    
    //Convertimos el nombre del pais a minusculas para evitar cualquier problema
    pais = To_Lower(pais);
    

    if(pais == "el salvador")
    {
        iva = precio * 0.13;
        precio = precio * (1.13);
        pais = "El Salvador";
    }
    else if(pais == "guatemala")
    {
        iva = precio * 0.09;
        precio = precio * (1.09);
         pais = "Guatemala";
    }
    else if(pais == "honduras")
    {
        iva = precio * 0.15;
        precio = precio * (1.15);
        pais = "Honduras";
    }
    else if(pais == "españa")
    {
        pais = "España";
        iva = precio * 0.20;
        precio = precio * (1.20);
        
    }

    cout << "En " <<pais <<endl;
    cout << "El iva a cancelar sera de " << iva <<endl;
    cout << "El precio final con iva incluido es " << precio;
   


    return 0;
}


//Funcion para convertir una palabra a minusculas
string To_Lower(string a)
{
    //Convertimos cada letra del string a minuscula, recorriendolo letra a letra con la funcion tolower
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c){return tolower(c);});
    return a;
}