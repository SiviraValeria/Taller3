// Ejercicio 4. En un supermercado se hace un 20% de descuento a los clientes cuya compra supere los 1000 en las areas de frutas, verduras y abarrotes. Cual sera el total que pagara una persona por su compra?, se debe mostrar el nombre del cliente, producto, precio, cantidad, descuento y total a pagar.
#include <iostream>
#include <conio.h>
#include <string> //Agrego la biblioteca <string> para incluir cadenas de texto en el codigo.
using namespace std;

struct Cliente{ //Creo una estructura llamada Cliente para almacenar todos los datos del usuario.
    string nombre; //Almaceno el nombre del Cliente.
    string producto; //Almaceno el nombre del producto.
    double precio; //Almaceno el precio del producto de tipo double.
    int cantidad; //Almaceno la cantidad del producto tipo entero.
};

// Prototipo de Funcion
double calcularDescuento (double subtotal, const string& producto); //En esta funcion calculo el descuento de la compra. Por tanto, voy a necesitar un subtotal y conocer el tipo de producto comprado por el Cliente, por eso en el prototipo y la funcion en cuestion el producto es de tipo constante, pues no se va a alterar en la llamada de la funcion.
double calcularTotalPagar(double subtotal, double descuento); // Para calcular el total a pagar, hago un prototipo de funcion donde tengo dos parametros de tipo double, uno con el subtotal y el otro con el descuento.
void mostrarResultadoCompra(const Cliente& cliente, double descuento, double totalPagar); // Por ultimo tengo un prototipo de funcion de tipo void que mostrara los resultados de compra en pantalla. Utilizo como parametros una constante de tipo estructura del cliente, que siempre permanecen igual. Otro parametro double que tendra el descuento realizado y por ultimo otro parametro tipo double que mostrara el total a pagar.

// Funcion Principal
int main(){

    Cliente cliente; //Declaro una variable tipo Estructura llamada Cliente donde almacenare los datos del usuario.

    cout<<"Ingrese el nombre del cliente: "; getline(cin, cliente.nombre); //Solicito el nombre del Cliente y lo guardo en su respectiva variable.
    cout<<"Ingrese el Tipo de producto en minusculas (frutas, verduras, abarrotes): "; getline(cin, cliente.producto); //El tipo de producto y lo guardo.
    cout<<"Ingrese el precio del producto por unidad: "; cin>>cliente.precio; // Solicito el precio del producto y lo guardo.
    cout<<"Ingrese la cantidad comprada del producto: "; cin>>cliente.cantidad; //Pido al Cliente la cantidad del producto a comprar y nuevamente lo guardo.
    //Cada dato pedido al usuario, se almacena en la variable tipo estructura llamada Cliente, esto es importante para luego imprimir los resultados.

    double subtotal = cliente.precio * cliente.cantidad; //Declaro una variable de tipo double donde almaceno el subtotal, que es igual al precio del producto que ingreso el cliente * la cantidad del producto ingresado por el Cliente.
    double descuento = calcularDescuento(subtotal, cliente.producto); //Declaro una funcion llamada descuento que sera igual a la llamada de la funcion denominada calcularDescuento y paso como parametros el subtotal y el nombre del producto.
    double totalPagar = calcularTotalPagar(subtotal, descuento); //Ahora declaro una ultima variable denominada totalPagar donde llamo a la funcion CalcularTotalPagar y uso como parametros el subtotal y el descuento.

    mostrarResultadoCompra(cliente, descuento, totalPagar); //Por ultimo, muestro los datos totales llamando a la funcion mostrarResultadoCompra.

    getch();
    return 0;
} // Fin del programa.

// Declaracion de Funcion
double calcularDescuento (double subtotal, const string& producto){ // En esta funcion tengo que calcular el descuento de la compra. Para esto, es necesario saber el tipo de producto que compro el Cliente, pues la condicion de obtener el 20% es si fue de tipo fruta,verdura o abarrote. Por tanto, coloco un condicional if que indique si el nombre del producto es igual a frutas, verduras o abarrotes.
    if (subtotal > 1000 && (producto == "frutas" || producto == "verduras" || producto == "abarrotes")){
        return 0.2 * subtotal; //En caso de ser correcto, al subtotal de la compra se multiplica por el 0.2% para obtener el descuento.
    }else{
        return 0;  // En caso de ser un producto distinto o no supere la cantidad de 1000, retorno 0 pues no cumple la condicion del descuento.
    }
}
double calcularTotalPagar(double subtotal, double descuento){ //Una vez obtenido el subtotal y el descuento, en esta funcion realizo el total a pagar.
    return subtotal - descuento; //Le resto al subtotal de la compra el descuento realizado y este sera el retorno.
}
void mostrarResultadoCompra(const Cliente& cliente, double descuento, double totalPagar){ // En esta declaracion de funcion de tipo void, muestro cada uno de los datos almacenados en la estructura Cliente.
    cout<<"\nResultados de Compra"<<endl;
    cout<<"Cliente: "<<cliente.nombre<<endl;
    cout<<"Producto: "<<cliente.producto<<endl;
    cout<<"Precio: "<<cliente.precio<<endl;
    cout<<"Cantidad: "<<cliente.cantidad<<endl;
    cout<<"Descuento: $"<<descuento<<endl;
    cout<<"Total a pagar: $"<<totalPagar<<endl;
}

// Alumno:  Valeria Sivira.