#include <iostream>
#include <fstream>
using namespace std;
//=====================================================================================================================================================================
class Cliente 
{
private:
    string name;    
    string surname;
public:
    Cliente(string, string);
    void comprarplus();
};

Cliente::Cliente(string _name, string _surname)
{
    name = _name;
    surname = _surname;
}

void Cliente::comprarplus()  
{
    std::cout << "Cliente: " << name << " " << surname << ". \n";
}
//=======================================================================================================================================================================
void welcome();
void opciones(int);
void productos(char);
void cajafinal(int);
void carrito_verduras(int, int);
void carrito_carnes(int, int);
void carrito_frutas(int, int);
void carrito_pescados(int, int);
void carrito_dulces(int, int);
void carrito_juguetes(int, int);
//========================================================================================================================================================================
int main(){

    for (int i = 0; i < 50; i++) 
    {
        welcome();
        system("cls");
    }

    string nombre;
    string apellido;

    char primera_Respuesta;

    cout << "Escriba su nombre: "; 
    cin >> nombre;   
    cout << "Escriba su apellido: ";
    cin >> apellido;

    Cliente c1 = Cliente(nombre, apellido); 
    c1.comprarplus();
    cout << "\n";

    do
    {
        cout << "Buenas, viene a comprar algo? (A.Si / B.No): ";
        cin >> primera_Respuesta;
    } while ((primera_Respuesta != 'A') && (primera_Respuesta != 'B'));

    if (primera_Respuesta == 'A')
    {
        productos(primera_Respuesta);
    }

    if (primera_Respuesta == 'B')
    {
        cout << "Gracias, que tenga un buen dia.\n";
    }

    system("pause");
    return 0;
}

