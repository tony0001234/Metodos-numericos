#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

void menu(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;//endl genera al final de lo impreso anterior un salto de linea como un enter.

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"1) f(x) = x^4 -3x^2 -3 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"2) f(x) = x^3 -2x^2 -5 = 0 TOL = 10^-15" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

    cout<<"3) f(x) = x^3 -2x^2 -5 = 0 TOL = 10^-20" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.


	cout<<"4) f(x) = 2^x -6cos(x) = 0 TOL = 10^-15" << endl;
    
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"5) f(x) = 230x^4 +18x^3 +9x^2 -221x -9 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"6) Salir.";
}

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion       Numero p0           Numero fp0           Numero p            f(p)                  Error absoluto           "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
}

void contTabla(int ite, float nP0, float nP1, float nQ0, float nQ1, float nP, float nFp, float errAbs){//en este proceso si envio parametros para la correcta colocacion de los datos, pero igualmente es vacio para que se ejecute nada mas.
	if(ite<=9){//un condicional if, que indica que si se cumple ite menor o igual a 9 realizara el contenido dentro del mismo, solo corre un espacio el codigo dependiendo si las iteraciones son de 1 o 2 digitos, ya que si no se veran desfazadas.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<" "<<ite<<"           "<<fixed<<setprecision(15)<<nP0<<"   "<<fixed<<setprecision(15)<<nP1<<"   "<<fixed<<setprecision(15)<<nQ0<<"   "<<fixed<<setprecision(15)<<nQ1<<"   "<<fixed<<setprecision(15)<<nP<<"   "<<fixed<<setprecision(15)<<nFp<<"   "<<fixed<<setprecision(15)<<errAbs<<endl;//fixed<<setprecision(11) lo utilizo para dejar los parametros con 11 decimales
	}
	if(ite>9){//Este condicional es para todos los datos despues de la iteracion 9 ya que todo el contenido de la fila despues de la iteracion se debe correr un espacio a la izquierda para que no se vea desfazado.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<""<<ite<<"          "<<fixed<<setprecision(15)<<nP0<<"   "<<fixed<<setprecision(15)<<nP1<<"   "<<fixed<<setprecision(15)<<nQ0<<"   "<<fixed<<setprecision(15)<<nQ1<<"   "<<fixed<<setprecision(15)<<nP<<"   "<<fixed<<setprecision(15)<<nFp<<"   "<<fixed<<setprecision(15)<<errAbs<<endl;
	}
}