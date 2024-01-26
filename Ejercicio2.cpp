//Ejercicio 2. Crea una aplicacion que nos genere una cantidad de numeros enteros aleatorios que nosotros le pasaremos por teclado. Crea un metodo donde nosotros le pasaremos como parametros entre que numeros queremos que los genere, podemos pedirlas por teclado antes de generar los numeros. Este metodo devolvera un numero entero aleatorio. Muestra estos numeros por pantalla.
#include <iostream>
#include <stdlib.h> // Agrego la libreria stdlib.h para que me permita hacer uso de la funcion rand().
#include <time.h> //Tambien agrego la libreria time.h para hacer uso de la funcion time(NULL) y generar los numeros aleatorios.
using namespace std;

//Prototipos de Funcion

int GenerarNumsAleatorios(int,int); // Creo un Prototipo de funcion con dos parametros enteros, uno para el limite inferior y otro para el superior.

// Funcion Principal
int main(){
    int num_aleatorio, cantidad, limite_inf, limite_sup; //Declaro las variables para almacenar los numeros aleatorios, otra para la cantidad de numeros a generar y otras dos para tomar del usuario los limites inferior y superior.

    cout<<"Por favor ingrese la cantidad de numeros aleatorios que desea generar: "; cin>>cantidad;
    cout<<"Ingrese el limite inferior del rango de numeros: "; cin>>limite_inf;
    cout<<"Ahora ingrese el limite superior del rango de numeros: "; cin>>limite_sup;
    cout<<endl; //Pido al usuario cada uno de los datos antes mencionados y los guardo en su respectiva variable.

    srand(time(NULL)); //Utilizo la declaracion srand(time(NULL)) para hacer uso de la funcion rand y me permita generar los numeros aleatorios.

    for (int i = 0; i < cantidad; i++){ //Creo un ciclo for para mostrar los numeros en pantalla.
        num_aleatorio = GenerarNumsAleatorios(limite_inf, limite_sup); //Aca llamo a la funcion GenerarNumsAleatorios y agrego como parametros el limite inferior y limite superior que se obtuvo del usuario.
        cout<<i+1<<". Numero generado: "<<num_aleatorio<<endl; //Los muestro en pantalla.
    }
    cout<<endl;

    system("pause");
    return 0; //Fin del programa.
}
// Declaracion de Funcion
int GenerarNumsAleatorios(int limite_inf, int limite_sup){ //En la declaracion de Funcion agrego los parametros de tipo entero para definir los limites de numeros aleatorios. 
    int num = limite_inf + rand() % (limite_sup - limite_inf + 1); // Este es el metodo o la funcion que se neceita para generar los numeros aleatorios donde utilizo las variables limite inferior y limite superior para indicar el rango de numeros que se van a generar por la funcion.
   return num; //retorno la variable num donde almacene la funcion de generar numeros.
}

//Alumno: Valeria Sivira.