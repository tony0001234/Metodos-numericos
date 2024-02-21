#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

/*Autor: Anthony Fabian Ramirez Orellana. Nombre del programa: Metodo de de punto fijo*/

void menu(){
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;
	cout<<"0) Regresar a este menu." << endl;
	cout<<"1) f(x) = x^4 -3x^2 -3 = 0 con transfomacion a: x = ({3/[(x^2)-3]}^1/2)  tolerancia: 10^-5" << endl;
	cout<<"2) f(x) = x^4 -3x^2 -3 = 0 con transfomacion a: x = ({3/[(x^2)-3]}^1/2)  tolerancia: 10^-10" << endl;
	cout<<"3) f(x) = x^4 -3x^2 -3 = 0 con transfomacion a: x = {[(3x^2)+3]^1/4}  tolerancia: 10^-5" << endl;
	cout<<"4) f(x) = x^4 -3x^2 -3 = 0 con transfomacion a: x = {[(3x^2)+3]^1/4}  tolerancia: 10^-10" << endl;
	
	cout<<"5) Salir.";
}

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion      Numero Po            Numero P              Numero f(p)             Error Absoluto                   Error Relativo            "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<< endl;
}

int main(){

int i = 1, IT = 100;
float p0, p, TOL = (pow(10, -5)), Fp, errAbs, errRel;


}