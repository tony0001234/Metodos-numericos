#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

void menu(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;//endl genera al final de lo impreso anterior un salto de linea como un enter.

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"1) p(x) =  x^5  + 11x^4 -  21x^3 - 10x^2  - 21x  - 5  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"2) p(x) =  x^4  + x^3  + 3x^2  + 2x  +  2 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

    cout<<"3) p(x) =  x^3  -  9x^2  +  12  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"4) Salir.";
}

void subMenu(){
	system("cls");//limpio la consola
    cout<<"Eliga los valores con los que desea aproximar una raiz."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"1. X0 = 1, x1 = 1.5, x2 = 2."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"2. X0 = 1, x1 = 1.5, x2 = 2."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"3. TOL = 10^-10, IT = 100, Segunda raiz positiva."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"4. TOL = 10^-10, IT = 100, Tercera raiz positiva."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"5. TOL = 10^-10, IT = 100, Cuarta raiz positiva."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"6. TOL = 10^-10, IT = 100, Decima raiz positiva."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"7. Regresar."<<endl;
}
