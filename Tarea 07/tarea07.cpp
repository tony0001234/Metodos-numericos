#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

void menu(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"Ingrese la opcion que desea ejecutar:" << endl;//endl genera al final de lo impreso anterior un salto de linea como un enter.

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"1) f(x) = x^3  -2x^2  -5  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"2) f(x) = x  -cos(x)  = 0" << endl;

	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"3) f(x) = x^3  +3x^2  -1  = 0"<< endl;
    
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"4) f(x) = x  -0.8  -0.2sen(x)  = 0"<< endl;

    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

	cout<<"5) Salir.";
}

void subMenu1(){
	system("cls");//limpio la consola
    
    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	
    cout<<"1. [2, 3]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
        
    cout<<"2. Regresar."<<endl;
}

void subMenu2(){
	system("cls");//limpio la consola
    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	
    cout<<"1. [0, 1]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
        
    cout<<"2. Regresar."<<endl;
}

void subMenu3(){
	system("cls");//limpio la consola
    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	
    cout<<"1. [-3, -2.5]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    
    cout<<"2. [-1, -0.5]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    
    cout<<"3. [0.5, 1]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.

    cout<<"4. Regresar."<<endl;
}

void subMenu4(){
	system("cls");//limpio la consola
    cout<<"Eliga el valor con el que desea aproximar una solucion."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	
    cout<<"1. [0.5, 1]"<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
        
    cout<<"2. Regresar."<<endl;
}

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion          Numero q0            Numero q1            Numero p0              Numero p1           Numero P                f(p)             Error Absoluto     "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
}

void contTabla(int ite, float nQ0, float nQ1, float nP0, float nP1, float nP, float nFp, float errAbs){//en este proceso si envio parametros para la correcta colocacion de los datos, pero igualmente es vacio para que se ejecute nada mas.
	string espacio = "    ";
	if(ite<=9){//un condicional if, que indica que si se cumple ite menor o igual a 9 realizara el contenido dentro del mismo, solo corre un espacio el codigo dependiendo si las iteraciones son de 1 o 2 digitos, ya que si no se veran desfazadas.
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<" "<<ite<<"           "<<fixed<<setprecision(15)<<nQ0<<espacio<<fixed<<setprecision(15)<<nQ1<<espacio<<fixed<<setprecision(15)<<nP0<<espacio<<fixed<<setprecision(15)<<nP1<<espacio<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;//fixed<<setprecision(11) lo utilizo para dejar los parametros con 11 decimales
	}
	if(ite>9){//Este condicional es para todos los datos despues de la iteracion 9 ya que todo el contenido de la fila despues de la iteracion se debe correr un espacio a la izquierda para que no se vea desfazado.
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<""<<ite<<"           "<<fixed<<setprecision(15)<<nQ0<<espacio<<fixed<<setprecision(15)<<nQ1<<espacio<<fixed<<setprecision(15)<<nP0<<espacio<<fixed<<setprecision(15)<<nP1<<espacio<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;
	}
}

void mensajeExito(int i, float p, float fp){// creo un proceso vacio solo para mostrar el resultado correcto del metodo
	cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;//despliego un mensaje seguido del valor con 15 decimales de fp 
    system("pause");//pauso el sistema para una mejor apreciacion del contenido
}

void mensajeFracaso(int i, float p, float fp){// creo un proceso vacio solo para mostrar el resultado fallido del metodo
	cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
	cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
	cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;//despliego un mensaje seguido del valor con 15 decimales de fp 
    system("pause");//pauso el sistema para una mejor apreciacion del contenido
}

void mensajeParada(int i, float p, float fp){// creo un proceso vacio solo para mostrar si el metodo debe tener una parada abrupta
	cout<<"El metodo paro abruptamente en la iteracion: "<< i << endl;
	cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
	cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;     //despliego un mensaje seguido del valor con 15 decimales de fp 
    system("pause");//pauso el sistema para una mejor apreciacion del contenido          
}


float calcularFuncion1(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
    return pow(x, 3) - 2 * pow(x, 2) - 5;//retorno unicamente el calculo en tipo flotante
}

float calcularFuncion2(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
    return x - cos(x);//retorno unicamente el calculo en tipo flotante
}

float calcularFuncion3(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
    return pow(x, 3) + 3 * pow(x, 2) - 1;//retorno unicamente el calculo en tipo flotante
}

float calcularFuncion4(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
    return x - 0.8 - 0.2 * sin(x);//retorno unicamente el calculo en tipo flotante
}

