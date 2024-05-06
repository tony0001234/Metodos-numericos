#include <iostream>//incluyo la libreria iostream, para poder tener acceso a los dispositivos de entrada y salida
#include <vector>//Es una platilla de clase que proporciona un contenedor de memoria dinamica, puede contener un numero variable de elementos del mismo tipo
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

// Función para calcular la interpolación de Neville
double interpolacion_neville(const std::vector<double>& x, const std::vector<double>& y, double valor) {//creo una funcion tipo double que regresa el valor calculado, pasando los vextores "x" y "y"
    int n = x.size();//creo una variable entera para regresar el numero total de la tabla
    vector<double> columna(n);//creo otro vector con tamaño variable

    for (int j = 0; j < n; ++j) {//fors de calculo del resultado
        columna[j] = y[j];
        for (int i = j - 1; i >= 0; --i) {
            columna[i] = ((valor - x[j]) * columna[i] - (valor - x[i]) * columna[i + 1]) / (x[i] - x[j]);
        }
    }

    return columna[0];//regreso el valor final de los calculados
}

int main() {
    int n = 0;//creo una variable entera n para pedir el numero total de valores en la tabla
    // Puntos conocidos para la interpolación
    cout<<"ingrese el numero de filas: "<<endl;//despliego un mensaje para pedir el valor de filas, utilizando n
    try//abro un try and catch para prevenir ingreso de datos erroneos
    {
        cin>>n;//ingreso el valor del usuairio en la variable n
    }
    catch(const invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
    {
        cout << e.what() << '\n';//despliego en consola que hubo un error en la ejecucion
    }
    vector<double> x(n);//creo 2 vectores con tamaño variable, les paso de una vez su valor de numero de datos
    vector<double> y(n);

    cout<<"Ingrese los valores Xs, Ys"<<endl;//doy contexto de los valores que pedire a continuacion.
    for(int js = 0; js < 2; js++){//comienzo a pedir los valores para rellenar al tabla de valores
        string col;//creo un string col, para desplegar la columna que estoy pidiendo, si es la de x o la de y
        if(js+1 == 1){//con un condicional valido si estamos en la columna 1 o en la columna 2
            col = "X";//si estamos en la columna 1 entonces col es igual a X
            cout<<"Columna " << col << ": "<<endl;//ahora estructuro el mensaje para que se le haga mas falcil al usuiario ingresar los datos
            for(int iS = 0; iS < n; iS++){//comienzo a pedir los valores con for anidados
                cout<<"valor "<<iS+1<<": "<<endl;//despliego un mensaje para el valor de la fila
                try//abro un try and catch para prevenir ingreso de datos erroneos
                {
                    cin>>x[iS];//pido el valor y lo inserto en la posicion de la matriz correspondiente
                }
                catch(const std::invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
                {
                    cout << e.what() << '\n';//despliego en consola que hubo un error en la ejecucion
                }
            }
        }else {
            col = "Y";//sino col es igual a Y
            cout<<"Columna " << col << ": "<<endl;//ahora estructuro el mensaje para que se le haga mas falcil al usuiario ingresar los datos
            for(int iS = 0; iS < n; iS++){//comienzo a pedir los valores con for anidados
                cout<<"valor "<<iS+1<<": "<<endl;//despliego un mensaje para el valor de la fila
                try//abro un try and catch para prevenir ingreso de datos erroneos
                {
                    cin>>y[iS];//pido el valor y lo inserto en la posicion de la matriz correspondiente
                }
                catch(const std::invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
                {
                    cout << e.what() << '\n';//despliego en consola que hubo un error en la ejecucion
                }
            }
        }
    }

    // Valor a interpolar
    double valor_a_interpolar;
    cout<<"ingrese el valor de a interpolar Z: "<<endl;//pido el valor de z
    try///abro un try and catch para prevenir ingreso de datos erroneos
    {
        cin>>valor_a_interpolar;//ingreso el valor del usuario en mi variable puntoZ
    }
    catch(const invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
    {
        cout << e.what() << '\n';//despliego en consola que hubo un error en la ejecucion
    }


    system("cls");//utilizo system para limpiar la consola de la recopilacion de datos
    // Realizar la interpolación y mostrar el resultado
    double resultado = interpolacion_neville(x, y, valor_a_interpolar);//creo una variable resultado y la igualo a mi funcion para iniciar con todos los calculos, mandando los vectores "x", "y" y el valor a interpolar
    cout << "El valor interpolado en " << valor_a_interpolar << " es aproximadamente: " << fixed<<setprecision(15)<<resultado <<endl;//despliego el resultado en consola
    system("pause");//utilizo sistem para pausar el programa
    return 0;
}