//==================================================================================================================================================================================
void welcome(){

    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t||    _ __   __ __   __ __    __ __ __    __          __ __ __    __ __ __    __ __  __ _  __    __ __ __    ||\n";
    cout << "\t||   |    | |     | |     |  |        |  |  |        |        |  |        |  |     |/    |/  |  |        |   ||\n";
    cout << "\t||   |/|  | |/|   | |/|   |  |  |-----   |  |        |  |--|__|  |  |--|  |  |    _     _    |  |  |-----    ||\n";
    cout << "\t||     |  |   |   |   |   |  |  |__ __   |  |        |  |        |  |  |  |  |   / |   / |   |  |  |__ __    ||\n";
    cout << "\t||    /  /   /   /   /   /   |        |  |  |        |  |        |  |  |  |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   /  /   /   /   /   /    |  |-----   |  |        |  |        |  |  |  |  |   | |   | |   |  |  |-----    ||\n";
    cout << "\t||  |   |__/    |__/   /     |  |__ __   |  |__ __   |  |__|--|  |  |  |  |  |   | |   | |   |  |  |__ __    ||\n";
    cout << "\t||  |                  |     |        |  |        |  |        |  |   --   |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   ------------------       --------    --------    ........    --------    ---   ---   ---    --------    ||\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\n";
}
//==================================================================================================================================================================================
void productos(char La_Primera_Respuesta){
    int opcion_productos;
    if(La_Primera_Respuesta == 'A')
    {   
        cout << "==TENEMOS LOS SIGUIENTES PRODUCTOS DISPONIBLES==\n";
        cout << "==PARA SELECCIONAR CUALQUIER PRODUCTO COLOQUE EL NUMERO DE DICHO PRODUCTO==";
        cout << "\n|||||||||||||\n";      
        cout << "1. Verduras\n2. Carnes\n3. Frutas\n4. Pescado\n5. Dulces\n6. Juguetes";
        cout << "\n|||||||||||||\n";
        cout << "Que producto desea?: ";
        cin >> opcion_productos;
        opciones(opcion_productos);
    }
}
//==================================================================================================================================================================================
void opciones(int La_opcion_productos){
    int verduras, dulces, pescado, juguete, carne, fruta;
    int cantidad_producto;

    cout << "==ESTE ES NUESTRO STOCK==\n";

    switch(La_opcion_productos){
            case 1:
            cout << "==Bienvenido al pasillo de Verduras!==\n";
            cout << "|||||||||||||\n";
            cout << "1.- Tomate\n2.- Lechuga\n3.- Col\n4.- Papa\n5.- Camote";
            cout << "\n|||||||||||||\n";
            cout << "Que verdura desea?: ";
            cin >> verduras;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_verduras(verduras,cantidad_producto);
            break;
            case 2:
            cout << "Bienvenido al pasillo de Carnes!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Lomo\n2.- Pechuga\n3.- Pierna\n4.- Chorizo\n5.- Entre-pierna";
            cout << "\n|||||||||||||\n";
            cout << "Que carne desea?: ";
            cin >> carne;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_carnes(carne,cantidad_producto);
            break;
            case 3:
            cout << "Bienvenido al pasillo de Frutas!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Pinha\n2.- Manzana\n3.- Platano\n4.- Pera\n5.- Sandia";
            cout << "\n|||||||||||||\n";
            cout << "Que fruta desea?: ";
            cin >> fruta;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_frutas(fruta,cantidad_producto);
            break;
            case 4:
            cout << "Bienvenido al pasillo de Pescados!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Bonito\n2.- Furel\n3.- Camaron\n4.- Anchobeta\n5.- Pez globo";
            cout << "\n|||||||||||||\n";
            cout << "Que pescado desea?: ";
            cin >> pescado;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_pescados(pescado,cantidad_producto);
            break;
            case 5:
            cout << "Bienvenido al pasillo de Dulces!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Galleta Oreo\n2.- Caramelos de Limón\n3.- Coca Cola\n4.- Frunas\n5.- Margaritas";
            cout << "\n|||||||||||||\n";
            cout << "Que dulce desea?: ";
            cin >> dulces;
            cout <<"Cuantos desea:? ";
            cin >> cantidad_producto;
            carrito_dulces(dulces,cantidad_producto);
            break;
            case 6:
            cout << "Bienvenido al pasillo de Juguetes!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Max Steal\n2.- Barby\n3.- Camion de carga\n4.- Pista de carreras\n5.- Ajedrez";
            cout << "\n|||||||||||||\n";
            cout << "Que juguete desea?: ";
            cin >> juguete;
            cout <<"Cuantos desea:? ";
            cin >> cantidad_producto;
            carrito_juguetes(juguete,cantidad_producto);
            break;
    }
}
//==================================================================================================================================================================================
void caja_final(float precio){
    cout << "\n";
    ofstream boleta;
    boleta.open("Boleta.txt");
    boleta << "El precio final a pagar es de " << precio << "s/. Que tenga buen día.\n";

}
//==================================================================================================================================================================================
void carrito_verduras(int verduras, int cantidad_producto){ 
    char decision;
    char answer = 'A';
    switch (verduras){
        case 1:
            float preciofinaltomate;
            preciofinaltomate = cantidad_producto * 0.40;
            cout << "Eligio la cantidad " << cantidad_producto << " de Tomates || Su costo final de esta operacion es: " << preciofinaltomate << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"\nPasa a caja final";
                    caja_final(preciofinaltomate);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinallechuga;
            preciofinallechuga = cantidad_producto * 2.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Lechuga || Su costo final de esta operacion es: " << preciofinallechuga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinallechuga);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcol;
            preciofinalcol = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Col || Su costo final de esta operacion es: " << preciofinalcol << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcol);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalpapa;
            preciofinalpapa = cantidad_producto * 0.30;
            cout << "Eligio la cantidad " << cantidad_producto << " de Papa || Su costo final de esta operacion es: " << preciofinalpapa << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpapa);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalcamote;
            preciofinalcamote = cantidad_producto * 0.30;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camote || Su costo final de esta operacion es: " << preciofinalcamote << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcamote);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
void carrito_carnes(int carne, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (carne){
        case 1:
            float preciofinallomo;
            preciofinallomo = cantidad_producto * 5.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Lomo || Su costo final de esta operacion es: " << preciofinallomo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinallomo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalpechuga;
            preciofinalpechuga = cantidad_producto * 4.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pechuga || Su costo final de esta operacion es: " << preciofinalpechuga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpechuga);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalpierna;
            preciofinalpierna = cantidad_producto * 3.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pierna || Su costo final de esta operacion es: " << preciofinalpierna << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpierna);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalchorizo;
            preciofinalchorizo = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Chorizo || Su costo final de esta operacion es: " << preciofinalchorizo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalchorizo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalentre;
            preciofinalentre = cantidad_producto * 1.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Entre-Pierna || Su costo final de esta operacion es: " << preciofinalentre << ".\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalentre);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
void carrito_frutas(int fruta, int cantidad_producto){ 
    char decision;
    char answer = 'A';
    switch (fruta){
        case 1:
            float preciofinalpina;
            preciofinalpina = cantidad_producto * 1.20;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pinha || Su costo final de esta operacion es: " << preciofinalpina << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpina);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalmanzana;
            preciofinalmanzana = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Manzana || Su costo final de esta operacion es: " << preciofinalmanzana << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalmanzana);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalplatano;
            preciofinalplatano = cantidad_producto * 0.40;
            cout << "Eligio la cantidad " << cantidad_producto << " de Platano || Su costo final de esta operacion es: " << preciofinalplatano << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalplatano);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalpera;
            preciofinalpera = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pera || Su costo final de esta operacion es: " << preciofinalpera << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpera);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalsandia;
            preciofinalsandia = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Sandia || Su costo final de esta operacion es: " << preciofinalsandia << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalsandia);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
void carrito_pescados(int verduras, int cantidad_producto){ 
    char decision;
    char answer = 'A';
    switch (verduras)
    {
        case 1:
            float preciofinalbonito;
            preciofinalbonito = cantidad_producto * 3.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Bonito || Su costo final de esta operacion es: " << preciofinalbonito << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalbonito);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalfurel;
            preciofinalfurel = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Furel || Su costo final de esta operacion es: " << preciofinalfurel << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalfurel);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcamaron;
            preciofinalcamaron = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camaron || Su costo final de esta operacion es: " << preciofinalcamaron << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcamaron);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalanchoveta;
            preciofinalanchoveta = cantidad_producto * 4.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Anchobeta || Su costo final de esta operacion es: " << preciofinalanchoveta << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalanchoveta);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalglobo;
            preciofinalglobo = cantidad_producto * 3.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pez globo || Su costo final de esta operacion es: " << preciofinalglobo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalglobo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
void carrito_dulces(int dulces, int cantidad_producto){ 
    char decision;
    char answer = 'A';
    switch (dulces){
        case 1:
            float preciofinaloreo;
            preciofinaloreo = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Galleta Oreo || Su costo final de esta operacion es: " << preciofinaloreo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinaloreo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalcaramelo;
            preciofinalcaramelo = cantidad_producto * 0.10;
            cout << "Eligio la cantidad " << cantidad_producto << " de Caramelos de Limon || Su costo final de esta operacion es: " << preciofinalcaramelo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcaramelo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcoca;
            preciofinalcoca = cantidad_producto * 2.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Coca Cola || Su costo final de esta operacion es: " << preciofinalcoca << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcoca);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalfrunas;
            preciofinalfrunas = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Frunas || Su costo final de esta operacion es: " << preciofinalfrunas << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalfrunas);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalmarga;
            preciofinalmarga = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Margaritas || Su costo final de esta operacion es: " << preciofinalmarga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalmarga);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
void carrito_juguetes(int juguete, int cantidad_producto){ 
    char decision;
    char answer = 'A';
    switch (juguete){
        case 1:
            float preciofinalmax;
            preciofinalmax = cantidad_producto * 70.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Max Steal || Su costo final de esta operacion es: " << preciofinalmax << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalmax);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalbar;
            preciofinalbar = cantidad_producto * 75.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Barby || Su costo final de esta operacion es: " << preciofinalbar << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalbar);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcamion;
            preciofinalcamion = cantidad_producto * 10.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camion de carga || Su costo final de esta operacion es: " << preciofinalcamion << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcamion);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalpista;
            preciofinalpista = cantidad_producto * 120.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pista de carreras || Su costo final de esta operacion es: " << preciofinalpista << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalpista);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalajedrez;
            preciofinalajedrez = cantidad_producto * 50.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Ajedrez || Su costo final de esta operacion es: " << preciofinalajedrez << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalajedrez);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
//==================================================================================================================================================================================
