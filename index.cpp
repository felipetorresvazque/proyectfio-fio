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

#include "opcion6.cpp"
#include "opcion1.cpp"
#include "opcion2.cpp"
#include "opcion3.cpp"
#include "opcion4.cpp"
#include "opcion5.cpp"

using namespace std;

int main()
{

#pragma region
    int opcion;

    system("clear");

    printf("proyect code name fío-fío \n");

    printf("1) actualizar repositorio y actualización del sistema\n");
    printf("2) limpiar el sistema \n");
    printf("3) instalar programa \n");
    printf("4) instalar snap y flatpak \n");
    printf("5) actualizar flatpak y snap \n");

    printf("6) acerca de.. \n");

    cout << "ingresa un opcion para empezar :";
    cin >> opcion;
#pragma endregion

    /* code */

    switch (opcion)
    {
    case 1:
        actualizacion();

        break;
    case 2:

        limpieza();

        break;

    case 3:
        menu_inst();

        break;

    case 4:

        inst_flat_sna();
        break;

    case 5:
        act_fla_snap();

        break;

    case 6:
        acerca();

        break;

    default:
        printf("no esta opcion esta disponible \n");
        break;
    }
    return 0;
}