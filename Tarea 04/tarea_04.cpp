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

void contTabla(int ite, float nP0, float nfP0, float np, float nfp, float erAbs){//en este proceso si envio parametros para la correcta colocacion de los datos, pero igualmente es vacio para que se ejecute nada mas.
	if(ite<=9){//un condicional if, que indica que si se cumple ite menor o igual a 9 realizara el contenido dentro del mismo, solo corre un espacio el codigo dependiendo si las iteraciones son de 1 o 2 digitos, ya que si no se veran desfazadas.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<" "<<ite<<"           "<<fixed<<setprecision(15)<<nP0<<"   "<<fixed<<setprecision(15)<<nfP0<<"   "<<fixed<<setprecision(15)<<np<<"   "<<fixed<<setprecision(15)<<nfp<<"   "<<fixed<<setprecision(15)<<erAbs<<endl;//fixed<<setprecision(11) lo utilizo para dejar los parametros con 11 decimales
	}
	if(ite>9){//Este condicional es para todos los datos despues de la iteracion 9 ya que todo el contenido de la fila despues de la iteracion se debe correr un espacio a la izquierda para que no se vea desfazado.
		cout<<"--------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<""<<ite<<"          "<<fixed<<setprecision(15)<<nP0<<"   "<<fixed<<setprecision(15)<<nfP0<<"   "<<fixed<<setprecision(15)<<np<<"   "<<fixed<<setprecision(15)<<nfp<<"   "<<fixed<<setprecision(15)<<erAbs<<endl;
	}
}

int main() {//funcion principal de tipo int, devuelve un valor entero, me da igual si es int o void ya que es simplemente la funcion principal de mi programa, y por el modo que plantee la programacion puedo hacerlo un vucle.

    int i = 1, IT = 100, opcion, secOpcion;
    float TOL = pow(10, -15), p0, fp0, dfp0, p, fp, errorAbs;

    while (opcion != 6)
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
                        secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)
                    {
                    case 1:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1.0;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                            dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 2:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1.5;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                            dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 3:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1.99;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                            dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 4:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 2.75;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                            dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 5:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 5;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 4)) -3*(pow(p0, 2))  - 3 );
                            dfp0 = (  4*(pow(p0, 4))  -  6*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 6:
                        system("cls");
                        opcion = 0;
                    break;

                    default:
                        system("cls");
                        cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 2:
                while (secOpcion != 6)
                {
                    system("cls");//limpio la consola
                    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
                    cout<<"1. p0 = -3"<<endl;
                    cout<<"2. p0 = -2"<<endl;
                    cout<<"3. p0 = -1"<<endl;
                    cout<<"4. p0 = 0"<<endl;
                    cout<<"5. p0 = 1"<<endl;
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
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -3;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 2:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -2;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 3:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -1;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 4:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 0;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 5:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 6:
                        system("cls");
                        opcion = 0;
                    break;

                    default:
                        system("cls");
                        cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 3:
                while (secOpcion != 6)
                {
                    system("cls");//limpio la consola
                    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
                    cout<<"1. p0 = -3"<<endl;
                    cout<<"2. p0 = -2"<<endl;
                    cout<<"3. p0 = -1"<<endl;
                    cout<<"4. p0 = 0"<<endl;
                    cout<<"5. p0 = 1"<<endl;
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
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        TOL = pow(10, -20);
                        i = 1;
                        p0 = -3;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 2:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -2;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 3:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -1;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 4:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 0;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 5:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(p0, 3)) -2*(pow(p0, 2))  - 5 );
                            dfp0 = (  3*(pow(p0, 2))  -  4*p0  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 6:
                        system("cls");
                        opcion = 0;
                        TOL = pow(10, -15);
                    break;
                    default:
                        system("cls");
                        cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 4:
                while (secOpcion != 2)
                {
                    system("cls");//limpio la consola
                    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
                    cout<<"1. p0 = -6.5"<<endl;
                    cout<<"2. Regresar"<<endl;


                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)
                    {
                    case 1:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -6.5;
                        while (i <= IT)
                        {
                            fp0 = (  (pow(2, p0)) -6*(cos(p0))  );
                            dfp0 = (  6*sin(p0)  +   log10(2)*(pow(2, p0))  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 2:
                        system("cls");
                        opcion = 0;
                    break;
                    default:
                        system("cls");
                        cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 5:
                while (secOpcion != 4)
                {
                    system("cls");//limpio la consola
                    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
                    cout<<"1. p0 = -1"<<endl;
                    cout<<"2. p0 = 0"<<endl;
                    cout<<"3. p0 = 1"<<endl;
                    cout<<"4. Regresar"<<endl;


                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)
                    {
                    case 1:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = -1;
                        fp0 = (  230*(pow(p0, 4))   +  18*(pow(p0, 3))  +  9*(pow(p0, 2))  -  221*p0  -  9 );
                        dfp0 = (  920*(pow(p0, 3))  +  54*(pow(p0, 2))  +  18*p0  -221  );
                        while (i <= IT)
                        {
                            fp0 = (  230*(pow(p0, 4))   +  18*(pow(p0, 3))  +  9*(pow(p0, 2))  -  221*p0  -  9 );
                            dfp0 = (  920*(pow(p0, 3))  +  54*(pow(p0, 2))  +  18*p0  -221  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 2:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 0;
                        while (i <= IT)
                        {
                            fp0 = (  230*(pow(p0, 4))   +  18*(pow(p0, 3))  +  9*(pow(p0, 2))  -  221*p0  -  9 );
                            dfp0 = (  920*(pow(p0, 3))  +  54*(pow(p0, 2))  +  18*p0  -221  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 3:
                        system("cls");//limpio la consola

			            cabezaTabla();//llamo al proceso cabezaTabla(), mandando ningun valor dentro de los parentesis ya que no lo necesito, que solo pinta la cabezera de la tabla en la consola.

                        i = 1;
                        p0 = 1;
                        while (i <= IT)
                        {
                            fp0 = (  230*(pow(p0, 4))   +  18*(pow(p0, 3))  +  9*(pow(p0, 2))  -  221*p0  -  9 );
                            dfp0 = (  920*(pow(p0, 3))  +  54*(pow(p0, 2))  +  18*p0  -221  );
                            p = (p0-(fp0/dfp0));
                            errorAbs = abs( (p-p0)/p );
                            if (errorAbs < TOL)
                            {
                                contTabla(i, p0, fp0, p, fp, errorAbs);

                                cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
                                cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
                                cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                                system("pause");
                                break;
                            }
                            contTabla(i, p0, fp0, p, fp, errorAbs);
                            i = i+1;
                            p0 = p;
                        }
                        cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
					    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
					    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
                            
                        i = 1;
                        system("pause");
                    break;
                    case 4:
                        system("cls");
                        opcion = 0;
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
        secOpcion = 0;
    }
        

	return 0;//como es una funcion de tipo int debe en el final del mismo retornar un valor, en este caso lo deje default en 0
}