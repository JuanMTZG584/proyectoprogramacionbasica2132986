//Bibliotecas
#include <iostream>
#include <math.h>
#include <conio.h> 
#include <stdio.h>
//Espacio de trabajo
using  namespace std;

int main()
{
    //Inicializacion de variables
    int dscn, op;
    //Articulo 1
    char nomv1[20], gnr1[20], clas1[20], cons1[20], car1[20], desc1[20];
    int num1, anol1;
    float pu1, total1, imp1;
    //Articulo 2
    char nomv2[20], gnr2[20], clas2[20], cons2[20], car2[20], desc2[20];
    int num2, anol2;
    float pu2, total2, imp2;
    //Articulo 3
    char nomv3[20], gnr3[20], clas3[20], cons3[20], car3[20], desc3[20];
    int num3, anol3;
    float pu3, total3, imp3;

    //Menu de opciones
    cout << "\t ***MENU DE OPCIONES***" << endl << "1.-Agregar articulo" << endl << "2.-Modificar articulo" << endl << "3.-Eliminar articulo" << endl << "4.-Lista" << endl << "5.-Limpiar Pantalla" << endl << "6.-Salir" << endl;
    cin >> op;

    switch (op)
    {
    case 1: //AGREGAR ARTICULO
        //Articulo 1
        cout << "Introduzca..." << endl << " el numero del articulo: " << endl;
        cin >> num1;
        cout << "el nombre del videojuego:" << endl;
        cin >> nomv1;
        cout << "su año de lanzamiento:" << endl;
        cin >> anol1;
        cout << "el genero:" << endl;
        cin >> gnr1;
        cout << "su clasificacion:" << endl;
        cin >> clas1;
        cout << "la consola a la que pertenece:" << endl;
        cin >> cons1;
        cout << "las caracteristicas:" << endl;
        cin >> car1;
        cout << "su descripcion:" << endl;
        cin >> desc1;
        cout << "su precio unitario:" << endl;
        cin >> pu1;
        cout << "los impuestos en porcentaje:" << endl;
        cin >> imp1;
        total1 = pu1 + pu1 * (imp1 / 100);
        cout << "total:" << endl << total1 << endl;

        //Articulo 2
        cout << "Introduzca..." << endl << " el numero del articulo: " << endl;
        cin >> num2;
        cout << "el nombre del videojuego:" << endl;
        cin >> nomv2;
        cout << "su año de lanzamiento:" << endl;
        cin >> anol2;
        cout << "el genero:" << endl;
        cin >> gnr2;
        cout << "su clasificacion:" << endl;
        cin >> clas2;
        cout << "la consola a la que pertenece:" << endl;
        cin >> cons2;
        cout << "las caracteristicas:" << endl;
        cin >> car2;
        cout << "su descripcion:" << endl;
        cin >> desc2;
        cout << "su precio unitario:" << endl;
        cin >> pu2;
        cout << "los impuestos en porcentaje:" << endl;
        cin >> imp2;
        cout << "el total:" << endl;
        total2 = pu2 + pu2 * (imp2 / 100);
        cout << "total:" << endl << total2 << endl;

        //Articulo 3
        cout << "Introduzca..." << endl << " el numero del articulo: " << endl;
        cin >> num3;
        cout << "el nombre del videojuego:" << endl;
        cin >> nomv3;
        cout << "su año de lanzamiento:" << endl;
        cin >> anol3;
        cout << "el genero:" << endl;
        cin >> gnr3;
        cout << "su clasificacion:" << endl;
        cin >> clas3;
        cout << "la consola a la que pertenece:" << endl;
        cin >> cons3;
        cout << "las caracteristicas:" << endl;
        cin >> car3;
        cout << "su descripcion:" << endl;
        cin >> desc3;
        cout << "su precio unitario:" << endl;
        cin >> pu3;
        cout << "los impuestos en porcentaje:" << endl;
        cin >> imp3;
        total3 = pu3 + pu3 * (imp3 / 100);
        cout << "total:" << endl << total3 << endl;

        //Regresar al menu
        cout << "¿Deseas regresar al menu?" << endl << "1 si  2 no" << endl;
        cin >> dscn;
        if (dscn == 1)
        {
            return main();
        }
        break;
    case 2: //MODIFICAR ARTICULO
        break;

    case 3: //ELIMINAR ARTICULO
        break;

    case 4: //LISTA DE ARTICULOS VIGENTES (opcion a genero / clasificacion)
        break;

    case 5:// LIMPIAR PANTALLA
        system("cls");
        return main();
        break;
    case 6: //SALIR
        exit(1);
        break;
    default:
        return main();
        break;
    }
}