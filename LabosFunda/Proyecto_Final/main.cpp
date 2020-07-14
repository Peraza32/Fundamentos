#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;



//Estructuras usadas en el programa
struct CostoPorArticulo{

    string nombreArticulo;
    int cantidad;
    float precioUnitario;
    float CostoTotalArticulo;

};

//Prototipos de funciones
float costoTotalFinal( vector<CostoPorArticulo> articulos);
float costoTotalUnitario (int cantidad, float precio );
void lectura(int n, vector<CostoPorArticulo> &factura);
void mostrar(vector<CostoPorArticulo> elementos);
void Formato(int, bool = 0, char  = ' ' );


int main()
{

    int n_productos = 0;
    vector<CostoPorArticulo> factura;

    cout << "Bienvenido a Megaton Store" <<endl;
    cout << "Ingrese la cantidad de productos que contendra la factura ";
    cin >> n_productos;

    lectura(n_productos, factura);
    mostrar(factura);

    return 0;
}


//Funciones 
//Funcion que calcula el costo total final de la factura
float costoTotalFinal( vector<CostoPorArticulo> articulos)
{
    float total = 0; //Variable uxiliar 
    for(int i = 0; i < articulos.size(); i++)
    {
        total += articulos[i].CostoTotalArticulo; //Accedemos a cada subtotal del arreglo y lo sumamos en la variable auxiliar 
    }

    return total;
}


//Funcion que calcula 
float costoTotalUnitario (const int cantidad, const float precio )
{
    return cantidad * precio;
}

//Funcion usada para algunos formatos de salida de la factura

void Formato(int width,  bool dir , char sign )
{
    if(dir == 0 )
        cout << left << setw(width) << setfill(sign) ; 
    else 
        cout << right << setw(width) << setfill(sign); 
}

//Funcion que lee y guarda cada elemento del arreglo. 
void lectura(int n, vector<CostoPorArticulo> &factura)
{

    CostoPorArticulo articulo; //Creamos un objeto de la estructura 

    for(int i = 0; i < n; i++)
    {
        //Obtenemos y guardamos los datos de cada producto
        cout << "Ingrese el nombre del producto ";
        cin.ignore();
        getline(cin,articulo.nombreArticulo) ; 
        
        cout << "Ingrese la cantidad de producto por comprar ";
        cin >> articulo.cantidad;

        cout << "Ingrese el precio del producto ";
        cin >> articulo.precioUnitario;
        cout << "\n";

        articulo.CostoTotalArticulo = costoTotalUnitario(articulo.cantidad, articulo.precioUnitario);  

        factura.push_back(articulo); //Guardamos el nuevo producto en el vector factura. 

    } 
    cout << endl;

}

void mostrar(const vector<CostoPorArticulo> factura)
{
    //Creamos el encabezado de la factura
    cout.fill('-');
    cout.width(113);
    cout << "\n|Factura" ; 
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
        //Mostramos cada item de la factura 
        cout << "|";
        Formato(10);
        cout <<factura[i].cantidad << "|" << setw(30)  << factura[i].nombreArticulo << "|" << setw(30) << factura[i].precioUnitario
             << "|" << setw(29) << factura[i].CostoTotalArticulo << "|"  <<endl;
    }
    cout << setfill('-') <<setw(104) << " " <<endl;
    cout   << setw(73) <<setfill(' ') << "|Total"  <<left  <<"|" <<costoTotalFinal(factura)  <<right<< setw(27) <<"|" <<endl; //Costo Final Total
    cout << setfill('-') <<setw(105) << " " <<endl;
}
