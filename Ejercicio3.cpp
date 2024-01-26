// Ejercicio 3. Elabore una aplicacion haciendo uso de funciones y/o procedimientos que simule el proceso de subir a un piso de un ascensor, donde el numero de piso es ingresado por teclado. Debe ir apareciendo en pantalla los mensajes donde indique el estado en que se encuentra el ascensor. 
#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de Funcion

void mostrarEstadoAscensor(int); //Aca en esta funcion determinare la posicion actual en la que se encuentra el ascensor, por tanto, su prototipo es de tipo entero para indicar el piso.
void abrirPuertas(); // En esta funcion utilizare un mensaje que indique cuando las puertas del ascensor se abren.
void cerrarPuertas(); // Tambien necesitare otra funcion que cierre las puertas del ascensor.
void solicitarPisoDestino(); //En esta funcion le pedire al usuario que indique el piso del destino.
void ascensorSubiendo(int, int); // Con esta funcion realizare la tarea de indicar si el ascensor va en ascenso, es decir, si va subiendo.
void ascensorBajando(int, int); // Ahora necesitare una funcion que indique si va bajando, es decir, en descenso.
//Todas las funciones son de tipo void porque solo necesito mostrar el mensaje respectivo de los pisos, por tanto, no requiere retornar una operacion matematica sino un mensaje por pantalla.

//Funcion Principal
int main(){

    int pisoActual, pisoDestino; //Declaro dos variables tipo entero para almacenar el piso actual que indique el usuario y el piso del destino.

    cout<<"Ingrese el piso actual del ascensor: "; //Solicito el piso actual.
    cin>>pisoActual; //Lo guardo en su respectiva variable.

    abrirPuertas(); //Llamo a la funcion abrirPuertas para mostrar en pantalla que se abrieron las puertas del ascensor.
    cerrarPuertas(); //Ahora llamo a la otra funcion cerrarPuertas para mostrar en pantalla el mensaje de que se han cerrado las puertas.

    solicitarPisoDestino(); // Ahora si pido al usuario el piso del destino deseado.
    cin >> pisoDestino; // Lo guardo en su variable.

    if (pisoDestino > pisoActual) { //Aca necesitamos un condicional para determinar si el ascensor mostrara un mensaje en pantalla si va subiendo o bajando.
        ascensorSubiendo(pisoActual, pisoDestino); //Si el piso del destino es mayor al piso actual, entonces llamamos a la funcion ascensorSubiendo, para que muestre el conteo de los pisos de manera ascendente.
    } else if (pisoDestino < pisoActual) {
        ascensorBajando(pisoActual, pisoDestino); //Pero si el piso del destino es menor que el piso actual, entonces llamamos a la otra funcion llamada ascensorBajando que muestre un conteo de los pisos de manera descendente.
    }

    mostrarEstadoAscensor(pisoDestino); //Una vez llegado al piso del destino, llamamos la funcion mostrarEstadoAscensor que mostrara por pantalla un mensaje que indique el piso en el que ahora se encuentra el usuario.
    abrirPuertas(); //Llamamos nuevamente la funcion de abrir puertas.
    cerrarPuertas(); //Llamamos ahora nuevamente la funcion de cerrar puertas.

    return 0; //Fin del Programa.
}

//Declaracion de Funcion

void mostrarEstadoAscensor(int piso) { //En la declaracion de esta funcion arrojamos el mensaje del piso en el que se encuentra el ascensor, es decir, como primera posicion.
    cout<<"El ascensor se encuentra en el piso "<<piso<<endl; 
}
void abrirPuertas() {
    cout<<"*Se han abierto las puertas del ascensor*"<<endl; //Aca declaramos la funcion y mostramos el mensaje de abrir puertas.
}
void cerrarPuertas() {
    cout<<"*Se han cerrado las puertas del ascensor*"<<endl; //En esta declaramos la otra funcion y mostramos el mensaje de que se han cerrado las puertas.
}
void solicitarPisoDestino() { //Aca en esta funcion le pedimos al usuario que indique el piso al que desea ir, sin embargo, la llamamos y la guardamos en la variable dispuesta en la funcion principal main.
    cout<<"Ingrese el piso al que desea ir: ";
}
void ascensorSubiendo(int pisoActual, int pisoDestino) { //Aca en esta funcion declaramos si el ascensor va en ascenso, pero para esto necesitamos dos enteros, uno que indique el piso actual y el otro del destino.
    cout<<"*El ascensor va subiendo*"<<endl; //Aca mostrara el mensaje de que va subiendo
    for (int i = pisoActual; i <= pisoDestino; i++) { //Si se llama la funcion ascensorSubiendo en el main porque cumple la condicion ya expuesta, se activara un for que realizara el conteo de los pisos que mostrara en pantalla.
        cout<<"--Piso "<<(i)<<endl; //Aca mostramos el conteo en pantalla de los pisos en los que ira subiendo el ascensor.
    }
    cout<<"Ha llegado al piso deseado! "; //Una vez terminado el conteo, arrojo un mensaje en el que le indique al usuario que ha llegado al piso de su destino.
}
void ascensorBajando(int pisoActual, int pisoDestino) { //En esta otra funcion realizo lo mismo que la anterior, nuevamente le doy como parametros dos enteros que determinen cual es el piso actual y cual es el piso del destino. Luego, bajo la condicional de si el piso del destino es menor que el actual, muestro el mensaje de que el ascensor va bajando y con el ciclo for realizo el conteo de los pisos en descenso mostrados en pantalla.
    cout<<"*El ascensor va bajando*"<< endl;
    for (int i = pisoActual; i >= pisoDestino; i--) {
        cout<<"--Piso "<<(i)<<endl; //Muestro el mensaje de los pisos en descenso.
    }
    cout<<"Ha llegado al piso deseado! "; //Nuevamente arrojo el mensaje de que el usuario ha llegado a su piso deseado.
}

//Alumno: Valeria Sivira.