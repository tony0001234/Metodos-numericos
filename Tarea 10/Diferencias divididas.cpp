#include <iostream>
#include <vector>

using namespace std;//importa todo el espacio de nombres std al codigo actual, se utiliza mayormente para utilizar el prefijo std::

// Función para calcular las diferencias divididas
vector<vector<double>> diferencias_divididas(const vector<double>& x, const vector<double>& y) {
    int n = x.size();
    vector<vector<double>> tabla(n, vector<double>(n, 0.0));

    // Copiar y a la primera columna de la tabla
    for (int i = 0; i < n; ++i) {
        tabla[i][0] = y[i];
    }

    // Calcular las diferencias divididas
    for (int j = 1; j < n; ++j) {
        for (int i = 0; i < n - j; ++i) {
            tabla[i][j] = (tabla[i+1][j-1] - tabla[i][j-1]) / (x[i+j] - x[i]);
        }
    }

    return tabla;
}

// Función para realizar la interpolación de Newton
double newton_interpolacion(const vector<double>& x, const vector<double>& y, double valor) {
    vector<vector<double>> tabla = diferencias_divididas(x, y);
    int n = x.size();
    double interpolacion = tabla[0][0];

    cout << "Valor A0"<<": "<<tabla[0][0]<<endl;

    for (int i = 1; i < n; ++i) {
        double termino = tabla[0][i];
        cout << "Valor A"<<i<<": "<<termino<<endl;
        for (int j = 0; j < i; ++j) {
            termino *= (valor - x[j]);
        }
        interpolacion += termino;
    }

    return interpolacion;
}

int main() {
    int n = 0;
    // Puntos conocidos para la interpolación
    cout<<"ingrese el numero de filas: "<<endl;//despliego un mensaje para pedir el valor de filas, utilizando n
    try//abro un try and catch para prevenir ingreso de datos erroneos
    {
        cin>>n;//ingreso el valor del usuairio en la variable n
    }
    catch(const invalid_argument& e)//de aber un error la aplicacion no calculara nada y se cerrara
    {
        cout << e.what() << '\n';
    }
    vector<double> x(n);
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
                    cout << e.what() << '\n';
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
                    cout << e.what() << '\n';
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
        cout << e.what() << '\n';
    }


    system("cls");
    // Realizar la interpolación y mostrar el resultado
    double resultado = newton_interpolacion(x, y, valor_a_interpolar);
    cout << "El valor interpolado en " << valor_a_interpolar << " es aproximadamente: " << resultado << std::endl;
    system("pause");//utilizo sistem para pausar el programa
    return 0;
}
