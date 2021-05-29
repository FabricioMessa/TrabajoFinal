#include <iostream>

void welcome(){   //esta funion es para la interfaz del principio

    char ingresar;

    std::cout << "====================================================================\n";
    std::cout << "====================================================================\n";
    std::cout << "||||  :::   :::  :::   ::::  ::    ::::  ::::::  ::   ::  ::::  ||||\n";
    std::cout << "||||   :::  :::  :::   ::--  ::    ::    ::  ::  :: V ::  ::--  ||||\n";
    std::cout << "||||     :::   :::     ::::  ::::  ::::  ::::::  ::   ::  ::::  ||||\n";
    std::cout << "====================================================================\n";
    std::cout << "====================================================================\n";

}

class Cliente //creamos la clase cliente
{
private:
    std::string name;     //estos dos son para guardar el nombre y apellido del cliente
    std::string surname;
public:
    Cliente(std::string, std::string);
    void comprarplus();
    void comprarless();
};

Cliente::Cliente(std::string _name, std::string _surname)
{
    name = _name;
    surname = _surname;
}

void Cliente::comprarplus()  //en esta funcion colocamos que el cliente se ha registrado
{
    std::cout << "Cliente: " << name << " " << surname << ". \n";
}

void productos(char);    //colocamos las funciones que creamos
void opciones(int);
void carrito(int, int);

int main(){

    for (int i = 0; i < 20; i++)   //en esta parte de aqui son las veces que limpiara la ventana donde saldrá el mensaje de W E L C O M E, en el siguiente avance lo mejoraremos
    {
        welcome();
        system("cls");
    }

    std::string nombre;
    std::string apellido;
    char respuesta0;
    char answer;
    //int pasillo;
    //int verduras;
    //char verdura[100];
    //char respuesta;

    std::cout << "Escriba su nombre: ";    //decimos que ingrese sus nombres y apellidos
    std::cin >> nombre;
    std::cout << "Escriba su apellido: ";
    std::cin >> apellido;

    Cliente c1 = Cliente(nombre, apellido); //lo ponemos en un objeto cliente

    c1.comprarplus();

    std::cout << "\n";

    std::cout << "Buenos dias, viene a comprar algo? \n A. Buenos dias, si, vengo a comprar unas cosas para la semana.\n B. No, me equivoque de tienda, aios.: ";
    std::cin >> answer;

    if (answer == 'A')
    {
        productos(answer); // Opción positiva
    }
    if (answer == 'B') // Opción negativa
    {
       system("pause");
    }  

    system("pause");
    return 0;

}

void productos(char answer){ // Esta función se va a encargar de mostrar las opciones de los productos a tomar
    int opcion_productos;
    if (answer == 'A')
    {   
        std::cout << "==TENEMOS LOS SIGUIENTES PRODUCTOS DISPONIBLES==\n";
        std::cout << "|||||||||||||\n";      
        std::cout << "1. Verduras\n2. Carnes\n3. Frutas\n4. Pescado\n5. Dulces\n6. Juguetes";
        std::cout << "\n|||||||||||||\n";
        std::cout << "Que producto desea?: ";
        std::cin >> opcion_productos;
        opciones(opcion_productos);
    }
    else if(answer == 'B')
    {
        std::cout << "Gracias, que tenga un buen dia.\n";
        system("pause");
    }
}

void opciones(int opcion_productos){ // Esta función  va a darnos a conocer que producto va a querer el usuario con mas enfasis y cuantos.
    int verduras;
    int cantidad_producto;

    std::cout << "==ESTE ES NUESTRO STOCK==\n";

    switch(opcion_productos){
            case 1:
            std::cout << "Bienvenido al pasillo de Verduras!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Tomate(Numero de Tomate)\n2. Lechuga(Numero de Lechuga)\n3. Col(Numero de Col)\n4. Papa(Numero de Papa)\n5. Camote(Numero de Camote)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que verdura desea?: ";
            std::cin >> verduras;
            std::cout <<"Cuantas desea:? ";
            std::cin >> cantidad_producto;
            carrito(verduras,cantidad_producto);
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            default:
                break;
    }
    std::cout << opcion_productos;
}

void carrito(int verduras, int cantidad_producto){ // En esta función vamos a mostrar la cantidad de productos que eligio y si va a realizar otra operación o pasar a la caja final.
    char decision;
    char answer = 'A';
    switch (verduras){
        case 1:
            std::cout << "Eligio la cantidad " << cantidad_producto << " de Tomates || Su costo final de esta operacion es: " << cantidad_producto * 0.5  << ".\n";
            std::cout << "\nSe adjunta para la suma final";
            do
            {
                std::cout << "\nDesea hacer otra operación?(S/N): ";
                std::cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    std::cout<<"Pasa a caja final";
                    void caja_final();
                }
            } while ((decision != 'S') && (decision != 'N'));
            
        case 2:
        case 3:
        case 4:
        case 5:
        default:
            break;
    }
}
