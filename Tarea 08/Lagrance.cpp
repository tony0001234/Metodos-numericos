#include <iostream>//biblioteca estandar para operaciones de entrada/salida (input/output stream)
#include <math.h>//archivo de cabecera que contiene funciones matematicas basicas, es una libreria de terminos para uso de operaciones matematicas
#include <iomanip>//biblioteca se usa para ajustar decimales, esta libreria la utilice unicamente para mostrar los 15 decimales de respuesta.
#include <string>

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::


int main(){//creo una funcion vacia o proceso, vacia ya que no quiero que devuelva nada solo se ejecute, el proceso imprimira el menu para que se vea bonito.
    int n = 0, i = 0, j = 0;//declaro mis variables de manejo de cantidad de filas y las de i, j para los calculos
    float puntoZ, v, valor = 0;//declaro mis variables para mostrar los resultados y la de puntoZ para pedir el punto en el que se valida la funcion
    
    cout<<"ingrese el numero de filas: "<<endl;//despliego un mensaje para pedir el valor de filas, utilizando n
    try//abro un try and catch para prevenir ingreso de datos erroneos
    {
        cin>>n;//ingreso el valor del usuairio en la variable n
    }
    catch(const std::invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
    {
        cout << e.what() << '\n';
    }
    
    float valoresXY[n][2];//creo mi matriz con n filas y 2 columnas, vector de n x 2
    cout<<"ingrese el valor de Z: "<<endl;//pido el valor de z
    try///abro un try and catch para prevenir ingreso de datos erroneos
    {
        cin>>puntoZ;//ingreso el valor del usuario en mi variable puntoZ
    }
    catch(const std::invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
    {
        cout << e.what() << '\n';
    }

    cout<<"Ingrese los valores Xs, Ys"<<endl;//doy contexto de los valores que pedire a continuacion.
    for(int js = 0; js < 2; js++){//comienzo a pedir los valores para rellenar al tabla de valores
        string col;//creo un string col, para desplegar la columna que estoy pidiendo, si es la de x o la de y
        if(js+1 == 1){//con un condicional valido si estamos en la columna 1 o en la columna 2
            col = "X";//si estamos en la columna 1 entonces col es igual a X
        }else {
            col = "Y";//sino col es igual a Y
        }
        cout<<"Columna " << col << ": "<<endl;//ahora estructuro el mensaje para que se le haga mas falcil al usuiario ingresar los datos
        for(int iS = 0; iS < n; iS++){//comienzo a pedir los valores con for anidados
            cout<<"valor "<<iS+1<<": "<<endl;//despliego un mensaje para el valor de la fila
            try//abro un try and catch para prevenir ingreso de datos erroneos
            {
                cin>>valoresXY[iS][js];//pido el valor y lo inserto en la posicion de la matriz correspondiente
            }
            catch(const std::invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
            {
                cout << e.what() << '\n';
            }
        }
    }

    for (i = 0; i < n; i++)//cominezo a realizar el calculo del algoritmo con el for de las i
    {
        v = valoresXY[i][1];//igualo v al valor de las y en la posicion i actual
        for (j = 0; j < n; j++)//segundo for con las j
        {
            if(i != j){//si las i es distinta a las j entonces
                v = v * ( (puntoZ - valoresXY[j][0]) / (valoresXY[i][0] - valoresXY[j][0]) );//hago el calculo de v
                cout<<"j: "<<j<<" i: "<<i<<" v: "<<fixed<<setprecision(8)<<v<<endl;//despliego mis resultados con 8 decimales
            }
        }
        
        valor += v;//calculo el valor final
        cout<<" valor: "<<fixed<<setprecision(8)<<valor<<endl;//despliego mi valor final con 8 decimales
        cout<<"---------------------------"<<endl;//separo con guiones los valores de la iteracion actual de los siguientes
    }
    cout<<"el valor final es: "<<valor<<endl;//despliego el valor final calculado
    system("pause");//utilizo sistem para pausar el programa
    return 0;
}