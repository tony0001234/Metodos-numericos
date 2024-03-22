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

bool pruebaCeroOk(float prueba){
	if(prueba == 0){
		return false;
	}
	return true;
}

bool pruebaNegativoOk(float prueba){
	if( prueba < 0){
		return false;
	}
	return true;
}

float calculoFuncion1(float x){
	return pow(x, 5) + 11 * pow(x, 4) - 21 * pow(x, 3) - 10 * pow(x, 2) - 21 * x - 5;
}

float calculoFuncion2(float x){
	return pow(x, 4) +  pow(x, 3) + 3 * pow(x, 2) + 2 *  x + 2;
}

float calculoFuncion3(float x){
	return pow(x, 3) - 9 * pow(x, 2) + 12;
}

int main(){
	int IT = 100, i = 3, opcion, secOpcion;
	float p, fp, x0, x1, x2, TOL = (pow(10, -10)), E, h, h1, h2, s1, s2, d, b, D, erroAbs, fx0, fx1, fx2, ayudante1, ayudante2;

	while (opcion != 4)
	{
		menu();

		if(  (cin>>opcion).fail()  ){
			system("cls");
			cin.clear();
			fflush(stdin);
			opcion = 99;
		}

		switch (opcion)
		{
		case 1:

			while (secOpcion != 6)
			{
				subMenu1();

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

					x0 = -12;
					x1 = -12.5;
					x2 = -13;
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