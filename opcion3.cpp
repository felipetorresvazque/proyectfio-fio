/**
 * proyect fío-fío
 
 Autor: Felipe Torres 
 Primera versión: jueves 2 de septiembre del 2021
 Laja,Bio-Bio,Chile 
 intenmedeario ,herramienta y gestor de software
 
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int menu_inst()
{

    int opcion3;
    system("clear");

    printf("--------menu de opcione----------\n");
    printf("\n");
    printf("1)instalar pograma en apt \n");
    printf("\n");
    printf("2)instalar pograma en flatpak \n");
    printf("\n");
    printf("3)instalar pograma en snap \n");
    printf("\n");

    cout << "que opcion vas elegir :";
    cin >> opcion3;

    switch (opcion3)
    {
    case 1:
        printf("que pograma vas instalar forma nativa \n");
        break;
    case 2:
        printf("que software vas instlar en flatpak \n");
        break;
    case 3:
        system("clear");

        printf("que software vas instlar en snap \n");

        cout << "una pregunta querido usuario instalo snap a su equipo ";

        break;

    default:
        printf("opcion no disponible \n");
        break;
    }
    return 0;
}