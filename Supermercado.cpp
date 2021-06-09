//GRUPO 5
//- Victor Alejandro Calvo Guzmán
//- Tonny Nerso Cayo Villena
//- Fabricio Arian Messa Mandujano

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
    int carne;
    int cantidad_producto2;
    int fruta;
    int cantidad_producto3;
    int pescado;
    int cantidad_producto4;
    int dulces;
    int cantidad_producto5;
    int juguetes;
    int cantidad_producto6;

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
            std::cout << "Bienvenido al pasillo de Carnes!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Lomo(Numero de Lomo)\n2. Pechuga(Numero de Pechuga)\n3. Pierna(Numero de Pierna)\n4. Chorizo(Numero de Chorizo)\n5. Entre-pierna(Numero de Entre-piernas)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que carne desea?: ";
            std::cin >> carne;
            std::cout <<"Cuantas desea:? ";
            std::cin >> cantidad_producto2;
            carrito(carne,cantidad_producto2);
            case 3:
            std::cout << "Bienvenido al pasillo de Frutas!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Piña(Numero de Piña)\n2. Manzana(Numero de Manzana)\n3. Platano(Numero de Platano)\n4. Pera(Numero de Pera)\n5. Sandia(Numero de Sandia)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que fruta desea?: ";
            std::cin >> fruta;
            std::cout <<"Cuantas desea:? ";
            std::cin >> cantidad_producto3;
            carrito(fruta,cantidad_producto3);
            case 4:
            std::cout << "Bienvenido al pasillo de Pescado!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Pejerrey(Numero de Pejerrey)\n2. Atun(Numero de Atun)\n3. Lenguado(Numero de Lenguado)\n4. Trucha(Numero de Trucha)\n5. Caballa(Numero de Caballa)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que pescado desea?: ";
            std::cin >> pescado;
            std::cout <<"Cuantas desea:? ";
            std::cin >> cantidad_producto4;
            carrito(pescado,cantidad_producto4);
            case 5:
            std::cout << "Bienvenido al pasillo de Dulces!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Galleta Oreo(Numero de Galleta Oreo)\n2. Caramelos de Limón(Numero de Caramelos de Limón)\n3. Coca Cola(Numero de Coca Cola)\n4. Frunas(Numero de Frunas)\n5. Margaritas(Numero de Margaritas)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que dulce desea?: ";
            std::cin >> dulces;
            std::cout <<"Cuantos desea:? ";
            std::cin >> cantidad_producto5;
            carrito(dulces,cantidad_producto5);
            case 6:
            std::cout << "Bienvenido al pasillo de Juguetes!\n";
            std::cout << "|||||||||||||\n";
            std::cout << "1. Max Steal(Numero de Max Steal)\n2. Barby(Numero de Barby)\n3. Camion de carga(Numero de Camion de carga)\n4. Pista de carreras(Numero de Pista de carreras)\n5. Ajedrez(Numero de Ajedrez)\n";
            std::cout << "\n|||||||||||||\n";
            std::cout << "Que juguete desea?: ";
            std::cin >> juguetes;
            std::cout <<"Cuantos desea:? ";
            std::cin >> cantidad_producto6;
            carrito(juguetes,cantidad_producto6);
            default:
                break;
    }
    std::cout << opcion_productos;
}

void carrito_verduras(int verduras, int cantidad_producto){ // En esta función vamos a mostrar la cantidad de productos que eligio y si va a realizar otra operación o pasar a la caja final.
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
            std::cout << "Eligio la cantidad " << cantidad_producto << " de Lechuga || Su costo final de esta operacion es: " << cantidad_producto * 1.5  << ".\n";
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
        case 3:
            std::cout << "Eligio la cantidad " << cantidad_producto << " de Col || Su costo final de esta operacion es: " << cantidad_producto * 0.2  << ".\n";
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
        case 4:
            std::cout << "Eligio la cantidad " << cantidad_producto << " de Papa || Su costo final de esta operacion es: " << cantidad_producto * 0.2  << ".\n";
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
        case 5:
            std::cout << "Eligio la cantidad " << cantidad_producto << " de Camote || Su costo final de esta operacion es: " << cantidad_producto * 0.2  << ".\n";
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
        default:
            break;
    }
}
