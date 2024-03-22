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

void subMenu1(){
	system("cls");//limpio la consola
    cout<<"Eliga los valores con los que desea aproximar una raiz."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"1. X0 = -13, x1 = -12.5, x2 = -12."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"2. X0 = -7, x1 = -6.5, x2 = -6."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"3. X0 = -1, x1 = -0.5, x2 = 0."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"4. X0 = 1, x1 = 1.5, x2 = 2."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"5. X0 = 2, x1 = 2.5, x2 = 3."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"6. Regresar."<<endl;
}

void subMenu2(){
	system("cls");//limpio la consola
    cout<<"Eliga los valores con los que desea aproximar una raiz."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"1. X0 = -2, x1 = -1.5, x2 = -1."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"2. X0 = -1, x1 = -0.5, x2 = 0."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"3. X0 = 1, x1 = 1.5, x2 = 2."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"4. Regresar."<<endl;
}

void subMenu3(){
	system("cls");//limpio la consola
    cout<<"Eliga los valores con los que desea aproximar una raiz."<<endl;
    cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
	cout<<"1. X0 = -1.5, x1 = -1, x2 = -0.5."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"2. X0 = -0.00001, x1 = 0, x2 = 0.00001."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"3. X0 = 0.5, x1 = 1, x2 = 1.5."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"4. X0 = 8, x1 = 8.5, x2 = 9."<<endl;
	cout<< "" << endl;//imprimo en la consola todo el menu, con saltos de linea para que se vea bonito.
    cout<<"5. Regresar."<<endl;
}

void cabezaTabla(){//creo un proceso de tipo vacio, ya que no necesito que me de una respuesta como una funcion, sino que realize una porcion de codigo, enviandole a la propia funcion ningun parametro, ya que solo pintara la consola.
	system("cls");//codigo del cmd para limpiar la consola 
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;//cout se utiliza para imprimir en consola el contenido dentro de los parentesis.
	cout<<"Iteracion          Numero p                f(p)               Error Absoluto     "<< endl;//<< se puede usar para concatenar texto a desplegar, endl es una intruccion de salto de linea.
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
}

void contTabla(int ite, float nP, float nFp, float errAbs){//en este proceso si envio parametros para la correcta colocacion de los datos, pero igualmente es vacio para que se ejecute nada mas.
	string espacio = "    ";
	if(ite<=9){//un condicional if, que indica que si se cumple ite menor o igual a 9 realizara el contenido dentro del mismo, solo corre un espacio el codigo dependiendo si las iteraciones son de 1 o 2 digitos, ya que si no se veran desfazadas.
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<" "<<ite<<"           "<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;//fixed<<setprecision(11) lo utilizo para dejar los parametros con 11 decimales
	}
	if(ite>9){//Este condicional es para todos los datos despues de la iteracion 9 ya que todo el contenido de la fila despues de la iteracion se debe correr un espacio a la izquierda para que no se vea desfazado.
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl;
		cout<<""<<ite<<"           "<<fixed<<setprecision(15)<<nP<<espacio<<fixed<<setprecision(15)<<nFp<<espacio<<fixed<<setprecision(15)<<errAbs<<endl;
	}
}

void mensajeExito(int i, float p, float fp){// creo un proceso vacio solo para mostrar el resultado correcto del metodo
	cout<<"Proceso finalizado exitosamente en la iteracion: "<< i << endl;
    cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
    cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;
    system("pause");
}

void mensajeFracaso(int i, float p, float fp){// creo un proceso vacio solo para mostrar el resultado fallido del metodo
	cout<<"El metodo fracaso o procedimiento terminado sin exito en la iteracion: "<< i << endl;
	cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
	cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;                          
}

void mensajeParada(int i, float p, float fp){
	cout<<"El metodo paro abruptamente en la iteracion: "<< i << endl;
	cout<<"La solucion aproximada es p: "<<fixed<<setprecision(15)<< p << endl;//muestro el resultado usando fixed<<setprecision(15) para que el resultado me lo mustre con 15 decimales de presicion.
	cout<<"Con f(p): "<<fixed<<setprecision(15)<< fp << endl;                          
}

bool pruebaCeroOk(float prueba){//utilizo un metodo de tipo bool solamente para probar si el numero que deseo es igual a cero, sino retornara true de que todo esta bien
	if(prueba == 0){
		return false;
	}
	return true;
}

bool pruebaNegativoOk(float prueba){//utilizo un metodo de tipo bool solamente para probar si el numero que deseo es negativo, sino retornara true de que todo esta bien
	if( prueba < 0){
		return false;
	}
	return true;
}

float calculoFuncion1(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
	return pow(x, 5) + 11 * pow(x, 4) - 21 * pow(x, 3) - 10 * pow(x, 2) - 21 * x - 5;//retorno unicamente el calculo en tipo flotante
}

