//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

//Espacio de trabajo
using namespace std;

//Estructura
struct datos {
	int numvideojuego, anolanzamiento;
	float precio, total, impuestos;
    string nomvideojuego, descripcion, crtrstcs, consola, gnr, clas;
};
//Funcion principal
int main() {
    datos juego[3];
	int op;

    do {
        //MENU DE OPCIONES
        printf("\t***MENU DE OPCIONES***\n");
        printf("1.-Agregar articulo\n2.-Modificar articulo\n3.-Eliminar articulo\n4.-Lista\n5.-Limpiar Pantalla\n6.-Salir\n");
        scanf_s("%d", &op);

        switch (op) {
        case 1: //AGREGAR ARTICULO
            for (int i = 0; i < 3; i++) {
                printf("Ingrese...\n el numero del articulo:\n");
                scanf_s("%d", &juego[i].numvideojuego);
                printf("el nombre del videojuego:\n");
                cin.ignore();
                getline(cin, juego[i].nomvideojuego);
                printf("su ano de lanzamiento:\n");
                scanf_s("%d", &juego[i].anolanzamiento);
                printf("el genero:\n");
                cin.ignore();
                getline(cin, juego[i].gnr);
                printf("su clasificacion:\n");
                cin.ignore();
                getline(cin, juego[i].clas);
                printf("la consola a la que pertenece:\n");
                cin.ignore();
                getline(cin, juego[i].consola);
                printf("las caracteristicas:\n");
                cin.ignore();
                getline(cin, juego[i].crtrstcs);
                printf("su descripcion:\n");
                cin.ignore();
                getline(cin, juego[i].descripcion);
                printf("su precio unitario:\n");
                scanf_s("%f", &juego[i].precio);
                juego[i].impuestos = juego[i].precio * 0.16;
                printf("impuestos: \n%f\n", juego[i].impuestos);
                juego[i].total = juego[i].precio + juego[i].impuestos;
                printf("total: \n%f\n", juego[i].total);
            }
            break;
        case 2: //MODIFICAR ARTICULO
            break;
        case 3: //ELIMINAR ARTICULO
            break;
        case 4: //LISTA DE ARTICULOS VIGENTES (opcion a genero / clasificacion)
            for (int i = 0; i < 3; i++) {
                printf("# de articulo: %d\n", juego[i].numvideojuego);
                printf("Nombre del videojuego: %s\n", juego[i].nomvideojuego.c_str());
                printf("Ano de lanzamiento: %d\n", juego[i].anolanzamiento);
                printf("Genero: %s\n", juego[i].gnr.c_str());
                printf("Clasificacion: %s\n", juego[i].clas.c_str());
                printf("Consola a la que pertenece: %s\n", juego[i].consola.c_str());
                printf("Caracteristicas: %s\n", juego[i].crtrstcs.c_str());
                printf("Descripción: %s\n", juego[i].descripcion.c_str());
                printf("Precio unitario: %f\n", juego[i].precio);
                printf("Impuestos: %f\n", juego[i].impuestos);
                printf("Total: %f\n\n", juego[i].total);
            }
            break;
        case 5:// LIMPIAR PANTALLA
            system("cls");
            break;
        case 6: //SALIR
            exit(1);
            break;
        default:
            break;
        }
    } while (op > 0 && op < 6);
	
}