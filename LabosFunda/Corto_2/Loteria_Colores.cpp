#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //Declaracion de variables
    int opc;

    //Peticion de datos 
    cout << "Bienveido a la Loteria de colores" << endl;
    cout << "Elija un color para recibir un premio" << endl;
    cout << setfill('-') <<setw(20)<< endl ;
    cout << "\n1) Negro" <<endl;
    cout << "2) Morado" << endl;
    cout << "3) Azul" << endl;
    cout << "4) Blanco" << endl;
    cout << "5) Verde" << endl;
    cout << setfill('-') <<setw(25) << endl ;
    
    cout << "\n\nSu opcion: ";
    cin >>opc;

    //Determinamos la cantidad ganada
    switch(opc){
        case 1:
            cout << "Felicidades, usted ha ganado $1000" <<endl;
            break;
        case 2:
            cout << "Felicidades, usted ha ganado $300" <<endl;
            break;
        case 3:
            cout << "Felicidades, usted ha ganado $100" <<endl;
            break;
        case 4:
            cout << "Felicidades, usted ha ganado $80" <<endl;
            break;
        case 5:
            cout << "Felicidades, usted ha ganado $20" <<endl;
            break;
        default:
            cout << "Opcion inexistente" <<endl;
            break;
    }



    return 0;
}