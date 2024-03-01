#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

void menu(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;//endl genera al final de lo impreso anterior un salto de linea como un enter.

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"0) Regresar a este menu." << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"1) f(x) = x^4 -3x^2 -3 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"2) f(x) = x^3 -2x^2 -5 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"3) f(x) = 2^x -6cos(x) = 0" << endl;
    
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"4) f(x) = 230x^4 +18x^3 +9x^2 -221x -9 = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"5) Salir.";
}

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion      Numero A             Numero B              Numero P              f(p)                   Error            "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<< endl;
}

int main() {//funcion principal de tipo int, devuelve un valor entero, me da igual si es int o void ya que es simplemente la funcion principal de mi programa, y por el modo que plantee la programacion puedo hacerlo un vucle.

    int i = 1, IT = 100, opcion, secOpcion;
    float TOL = pow(10, -15), p0, fp0, dfp0, p, fp, errorAbs;

    while (opcion != 5)
    {
        menu();

        if( (cin>>opcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
            system("cls");//de ser asi, limpio la consola 
            cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
            fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
            opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
        }

        switch (opcion){//condicional que me permite hacer un caso por cada valor que puede tomar la variable
            case 1:
                while (secOpcion != 6)
                {
                    system("cls");//limpio la consola
                    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
                    cout<<"1. p0 = 1.0"<<endl;
                    cout<<"2. p0 = 1.5"<<endl;
                    cout<<"3. p0 = 1.99"<<endl;
                    cout<<"4. p0 = 2.75"<<endl;
                    cout<<"5. p0 = 5"<<endl;
                    cout<<"6. regresar"<<endl;

                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)
                    {
                    case 1:
                        i = 1;
                        p0 = 1.0;
                        fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                        dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                        while (i <= IT)
                        {
                            p = (p0-(fp0/dfp0));
                            if (errorAbs < TOL)
                            {
                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                                }
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    
                    default:
                        system("cls");
                        cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
                
            break;
            default:
            system("cls");
            cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
            break;
        }
    }
        

	return 0;//como es una funcion de tipo int debe en el final del mismo retornar un valor, en este caso lo deje default en 0
}