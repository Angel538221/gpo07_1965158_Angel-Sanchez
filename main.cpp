#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion;
    float precio_unitario, Iva, Total;
	string articulo, descripcion, categoria, year, clasi, caract, genero, consola;

    cout << "\t *GAME SHOP* \n";
    cout << " 1.-Agregar videojuego \n 2.-Modificar videojuego\n 3.-Eliminar videojuego\n 4.-Lista videojuegos\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar videojuego
        cout << "Ingrese el numero del videojuego: \n";
        cin >> numarticulo;
        cout << "Ingrese el nombre del videojuego: \n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, articulo); //permite ejecutar los espacios en la variable
        cout << "Ingrese el año del videojuego: \n";
        cin.ignore();
        getline(cin, year);
        cout << "Ingrese la clasificacion del videojuego: \n";
        cin.ignore();
        getline(cin, clasi);        
        cout << "Ingrese las caracteristicas del videojuego: \n";
        cin.ignore();
        getline(cin, caract);
        cout << "Ingrese el descripcion del videojuego: \n";
        cin.ignore();
        getline(cin, descripcion);        
        cout << "Ingrese el genero del videojuego: \n";
        cin.ignore();
        getline(cin, genero);
        cout << "Ingrese la consola: \n";
        cin.ignore();
        getline(cin, consola);        
        cout << "Ingrese la categoria del videojuego: \n";
        cin.ignore();
        getline(cin, categoria);
        cout << "Ingrese el precio unitario del videojuego: \n";
        cin >> precio_unitario;
        Iva = precio_unitario*0.16;
        cout << "El iva es: \n" << Iva;
        Total = Iva+precio_unitario;        
        cout << "\nEl total es: \n" << Total;     
        cout << "\n\n";
        return main();
        break;

    case 2: //Modificar videojuego
        break;

    case 3://Eliminar videojuego
        break;

    case 4: //Lista de videojuegos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "Ingrese una opcion correcta \n";
        return main();

    }

}