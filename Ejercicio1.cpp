// Ejercicio 1. Crea una aplicacion que nos calcule el area de un circulo, cuadrado o triangulo. Pediremos que figura queremos calcular su area y segun lo introducido pedira los valores necesarios para calcular el area. Crea un metodo por cada figura para calcular cada area, este devolvera un numero real. Muestra el resultado por pantalla.

#include <iostream>
#include <conio.h>
#include <math.h> //Agrego la biblioteca math.h para realizar operaciones matematicas.
using namespace std;

//Prototipos de Funcion
const double PI = 3.14; // Declaro la constante llamada PI para que su valor permanezca sin cambiar y la coloco fuera de las funciones porque es una constante que se utilizara de manera global.  
double CalcularAreaCirculo(double); //El prototipo de Funcion que calculara el area del Circulo y tiene como parametro un valor double que sera el radio.
double CalcularAreaTriangulo(double, double); //El prototipo de Funcion que calculara el area del Triangulo y que tiene dos parametros de tipo double: uno para la base y otro para la altura.
double CalcularAreaCuadrado(double); //Por ultimo el prototipo de Funcion que calculara el area del Cuadrado. Tiene como parametro un valor tipo double para el lado del Cuadrado.

//Funcion Principal
int main (){
    int opcion; //Se necesita declarar una variable opcion para ser utilizada en la sentencia Switch.
    double radio, base, altura, lado; // Definimos las variables double que almacenaran los valores dados por el usuario y que respectivamente se usaran en la Funcion necesaria.

    cout<<"\tCalcular el Area"<<endl; //Mostramos en Pantalla las opciones que tiene el usuario.
    cout<<"\n1. Circulo"<<endl;
    cout<<"2. Triangulo"<<endl;
    cout<<"3. Cuadrado"<<endl;
    cout<<"Por favor ingrese la opcion que desee en numeros (1,2,3): "; cin>>opcion; // Almacenamos la opcion del usario en su respectiva variable.

    switch (opcion){  //Declaramos la sentencia Switch sobre la variable Opcion.
    case 1:
        cout<<"Ingrese el radio que tendra el Circulo: "; cin>>radio; //Guardamos el radio en su variable respectiva para ser utilizada en la Funcion.
        cout<<"El area del Circulo es: "<<CalcularAreaCirculo(radio)<<endl; //Aca llamamos a la Funcion para calcular el area del Circulo y colocamos como parametro el radio que ingreso el usuario.
        break;
    case 2:
        cout<<"Ingrese la base que tendra el Triangulo: "; cin>>base; //Si la persona elige la opcion 2, le pedimos que ingrese un dato para la base y lo guardamos en la variable base.
        cout<<"Ahora ingrese su altura: "; cin>>altura; //Hacemos lo mismo con la altura, se la pedimos al usuario y la guardamos en la variable altura.
        cout<<"El area del Triangulo es: "<<CalcularAreaTriangulo(base,altura)<<endl; //Posterior a eso llamamos a la Funcion CalcularAreaTriangulo y le damos como parametros la base y altura que ingreso el usuario.
        break;
    case 3:
        cout<<"Ingrese el lado del Cuadrado: "; cin>>lado; //Ahora si el usuario ingreso la opcion 3, le pedimos un dato que se almacenara en la variable lado.
        cout<<"El area del Cuadrado es: "<<CalcularAreaCuadrado(lado)<<endl; // Llamamos a la Funcion CalcularAreaCuadrado y como parametro le damos el lado que ingreso el usuario.
        break;
    default:
        cout<<"La opcion elegida no se encuentra en la lista dada. Por favor intente de nuevo."<<endl;
        break; // Agregamos un default por si el usuario coloca una opcion que no estuvo en la lista.
    }

    getch(); 
    return 0; // Fin del programa
}

//Declaracion de Funciones

double CalcularAreaCirculo(double radio){ //Declaro la Funcion CalcularAreaCirculo donde obtendra un parametro double que sera el radio.
    return pow(radio,2) * PI; //Luego retorno la formula dada para obtener el area de un circulo. De tal manera que al obtener los datos necesarios por el usuario, los retorne con la formula definida en la funcion.
}
double CalcularAreaTriangulo(double base, double altura){ //Declaro nuevamente otra Funcion pero ahora CalcularAreaTriangulo donde tendra dos parametros obtenidos por el usuario.
    return (base * altura) / 2; //Retorno la Formula de la funcion para obtener el area del Triangulo.
}
double CalcularAreaCuadrado(double lado){ //Declaro la Funcion 3 CalcularAreaCuadrado donde tendra un unico parametro double que sera el lado que ingrese el usuario.
    return lado * lado; // Retorno la formula de la funcion que determinara el area del Cuadrado.
}

// Alumno: Valeria Sivira.
