#include <iostream>
#include <iomanip>
#include <vector>
#include <string>


using namespace std;


struct CostoPorArticulo{

    string nombreArticulo;
    int cantidad;
    float precioUnitario;
    float CostoTotalArticulo;

};

void Formato(int, bool = 0, char  = ' ' );

int main()
{
    CostoPorArticulo articulo1, articulo2;
    vector<CostoPorArticulo> factura;

    articulo1.nombreArticulo =  "Coca Cola 1.25lts";
    articulo1.cantidad = 15;
    articulo1.precioUnitario = 0.9;
    articulo1.CostoTotalArticulo = 13.5;

    articulo2.nombreArticulo =  "Sandwich de Jamon y Queso";
    articulo2.cantidad = 5;
    articulo2.precioUnitario =1.25;
    articulo2.CostoTotalArticulo = 6.25;

    factura.push_back(articulo1);
    factura.push_back(articulo2);

    cout.fill('-');
    cout.width(113);
    cout << "\n|Factura" ; //<< right <<setfill(' ') <<setw(66) << "|" << setfill('-') <<endl;
    Formato(96, 1);
    cout << "|" <<endl << setfill('-');
    cout.width(105);
    cout << " " <<endl;
    Formato(11);
    cout << "|Cant." << "|" << setw(30)  << "Nombre" << "|" << setw(30) << "Precio Unitario" 
         << "|" << setw(29) << "Subtotal" << "|"  <<endl;
    Formato(104, 0, '-');
    cout << " " <<endl;  
    for (size_t i = 0; i < factura.size(); i++)
    {
        cout << "|";
        Formato(10);
        cout <<factura[i].cantidad << "|" << setw(30)  << factura[i].nombreArticulo << "|" << setw(30) << factura[i].precioUnitario
             << "|" << setw(29) << factura[i].CostoTotalArticulo << "|"  <<endl;
    }
    cout << setfill('-') <<setw(104) << " " <<endl;
    cout   << setw(73) <<setfill(' ') << "|Total"  <<left  <<"|" <<9.75  <<right<< setw(26) <<"|" <<endl; 
    cout << setfill('-') <<setw(105) << " " <<endl;
    

   

    return 0;   

}

void Formato(int width,  bool dir , char sign )
{
    if(dir == 0 )
        cout << left << setw(width) << setfill(sign) ; 
    else 
        cout << right << setw(width) << setfill(sign); 
}