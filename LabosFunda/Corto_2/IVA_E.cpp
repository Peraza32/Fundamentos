#include <iostream>
#include <cstring>
#include <iomanip>
#include <clocale>



using namespace std;



int main(){

    setlocale(LC_ALL, "spanish");

    //Declaracion de variables
    int opc;
    double precio, iva;

    //Peticion de adtos
    cout << "Calculo de IVA"<<endl;
    cout.width(40) ;
    cout << left <<setfill('-') <<"";
    cout.width(20) ;
    cout.fill(' ');
    cout << left << setw(20) <<"\n|Pais" <<setw(20) <<"IVA" <<setw(25) <<"|"<<endl ;
    cout << left << setw(40) <<setfill('-') <<""
         << setw(20) <<setfill(' ') <<"\n|1)El Salvador" 
         <<setw(20) <<"13%"<<setw(25) <<"|" ;
    cout << setw(20) <<setfill(' ') <<"\n|2)Guatemala" 
         <<setw(20) <<"9%"<<setw(25) <<"|" ;
    cout  << setw(20) <<setfill(' ') <<"\n|3)Honduras" 
         <<setw(20) <<"15%"<<setw(25) <<"|" ;
    cout<< setw(21) <<setfill(' ') <<"\n|4)España" 
         <<setw(20) <<"20%"<<setw(25) <<"|"
         << setw(41) <<setfill('-') <<"\n" ;

    cout << "\nSeleccione el país ";
    cin >> opc;

    cout <<"\nIngrese el precio al que se le calculara el IVA: $";
    cin >> precio;
    
   switch(opc)
    {
        case 1:
            iva = precio * 0.13;
            precio = precio * (1.13);
            break;
    
   
        case 2:
            iva = precio * 0.09;
            precio = precio * (1.09);
            break;
    
        case 3:
            iva = precio * 0.15;
            precio = precio * (1.15);
            break;
    
        case 4:
            iva = precio * 0.20;
            precio = precio * (1.20);
            break;

        default:   
            cout << "Opcion incorrecta";
            break;
    }

    
    cout << "El iva a cancelar sera de " << iva <<endl;
    cout << "El precio final con iva incluido es " << precio;
   


    return 0;
}