float calculoFuncion2(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
	return pow(x, 4) +  pow(x, 3) + 3 * pow(x, 2) + 2 *  x + 2;//retorno unicamente el calculo en tipo flotante
}

float calculoFuncion3(float x){//utilizo un metodo float para calcular la funcion y poder copiar el calculo mas facilmente cambiando de variable
	return pow(x, 3) - 9 * pow(x, 2) + 12;//retorno unicamente el calculo en tipo flotante
}

int main(){//creo la funcion prinipal como int para que al final returne 0 y no tenga que declarar mas procesos para ejecutarlo
	int IT = 100, i = 3, opcion, secOpcion;//creo mis variable de tipo entero
	float p, fp, x0, x1, x2, TOL = (pow(10, -10)), E, h, h1, h2, s1, s2, d, b, D, erroAbs, fx0, fx1, fx2, ayudante1, ayudante2;//creo mis variables de tipo float, que pueden contener muchos decimales

	while (opcion != 4)//creo un bucle while que se puede leer mientras que opcion sea distinto de 4, realizara lo siguiente, este bucle me permite mantenerme en el primer menu del programa
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
		case 1://en el caso de devolver el numero 1 ejecuta lo siguiente

			while (secOpcion != 6)//creo otro while, este se ejecutara mientras la variable secOpcion sea distinta de 6
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
				case 1://en caso de que haya sido el numero 1
					system("cls");//utilizo esta linea para limpiar lo que se mostro anteriormente en consola
					p = 0, fp = 0, erroAbs = 0;//igualo mis variable de despliegue principales para que en caso de ser una raiz imaginaria en el primer calculo no venga con valores residuales estas variables
					cabezaTabla();//mando a llamar al proceso para que me imprima la cabeza de la tabla, esta solo se debe de imprimir una vez, por eso esta fuera de bucles de calculo

					x0 = -12;//igualo mi  primer valor al valor solicitado
					x1 = -12.5;//igualo mi segundo valor al valor solicitado
					x2 = -13;//igualo mi tercer valor al valor solicitado
					h1 = x1 - x0;//igualo h1 a su calculo correspondiente apoyandome de las variables anteriores
					h2 = x2 - x1;//igualo h2 a su calculo correspondiente apoyandome de las variables anteriores
					
					fx0 =   calculoFuncion1(x0);//igualo mi funcion valuada en el valor de x0 al metodo de funcion1 para que lo calcule
					fx1 =   calculoFuncion1(x1);//igualo mi funcion valuada en el valor de x1 al metodo de funcion1 para que lo calcule
					fx2 =   calculoFuncion1(x2);//igualo mi funcion valuada en el valor de x2 al metodo de funcion1 para que lo calcule
					if(	pruebaCeroOk(h1) == false ){//hago mi primer prueva, si h1 es cero entonces se esta tratando de realiza una divicion entre cero y el programa debe parar antes de realizarla
						contTabla(i, p, fp, erroAbs);//despliego los valores que llevo hasta ese momento
						cout<<endl;//imprimo un salto de linea
						cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
						cout<<"h1 primera apa: "<<h1<<endl;//imprimio la referencia de donde es que se genero el valor indeterminado
						mensajeParada(i, p, fp);//llamo al metodo mensajeParada para que me despliegue un mensaje estandar de parada
						system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
						break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
					}
					if( pruebaCeroOk(h2) == false){//hago mi primer prueva, si h2 es cero entonces se esta tratando de realiza una divicion entre cero y el programa debe parar antes de realizarla
						contTabla(i, p, fp, erroAbs);//despliego los valores que llevo hasta ese momento
						cout<<endl;//imprimo un salto de linea
						cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
						cout<<"h2 primera apa: "<<h2<<endl;//imprimio la referencia de donde es que se genero el valor indeterminado
						mensajeParada(i, p, fp);//llamo al metodo mensajeParada para que me despliegue un mensaje estandar de parada
						system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
						break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
					}
					s1 =   (fx1 - fx0) / h1  ;//calculo s1
					s2 =   (fx2 - fx1) / h2  ;//calculo s2
					d =   (s2 - s1) / (h2 + h1)  ;//calculo d
					while (i <= IT)//comienzan las iteraciones en 3
					{
						b = s2 + h2 * d;//calculo b
						D =  pow(b, 2) - 4 * fx2 * d  ;//calculo D sin sacar raiz, para poder determinar si sera una raiz imaginaria
						if( pruebaNegativoOk(D) == false){//comprobandolo con el metod y un if
							contTabla(i, p, fp, erroAbs);//de ser imaginaria imprimo los valores que llevo hasta el momento
							cout<<endl;//imprimo un salto de linea
							cout<<"La raiz es imaginaria."<<endl;//imprimo el comentario que la raiz es imaginaria para poder diferenciarla
							mensajeParada(i, p, fp);//llamo al metodo mensajeParada para desplegar el mensaje estandar
							system("pause");//pauso el sistema para que se pueda visualizar bien la data
							break;//utilizo break para que no siga calculando
						}else{//si lo anterior no se cumple entonces
							D = sqrt(D); //igualo D a su raiz
						}
						ayudante1 = abs(  b - D  );//me ayudo con una variable para calcular 
						ayudante2 = abs(  b + D  );//me ayudo con una variable para calcular
						if( ayudante1 < ayudante2){//comparo los valores calculados para igualar E
							E = b + D;//si ayudante1 es menor entonces E es igual a la suma
						}else{
							E = b - D;//sino entonces E es igual a la resta
						}
						if(pruebaCeroOk(E) == false){//hago mi primer prueva, si E es cero entonces se esta tratando de realiza una divicion entre cero y el programa debe parar antes de realizarla
							contTabla(i, p, fp, erroAbs);//despliego los valores que llevo hasta ese momento
							cout<<endl;//imprimo un salto de linea
							cout<<"Error se quizo dividir entre cero."<<endl;//imprimo un mensaje de error estandar
							cout<<"E segunda apa: "<<E<<endl;//imprimio la referencia de donde es que se genero el valor indeterminado
							mensajeParada(i, p, fp);//llamo al metodo mensajeParada para que me despliegue un mensaje estandar de parada
							system("pause");//pauso la consola para que se puedan apreciar los valore que se estan desplegando
							break;//utilizo el break para que no siga calculando los demas valores, ya que seran indeterminados
						}
						h =  (-2 * fx2 ) / E ;//realizo el calculo de h
						p = x2 + h;//ayudandome con las variables anteriores realizo el calculo de p
						fp = calculoFuncion1(p);//utilizo el metodo de calculo de funcion 1 para encontrar el valor de fp
						if( abs(h) < TOL ){//si el valor absoluto de h es menor que la tolerancia entonces 
							mensajeExito(i, p, fp);//despligo un mensaje de exito
							break;//uso break para que no siga calculando
						}
						erroAbs = abs((p - x2) / p);//realizo el calculo de mi error
						contTabla(i, p, fp, erroAbs);//despliego la data que llevo calculada hasta el momento
						//realizo el corrimiento de las variables siempre verificando si alguna se vuelve cero o negativo que deba preocuparme
						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion1(x0);
						fx1 =   calculoFuncion1(x1);
						fx2 =   calculoFuncion1(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;//sumo 1 a la variable i para que mi bucle tenga un fin
					}
					if(i >= 99){//si i es mayor de 99 
						mensajeFracaso(i, p, fp);//despliego el mensaje de fracaso ya que no se encontro una raiz
					}
					i = 3;//igualo la variable i a 3 para poder seguir utilizando el programa en otros sub menus o en este mismo
				break;
				case 2:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -7;
					x1 = -6.5;
					x2 = -6;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion1(x0);
					fx1 =   calculoFuncion1(x1);
					fx2 =   calculoFuncion1(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion1(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion1(x0);
						fx1 =   calculoFuncion1(x1);
						fx2 =   calculoFuncion1(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 3:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -1;
					x1 = -0.5;
					x2 = 0;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion1(x0);
					fx1 =   calculoFuncion1(x1);
					fx2 =   calculoFuncion1(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion1(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion1(x0);
						fx1 =   calculoFuncion1(x1);
						fx2 =   calculoFuncion1(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 4:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = 1.5;
					x1 = 1.25;
					x2 = 1;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion1(x0);
					fx1 =   calculoFuncion1(x1);
					fx2 =   calculoFuncion1(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion1(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion1(x0);
						fx1 =   calculoFuncion1(x1);
						fx2 =   calculoFuncion1(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 5:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = 2;
					x1 = 2.5;
					x2 = 3;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion1(x0);
					fx1 =   calculoFuncion1(x1);
					fx2 =   calculoFuncion1(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion1(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion1(x0);
						fx1 =   calculoFuncion1(x1);
						fx2 =   calculoFuncion1(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				default:
					system("cls");//limpimo la pantalla
					cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
				break;
				}
			}
		break;
		case 2:
			while (secOpcion != 4)
			{
				subMenu2();

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
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -2;
					x1 = -1.5;
					x2 = -1;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion2(x0);
					fx1 =   calculoFuncion2(x1);
					fx2 =   calculoFuncion2(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion2(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion2(x0);
						fx1 =   calculoFuncion2(x1);
						fx2 =   calculoFuncion2(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 2:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -1;
					x1 = -0.5;
					x2 = 0;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion2(x0);
					fx1 =   calculoFuncion2(x1);
					fx2 =   calculoFuncion2(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion2(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion2(x0);
						fx1 =   calculoFuncion2(x1);
						fx2 =   calculoFuncion2(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 3:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = 1;
					x1 = 1.5;
					x2 = 2;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion2(x0);
					fx1 =   calculoFuncion2(x1);
					fx2 =   calculoFuncion2(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion2(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion2(x0);
						fx1 =   calculoFuncion2(x1);
						fx2 =   calculoFuncion2(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				default:
					system("cls");//limpimo la pantalla
					cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
				break;
				}
			}
		break;
		case 3:
			while (secOpcion != 5)
			{
				subMenu3();

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
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -1.5;
					x1 = -1;
					x2 = -0.5;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion3(x0);
					fx1 =   calculoFuncion3(x1);
					fx2 =   calculoFuncion3(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion3(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion3(x0);
						fx1 =   calculoFuncion3(x1);
						fx2 =   calculoFuncion3(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 2:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = -0.00001;
					x1 =  0;
					x2 =  0.0001;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion3(x0);
					fx1 =   calculoFuncion3(x1);
					fx2 =   calculoFuncion3(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion3(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion3(x0);
						fx1 =   calculoFuncion3(x1);
						fx2 =   calculoFuncion3(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 3:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = 0.5;
					x1 =  1;
					x2 =  1.5;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion3(x0);
					fx1 =   calculoFuncion3(x1);
					fx2 =   calculoFuncion3(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion3(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion3(x0);
						fx1 =   calculoFuncion3(x1);
						fx2 =   calculoFuncion3(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				case 4:
					system("cls");
					p = 0, fp = 0, erroAbs = 0;
					cabezaTabla();

					x0 = 8;
					x1 =  8.5;
					x2 =  9;
					h1 = x1 - x0;
					h2 = x2 - x1;
					
					fx0 =   calculoFuncion3(x0);
					fx1 =   calculoFuncion3(x1);
					fx2 =   calculoFuncion3(x2);
					if(	pruebaCeroOk(h1) == false ){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h1 primera apa: "<<h1<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					if( pruebaCeroOk(h2) == false){
						contTabla(i, p, fp, erroAbs);
						cout<<endl;
						cout<<"Error se quizo dividir entre cero."<<endl;
						cout<<"h2 primera apa: "<<h2<<endl;
						mensajeParada(i, p, fp);
						system("pause");
						break;
					}
					s1 =   (fx1 - fx0) / h1  ;
					s2 =   (fx2 - fx1) / h2  ;
					d =   (s2 - s1) / (h2 + h1)  ;
					while (i <= IT)
					{
						b = s2 + h2 * d;
						D =  pow(b, 2) - 4 * fx2 * d  ;
						if( pruebaNegativoOk(D) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"La raiz es imaginaria."<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}else{
							D = sqrt(D); 
						}
						ayudante1 = abs(  b - D  );
						ayudante2 = abs(  b + D  );
						if( ayudante1 < ayudante2){
							E = b + D;
						}else{
							E = b - D;
						}
						if(pruebaCeroOk(E) == false){
							contTabla(i, p, fp, erroAbs);
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"E segunda apa: "<<E<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						h =  (-2 * fx2 ) / E ;
						p = x2 + h;
						fp = calculoFuncion3(p);
						if( abs(h) < TOL ){
							mensajeExito(i, p, fp);
							break;
						}
						erroAbs = abs((p - x2) / p);
						contTabla(i, p, fp, erroAbs);

						x0 = x1;
						x1 = x2;
						x2 = p;
						h1 = (x1 - x0);
						h2 = (x2 - x1);
						fx0 =   calculoFuncion3(x0);
						fx1 =   calculoFuncion3(x1);
						fx2 =   calculoFuncion3(x2);
						if(	pruebaCeroOk(h1) == false ){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h1 segunda apa: "<<h1<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						if( pruebaCeroOk(h2) == false){
							cout<<endl;
							cout<<"Error se quizo dividir entre cero."<<endl;
							cout<<"h2 segunda apa: "<<h2<<endl;
							mensajeParada(i, p, fp);
							system("pause");
							break;
						}
						s1 =   (fx1 - fx0) / h1  ;
						s2 =   (fx2 - fx1) / h2  ;
						d =   (s2 - s1) / (h2 + h1)  ;
						i += 1;
					}
					if(i >= 99){
						mensajeFracaso(i, p, fp);
					}
					i = 3;
				break;
				default:
					system("cls");//limpimo la pantalla
					cout<< "Porfavor ingrese una opcion valida del menu."<< endl;//muestra el mensaje de que debe ingresar una opcion valida
				break;
				}
			}
			
		break;
		case 4:
			cout<<"Saliendo.....";
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