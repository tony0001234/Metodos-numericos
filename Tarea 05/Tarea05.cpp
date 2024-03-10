#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

void menu(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;//endl genera al final de lo impreso anterior un salto de linea como un enter.

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"1) f(x) = ln[  (x^2)  +  1]  -  [e^(0.4x)]cos(pi*x)  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"2) f(x) = (2^x)  -  6cos(x)  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"3) Salir.";
}

void subMenu(){
	system("cls");//limpio la consola
    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"1. TOL = 10^-10, IT = 100, Primera raiz negativa."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"2. TOL = 10^-10, IT = 100, Primera raiz positiva."<<endl;
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

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion  Numero p0          Numero p1          Numero q0          Numero q1          Numero P           f(p)               Error Absoluto     "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
}

void contTabla(int ite, float nP0, float nP1, float nQ0, float nQ1, float nP, float nFp, float errAbs){//en este proceso si envio parametros para la correcta colocacion de los datos, pero igualmente es vacio para que se ejecute nada mas.
	string espacio = "    ";
	if(ite<=9){//un condicional if, que indica que si se cumple ite menor o igual a 9 realizara el contenido dentro del mismo, solo corre un espacio el codigo dependiendo si las iteraciones son de 1 o 2 digitos, ya que si no se veran desfazadas.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<" "<<ite<<"           "<<fixed<<setprecision(15)<<nP0<<espacio<<fixed<<setprecision(15)<<nP1<<espacio<<fixed<<setprecision(15)<<nQ0<<espacio<<fixed<<setprecision(15)<<nQ1<<espacio<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;//fixed<<setprecision(11) lo utilizo para dejar los parametros con 11 decimales
	}
	if(ite>9){//Este condicional es para todos los datos despues de la iteracion 9 ya que todo el contenido de la fila despues de la iteracion se debe correr un espacio a la izquierda para que no se vea desfazado.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<""<<ite<<"           "<<fixed<<setprecision(15)<<nP0<<espacio<<fixed<<setprecision(15)<<nP1<<espacio<<fixed<<setprecision(15)<<nQ0<<espacio<<fixed<<setprecision(15)<<nQ1<<espacio<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;
	}
}

int main(){
	int IT = 100, i = 1, opcion, secOpcion;
	float p0, p1, q0, q1, p, fp, errAb, TOL = pow(10, -10);

	while (opcion != 3)
	{
		menu();

		if( (cin>>opcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
            system("cls");//de ser asi, limpio la consola 
            cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
            fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
            opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
        }

		switch (opcion)
		{
		case 1:
			while (secOpcion != 7)
			{
				subMenu();

				if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                    system("cls");//de ser asi, limpio la consola 
                    cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                    fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                    secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                }
				switch (secOpcion)
				{
				case 1:
					system("cls");

					cabezaTabla();

					

				break;
				
				default:
					break;
				}
			}
			
		break;
		
		default:
			system("cls");
			cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
		break;
		}
		secOpcion = 0;
	}
	
	return 0;
}