int main(){//creo la funcion prinipal como int para que al final returne 0 y no tenga que declarar mas procesos para ejecutarlo
    int IT = 100, i = 2, opcion, secOpcion;//creo mis variable de tipo entero
    float ayudante1 = 0, ayudante2 = 0, q0 = 0, q1 = 0, p0 = 0, p1 = 0, p = 0, fp = 0, errorC = 1, TOL = pow(10, -15);//creo mis variables de tipo float, que pueden contener muchos decimales

    while (opcion != 5)//creo un bucle while que se puede leer mientras que opcion sea distinto de 5, realizara lo siguiente, este bucle me permite mantenerme en el primer menu del programa
    {
		menu();//llamo al proceso menu, que solo me imprime todas las opciones del menu en consola

        if( (cin>>opcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
            system("cls");//de ser asi, limpio la consola 
            cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
            fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
            opcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
        }

        switch (opcion)//comienzo a validar la opcion que el usuario eligio con un switch y la variabl eopcion
		{
            case 1:
                while (secOpcion != 2)//creo un bucle while que se puede leer mientras que opcion sea distinto de 2, realizara lo siguiente, este bucle me permite mantenerme en el primer menu del programa
                {
				    subMenu1();//Mando a llamar al proceso subMenu1 para que me imprima en consola las opciones con las que cuento en este sub menu

                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)//comienzo a validar que numero digito para la opcion
                    {
                    case 1:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();//mando a llamar al proceso para que me imprima la cabeza de la tabla, esta solo se debe de imprimir una vez, por eso esta fuera de bucles de calculo

                        p0 = 2;//igualo mi  primer valor al valor solicitado
                        p1 = 3;//igualo mi segundo valor al valor solicitado
                        q0 = calcularFuncion1(p0);//igualo q0 a la funcion valuada en p0
                        q1 = calcularFuncion1(p1);//igualo q1 a la funcion valuada en q1
                        while (i <= IT)//creo un bucle while que se puede leer mientras que opcion sea distinto de i sea menos o igual a IT, realizara lo siguiente, este bucle me permite mantenerme en el primer menu del programa
                        {
                            ayudante1 = q1-q0;//utilizo mi variable ayudante para calcular una parte de calculos largos
                            ayudante2 = p1-p0;//utilizo mi variable ayudante para calcular una parte de calculos largos
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );//Calculo el punto p ayudandome con mis variables ayudante
                            fp = calcularFuncion1(p);//calculo fp mandando el valor p a la funcion 
                            errorC = abs(p-p1);//calculo mi error y lo igualo a mi variable error
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego toda la informacione en la tabla
                            if(errorC < TOL){//compruebo si el error es menor que la tolerancia de ser asi
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;//sumo 1 a la variable i para incrementar las iteraciones
                            if(fp * q1 < 0){//si fp * q1 es negativo
                                p0 = p1;//igualo p0 al valor de p1
                                q0 = q1;//igualo q0 al valor de q1
                            }
                            p1 = p;//igualo p1 a p
                            q1 = fp;//igualo q1 a fp para seguir calculando la siguiente iteracion
                        }
                        if(i >= IT){//si i es mayor de IT
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;//Igualo mi variable de iteraciones a 2 nuevamente, para poder volver a calcular
                    break;//termino el caso
                    case 2://en el caso 2 que rompe el bucle
                        system("cls");//limplio la consola 
                        cout<<"Regresando..."<<endl;//despliego regresando ya que si no hago este caso el switch se sigue ejecutando y ejecuta el default
                    break;
                    default:
                        system("cls");//limpimo la pantalla
					    cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 2:
                while (secOpcion != 2)
                {
				    subMenu2();//Mando a llamar al proceso subMenu1 para que me imprima en consola las opciones con las que cuento en este sub menu

                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)//comienzo a validar que numero digito para la opcion
                    {
                    case 1:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();

                        p0 = 0;
                        p1 = 1;
                        q0 = calcularFuncion2(p0);
                        q1 = calcularFuncion2(p1);
                        while (i <= IT)
                        {
                            ayudante1 = q1-q0;
                            ayudante2 = p1-p0;
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );
                            fp = calcularFuncion2(p);
                            errorC = abs(p-p1);
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);
                            if(errorC < TOL){
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;
                            if(fp * q1 < 0){
                                p0 = p1;
                                q0 = q1;
                            }
                            p1 = p;
                            q1 = fp;
                        }
                        if(i >= IT){//si i es mayor de 99 
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;
                    break;
                    case 2:
                        system("cls");
                        cout<<"Regresando..."<<endl;
                    break;
                    default:
                        system("cls");//limpimo la pantalla
					    cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 3:
                while (secOpcion != 4)
                {
				    subMenu3();//Mando a llamar al proceso subMenu1 para que me imprima en consola las opciones con las que cuento en este sub menu

                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)//comienzo a validar que numero digito para la opcion
                    {
                    case 1:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();

                        p0 = -3;
                        p1 = -2.5;
                        q0 = calcularFuncion3(p0);
                        q1 = calcularFuncion3(p1);
                        while (i <= IT)
                        {
                            ayudante1 = q1-q0;
                            ayudante2 = p1-p0;
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );
                            fp = calcularFuncion3(p);
                            errorC = abs(p-p1);
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);
                            if(errorC < TOL){
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;
                            if(fp * q1 < 0){
                                p0 = p1;
                                q0 = q1;
                            }
                            p1 = p;
                            q1 = fp;
                        }
                        if(i >= IT){//si i es mayor de 99 
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;
                    break;
                    case 2:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();

                        p0 = -1;
                        p1 = -0.5;
                        q0 = calcularFuncion3(p0);
                        q1 = calcularFuncion3(p1);
                        while (i <= IT)
                        {
                            ayudante1 = q1-q0;
                            ayudante2 = p1-p0;
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );
                            fp = calcularFuncion3(p);
                            errorC = abs(p-p1);
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);
                            if(errorC < TOL){
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;
                            if(fp * q1 < 0){
                                p0 = p1;
                                q0 = q1;
                            }
                            p1 = p;
                            q1 = fp;
                        }
                        if(i >= IT){//si i es mayor de 99 
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;
                    break;
                    case 3:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();

                        p0 = 0.5;
                        p1 = 1;
                        q0 = calcularFuncion3(p0);
                        q1 = calcularFuncion3(p1);
                        while (i <= IT)
                        {
                            ayudante1 = q1-q0;
                            ayudante2 = p1-p0;
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );
                            fp = calcularFuncion3(p);
                            errorC = abs(p-p1);
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);
                            if(errorC < TOL){
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;
                            if(fp * q1 < 0){
                                p0 = p1;
                                q0 = q1;
                            }
                            p1 = p;
                            q1 = fp;
                        }
                        if(i >= IT){//si i es mayor de 99 
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;
                    break;
                    case 4:
                        system("cls");
                        cout<<"Regresando..."<<endl;
                    break;
                    default:
                        system("cls");//limpimo la pantalla
					    cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 4:
                while (secOpcion != 2)
                {
				    subMenu4();//Mando a llamar al proceso subMenu1 para que me imprima en consola las opciones con las que cuento en este sub menu

                    if( (cin>>secOpcion).fail() ){//compurebo si la entrada de datos falla, ya que el usuario puede ingresar un dato no valido, como una letra.
                        system("cls");//de ser asi, limpio la consola 
                        cin.clear();//reseteo los flags(uno o mas bits que almacenan valor binario o codigo)
                        fflush(stdin);//limpio el buffer(espacio de memoria para almacenar datos antes de procesarlos) de entrada
                        secOpcion = 99;//igual la variable opcion a 99 para que se vaya al caso default(por defecto) de mi condicional switch
                    }

                    switch (secOpcion)//comienzo a validar que numero digito para la opcion
                    {
                    case 1:
                        system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
                        
                        cabezaTabla();

                        p0 = 0.5;
                        p1 = 1;
                        q0 = calcularFuncion4(p0);
                        q1 = calcularFuncion4(p1);
                        while (i <= IT)
                        {
                            ayudante1 = q1-q0;
                            ayudante2 = p1-p0;
                            if(ayudante1 == 0){
                                contTabla(i, q0, q1, p0, p1, p, fp, errorC);//despliego los valores que llevo hasta ese momento
                                cout<<endl;//imprimo un salto de linea
                                cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
                                mensajeParada(i, p, fp);
                                system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
                                break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
                            }
                            p = p1 - (  ( q1 * ayudante2 )/( ayudante1 )  );
                            fp = calcularFuncion4(p);
                            errorC = abs(p-p1);
                            contTabla(i, q0, q1, p0, p1, p, fp, errorC);
                            if(errorC < TOL){
                                mensajeExito(i, p, fp);//despligo un mensaje de exito
							    break;//uso break
                            }
                            i += 1;
                            if(fp * q1 < 0){
                                p0 = p1;
                                q0 = q1;
                            }
                            p1 = p;
                            q1 = fp;
                        }
                        if(i >= IT){//si i es mayor de 99 
                            mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
                        }
                        i = 2;
                    break;
                    case 2:
                        system("cls");
                        cout<<"Regresando..."<<endl;
                    break;
                    default:
                        system("cls");//limpimo la pantalla
					    cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
                    break;
                    }
                }
            break;
            case 5:
                system("cls");
                cout<<"Saliendo...."<<endl;
            break;
            default:
                system("cls");
			    cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
            break;
            }
    secOpcion = 0;//igualo la variable secOpcion a cero para poderseguir utilzando el programa desde este submenu
    }
    return 0;
}