//BIBLIOTECAS
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <wchar.h>

//ESPACIO DE TRABAJO
using namespace std;

//DECLARACIÓN DE VARIABLES, ESTRUCTURA Y FUNCIONES
struct datos {
    int numvideojuego, anolanzamiento;
    float precio, total, impuestos;
    string nomvideojuego, descripcion, crtrstcs, consola, gnr, clas, status;
};
int contador, alta;
datos* juego;
int band = 0;
void Agregar();
void Modificar();
void Eliminar();
void Lista();
void Archivos();

//FUNCIÓN PRINCIPAL
int main() {
    int op;
    //MENU DE OPCIONES
    printf("\tTIENDA DE VIDEOJUEGOS\n");
    printf("\t***MEN%c DE OPCIONES***\n", 233);
    printf("1 %c Agregar art%cculo\n2 %c Modificar art%cculo\n3 %c Eliminar art%cculo\n4 %c Lista\n5 %c Limpiar Pantalla\n6 %c Salir\n", 16, 161, 16, 161, 16, 161, 16, 16, 16);
    scanf_s("%d", &op);

    switch (op) {
    case 1: //AGREGAR ARTÍCULO
        Agregar();
        return main();
        break;
    case 2: //MODIFICAR ARTÍCULO
        Modificar();
        return main();
        break;
    case 3: //ELIMINAR ARTÍCULO
        Eliminar();
        return main();
        break;
    case 4: //LISTA DE ARTÍCULOS VIGENTES (opción a género / clasificación / consola)
        Lista();
        return main();
        break;
    case 5:// LIMPIAR PANTALLA
        system("cls");
        return main();
        break;
    case 6: //SALIR
        Archivos();
        break;
    default:
        printf("ERROR. Ingrese otro valor. \n");
        return main();
        break;
    }


}

//DEFINICIÓN DE FUNCIONES
void Agregar() {
    printf("%cCu%cntos juegos desea dar de alta? \n", 168, 160);
    scanf_s("%d", &alta);

    juego = new datos[alta];

    for (int i = 0; i < alta; i++) {
        printf("Ingrese...\n");
        juego[i].numvideojuego = i + 1;
        printf("el nombre del videojuego %d: ", i + 1);
        while (getchar() != '\n');
        getline(cin, juego[i].nomvideojuego);
        printf("su a%co de lanzamiento: ", 164);
        scanf_s("%d", &juego[i].anolanzamiento);
        while (juego[i].anolanzamiento<1000 || juego[i].anolanzamiento>2023) {
            printf("Lo sentimos, el a%co ingresado no es v%clido. Intente con otro valor. \n", 164,160);
            scanf_s("%d", &juego[i].anolanzamiento);
        }
        while (getchar() != '\n');
        printf("el g%cnero al que pertenece: ", 130);
        getline(cin, juego[i].gnr);
        printf("su clasificaci%cn: ", 162);
        getline(cin, juego[i].clas);
        printf("la consola a la que pertenece: ");
        getline(cin, juego[i].consola);
        printf("sus caracter%csticas: ", 161);
        getline(cin, juego[i].crtrstcs);
        printf("descripci%cn: ", 162);
        getline(cin, juego[i].descripcion);
        printf("precio unitario: $");
        scanf_s("%f", &juego[i].precio);
        while (juego[i].precio <= 0) {
            printf("Lo sentimos, el precio ingresado no es v%clido. Intente con otro valor. \n", 160);
            scanf_s("%f", &juego[i].precio);
        }
        juego[i].impuestos = juego[i].precio * 0.16;
        printf("impuestos: $%f\n", juego[i].impuestos);
        juego[i].total = juego[i].precio + juego[i].impuestos;
        printf("total: $%f\n", juego[i].total);
        juego[i].status = "REGISTRADO";
    }
    band = 1;
}
void Modificar() {
    //RESTRICCIÓN POR NO HABER INGRESADO NADA AÚN.
    if (band == 0) {
        printf("Los sentimos, pero es necesario ingresar al menos un art%cculo para poder ingresar a esta opci%cn.\n", 161, 162);
    }
    else {
        //OPCIÓN PARA MODIFICAR.
        int j, opcion, op2;
        do
        {
            printf("Ingrese el n%cmero de juego a modificar: \n", 163);
            scanf_s("%d", &j);
            j = j - 1;

            for (int i = j; i == j; i++)
            {
                //REGISTRO ELIMINADO O INEXISTENTE.
                if (juego[i].status != "REGISTRADO")
                {
                    printf("Registro del juego %d eliminado o inexiste.\n", i + 1);
                    printf("Ingrese un n%cmero de registro v%clido.\n", 163, 160);
                    op2 = 1;
                }
                else
                {
                    op2 = 2;
                }
            }
        } while (op2 == 1);
        //QUÉ SE VA A MODIFICAR
        printf("Ingrese qu%c desea modificar: \n1 %c Nombre del juego \n2 %c A%co de lanzamiento \n3 %c G%cnero \n4 %c Clasificaci%cn \n5 %c Consola \n6 %c Caracter%csticas \n7 %c Descripci%cn \n8 %c Precio \n", 130, 16, 16, 164, 16, 130, 16, 162, 16, 16, 161, 16, 162, 16);
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1:
            for (int i = j; i == j; i++)
            {
                printf("Modificar el nombre a: \n");
                cin.ignore();
                getline(cin, juego[i].nomvideojuego);
            }
            break;
        case 2:
            for (int i = j; i == j; i++)
            {
                printf("Modificar el a%co de lanzamiento a:\n", 164);
                scanf_s("%d", &juego[i].anolanzamiento);
            }
            break;

        case 3:
            for (int i = j; i == j; i++)
            {
                printf("Modificar el g%cnero a:\n", 130);
                cin.ignore();
                getline(cin, juego[i].gnr);
            }
            break;
        case 4:
            for (int i = j; i == j; i++)
            {
                printf("Modificar la clasificaci%cn a:\n", 162);
                cin.ignore();
                getline(cin, juego[i].clas);
            }
            break;
        case 5:
            for (int i = j; i == j; i++)
            {
                printf("Modificar la consola a:\n");
                cin.ignore();
                getline(cin, juego[i].consola);
            }
            break;
        case 6:
            for (int i = j; i == j; i++)
            {
                printf("Modificar las caracter%csticas a:\n", 161);
                cin.ignore();
                getline(cin, juego[i].crtrstcs);
            }
            break;
        case 7:
            for (int i = j; i == j; i++)
            {
                printf("Modificar la descripci%cn a:\n", 162);
                cin.ignore();
                getline(cin, juego[i].descripcion);
            }
            break;
        case 8:
            for (int i = j; i == j; i++)
            {
                printf("Modificar el precio a:\n$");
                scanf_s("%f", &juego[i].precio);
                juego[i].impuestos = juego[i].precio * 0.16;
                printf("Modificar impuestos a: \n$%f\n", juego[i].impuestos);
                juego[i].total = juego[i].precio + juego[i].impuestos;
                printf("Modificar total a : \n$%f\n", juego[i].total);
            }
            break;
        default:
            break;
        }
    }
}
void Eliminar() {
    //RESTRICCIÓN POR NO HABER INGRESADO NADA AÚN.
    if (band == 0) {
        printf("Los sentimos, pero es necesario ingresar al menos un art%cculo para poder ingresar a esta opci%cn.\n", 161, 162);
    }
    else {
        //ELIMINACIÓN.
        int j;
        printf("Ingrese el n%cmero del juego a eliminar: \n", 163);
        scanf_s("%d", &j);
        j = j - 1;
        for (int i = j; i == j; i++)
        {
            printf("Eliminando registro del videojuego %d. \n", j + 1);
            juego[i].status = "ELIMINADO";
            juego[i].numvideojuego = 0;
            juego[i].nomvideojuego = "";
            juego[i].anolanzamiento = 0;
            juego[i].gnr = " ";
            juego[i].clas = " ";
            juego[i].consola = " ";
            juego[i].crtrstcs = " ";
            juego[i].descripcion = " ";
            juego[i].precio = 0.0;
            juego[i].impuestos = 0.0;
            juego[i].total = 0.0;

        }
    }

}
void Lista() {
    if (band == 0) {
        printf("Los sentimos, pero es necesario ingresar al menos un art%cculo para poder ingresar a esta opci%cn.\n", 161, 162);
    }
    else {
        int o;
        string respuesta;
        //OPCIÓN DE FILTRO
        printf("%cC%cmo desea que la lista sea mostrada en pantalla? \n1 %c Filtrada por g%cnero \n2 %c Filtrada por clasificaci%cn \n3 %c Filtrada por consola \n4 %c Sin filtro \n", 168, 162, 16, 130, 16, 162, 16, 16);
        scanf_s("%d", &o);
        //FILTRO
        switch (o) {
        case 1: //GÉNERO
            printf("Los g%cneros disponibles son: \n", 130);
            for (int i = 0; i < alta; i++) {
                if (juego[i].gnr != juego[i + 1].gnr) {
                    printf("%c %s\n", 16, juego[i].gnr.c_str());
                }
            }
            printf("Digite el g%cnero para mostrar la lista : ", 130);
            cin.ignore();
            getline(cin, respuesta);
            for (int i = 0; i < alta; i++) {
                if (juego[i].gnr == respuesta) {
                    printf("N%cmero del juego: %d\n", 163, juego[i].numvideojuego);
                    printf("Nombre del juego: %s\n", juego[i].nomvideojuego.c_str());
                    printf("A%co de lanzamiento: %d\n", 164, juego[i].anolanzamiento);
                    printf("G%cnero: %s\n", 130, juego[i].gnr.c_str());
                    printf("Clasificaci%cn: %s\n", 162, juego[i].clas.c_str());
                    printf("Consola a la que pertenece: %s\n", juego[i].consola.c_str());
                    printf("Caracter%csticas: %s\n", 161, juego[i].crtrstcs.c_str());
                    printf("Descripci%cn: %s\n", 162, juego[i].descripcion.c_str());
                    printf("Precio unitario: $%f\n", juego[i].precio);
                    printf("Impuestos: $%f\n", juego[i].impuestos);
                    printf("Total: $%f\n\n", juego[i].total);
                }
            }
            break;
        case 2: //CLASIFICACIÓN
            printf("Las clasificaciones disponibles son: \n");
            for (int i = 0; i < alta; i++) {
                if (juego[i].clas != juego[i + 1].clas) {
                    printf("%c %s\n", 16, juego[i].clas.c_str());
                }
            }
            printf("Digite la clasificaci%cn para mostrar la lista : ", 162);
            cin.ignore();
            getline(cin, respuesta);
            for (int i = 0; i < alta; i++) {
                if (juego[i].clas == respuesta) {
                    printf("N%cmero del juego: %d\n", 163, juego[i].numvideojuego);
                    printf("Nombre del juego: %s\n", juego[i].nomvideojuego.c_str());
                    printf("A%co de lanzamiento: %d\n", 164, juego[i].anolanzamiento);
                    printf("G%cnero: %s\n", 130, juego[i].gnr.c_str());
                    printf("Clasificaci%cn: %s\n", 162, juego[i].clas.c_str());
                    printf("Consola a la que pertenece: %s\n", juego[i].consola.c_str());
                    printf("Caracter%csticas: %s\n", 161, juego[i].crtrstcs.c_str());
                    printf("Descripci%cn: %s\n", 162, juego[i].descripcion.c_str());
                    printf("Precio unitario: $%f\n", juego[i].precio);
                    printf("Impuestos: $%f\n", juego[i].impuestos);
                    printf("Total: $%f\n\n", juego[i].total);
                }
            }
            break;
        case 3: //CONSOLA
            printf("Las consolas disponibles son: \n");
            for (int i = 0; i < alta; i++) {
                if (juego[i].consola != juego[i + 1].consola) {
                    printf("%c %s\n", 16, juego[i].consola.c_str());
                }
            }
            printf("Digite la consola para mostrar la lista : ");
            cin.ignore();
            getline(cin, respuesta);
            for (int i = 0; i < alta; i++) {
                if (juego[i].consola == respuesta) {
                    printf("N%cmero del juego: %d\n", 163, juego[i].numvideojuego);
                    printf("Nombre del juego: %s\n", juego[i].nomvideojuego.c_str());
                    printf("A%co de lanzamiento: %d\n", 164, juego[i].anolanzamiento);
                    printf("G%cnero: %s\n", 130, juego[i].gnr.c_str());
                    printf("Clasificaci%cn: %s\n", 162, juego[i].clas.c_str());
                    printf("Consola a la que pertenece: %s\n", juego[i].consola.c_str());
                    printf("Caracter%csticas: %s\n", 161, juego[i].crtrstcs.c_str());
                    printf("Descripci%cn: %s\n", 162, juego[i].descripcion.c_str());
                    printf("Precio unitario: $%f\n", juego[i].precio);
                    printf("Impuestos: $%f\n", juego[i].impuestos);
                    printf("Total: $%f\n\n", juego[i].total);
                }
            }
            break;
        case 4: //SIN FILTRO
            for (int i = 0; i < alta; i++)
            {
                if (juego[i].status == "ELIMINADO")
                {
                    printf("REGISTRO DEL JUEGO %d ELIMINADO \n", i + 1);
                }
                else
                {
                    printf("N%cmero del juego: %d\n", 163, juego[i].numvideojuego);
                    printf("Nombre del juego: %s\n", juego[i].nomvideojuego.c_str());
                    printf("A%co de lanzamiento: %d\n", 164, juego[i].anolanzamiento);
                    printf("G%cnero: %s\n", 130, juego[i].gnr.c_str());
                    printf("Clasificaci%cn: %s\n", 162, juego[i].clas.c_str());
                    printf("Consola a la que pertenece: %s\n", juego[i].consola.c_str());
                    printf("Caracter%csticas: %s\n", 161, juego[i].crtrstcs.c_str());
                    printf("Descripci%cn: %s\n", 162, juego[i].descripcion.c_str());
                    printf("Precio unitario: $%f\n", juego[i].precio);
                    printf("Impuestos: $%f\n", juego[i].impuestos);
                    printf("Total: $%f\n\n", juego[i].total);
                }
            }
            break;
        }

    }
}
void Archivos() {
    ofstream archivo;
    string nombrearchivo;
    int texto;
    string texto2;
    float texto3;

    nombrearchivo = "altasvideojuegos.txt";

    archivo.open(nombrearchivo.c_str(), ios::out);
    //FALLA EN LA CREACIÓN DEL ARCHIVO
    if (archivo.fail())
    {
        printf("ERROR. No fue posible crear el archivo. \n");
        exit(1);
    }
    //IMPRESIÓN DEPENDIENDO DEL ESTADO DEL REGISTRO
    for (int i = 0; i < alta; i++)
    {
        if (juego[i].status == "ELIMINADO")
        {
            texto2 = "Registro eliminado ";
            texto = i;
            archivo << texto2 << texto << "\n" << "\n";
        }
        else
        {
            texto = juego[i].numvideojuego;
            archivo << "NÚMERO DE ARTICULO: " << texto << "\n";
            texto2 = juego[i].nomvideojuego;
            archivo << "NOMBRE DEL VIDEOJUEGO: " << texto2 << "\n";
            texto = juego[i].anolanzamiento;
            archivo << "AÑO DE LANZAMIENTO: " << texto << "\n";
            texto2 = juego[i].clas;
            archivo << "CLASIFICACIÓN: " << texto2 << "\n";
            texto2 = juego[i].consola;
            archivo << "CONSOLA: " << texto2 << "\n";
            texto2 = juego[i].crtrstcs;
            archivo << "CARACTERÍSTICAS: " << texto2 << "\n";
            texto2 = juego[i].descripcion;
            archivo << "DESCRIPCIÓN: " << texto2 << "\n";
            texto3 = juego[i].precio;
            archivo << "PRECIO: $" << texto3 << "\n";
            texto3 = juego[i].impuestos;
            archivo << "IMPUESTOS: $" << texto3 << "\n";
            texto3 = juego[i].total;
            archivo << "TOTAL: $" << texto3 << "\n" << "\n";
        }
    }
    archivo.close();
}