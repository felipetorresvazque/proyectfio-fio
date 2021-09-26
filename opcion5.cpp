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

int act_fla_snap(){

      int opcion5;
        system("clear");
        printf("-----menu de opciones---- \n");
        printf("\n");
        printf("1)Actualizar flatpak \n");
        printf("\n");
        printf("2)Actualizar snap \n");
        printf("\n");

        cout << "que opcion vas elegir :";
        cin >> opcion5;

        switch (opcion5)
        {
        case 1:
            system("clear");
            printf("Vamos actualizar los pograma en flatpak \n");
            printf("\n");
            system("flatpak update");
            printf("\n");
            printf("ya esta completado a la actualización \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠠⠤⠶⠞⢻⣿⡿⣿⣿⣿⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⢀⣠⣤⣤⣴⣶⣄⠀⢸⣿⠇⠻⣿⣿⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⠀⠰⠛⠛⠛⠻⠿⠿⣿⡇⠈⠉⠀⠀⠈⠻⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⣄⡀⢹⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⢿⢏⡜⢱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠾⢿⣿⠻⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⡿⢸⡞⣠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠀⠀⠹⡍ \n");
            printf("⣉⠙⠻⣿⣹⡇⡞⢰⡟⠀⣠⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹ \n");
            printf("⠈⡹⣶⢆⣿⢱⡇⢸⡷⠋⣠⣤⡈⢇⠀⠀⠀⠀⠀⠀⠀⢀⡤⠄⢠⡀⠀⠀⠀⠈ \n");
            printf("⠀⣇⣿⢸⣿⠸⣷⠀⢧⣾⠋⠈⠻⣾⣦⠀⠀⠀⠀⠀⣴⠋⢀⣦⠀⢿⠀⠀⠀⢀ \n");
            printf("⡀⠈⣿⠘⢿⠄⠈⢀⠸⡏⠀⠀⢰⡇⡜⠀⠀⠀⠀⠀⠁⠀⠈⢸⠈⠀⠀⠀⠀⡼ \n");
            printf("⣿⣷⣿⠀⠀⠀⠀⡌⠀⢧⣀⡴⠛⢁⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡇ \n");
            printf("⣿⣿⣿⡇⠀⠀⠰⢰⠀⠀⠙⠃⢀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⡇ \n");
            printf("⣿⣿⣿⣷⠀⠀⠀⡸⠀⠀⠀⣠⣿⣿⣶⣤⣤⣀⡀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⡇ \n");
            printf("⣿⣿⣿⠏⠀⠀⢀⡇⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⡞⠋⢸⣿⣿⣿⣿⡇ \n");
            printf("⣿⡿⠃⠀⠐⠶⣿⡿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⢻⣿⣿⣿⣿⡇ \n");

            break;
        case 2:
            printf("vamos actualizar los pograma en snapcraft");
            printf("\n");
            system("snap refresh");
            printf("\n");
            printf("ya esta completado a la actualización \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠠⠤⠶⠞⢻⣿⡿⣿⣿⣿⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⢀⣠⣤⣤⣴⣶⣄⠀⢸⣿⠇⠻⣿⣿⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⠀⠰⠛⠛⠛⠻⠿⠿⣿⡇⠈⠉⠀⠀⠈⠻⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⣄⡀⢹⣿ \n");
            printf("⣿⣿⣿⣿⣿⣿⢿⢏⡜⢱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠾⢿⣿⠻⣿⣿⣿ \n");
            printf("⣿⣿⣿⣿⣿⡿⢸⡞⣠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠀⠀⠹⡍ \n");
            printf("⣉⠙⠻⣿⣹⡇⡞⢰⡟⠀⣠⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹ \n");
            printf("⠈⡹⣶⢆⣿⢱⡇⢸⡷⠋⣠⣤⡈⢇⠀⠀⠀⠀⠀⠀⠀⢀⡤⠄⢠⡀⠀⠀⠀⠈ \n");
            printf("⠀⣇⣿⢸⣿⠸⣷⠀⢧⣾⠋⠈⠻⣾⣦⠀⠀⠀⠀⠀⣴⠋⢀⣦⠀⢿⠀⠀⠀⢀ \n");
            printf("⡀⠈⣿⠘⢿⠄⠈⢀⠸⡏⠀⠀⢰⡇⡜⠀⠀⠀⠀⠀⠁⠀⠈⢸⠈⠀⠀⠀⠀⡼ \n");
            printf("⣿⣷⣿⠀⠀⠀⠀⡌⠀⢧⣀⡴⠛⢁⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡇ \n");
            printf("⣿⣿⣿⡇⠀⠀⠰⢰⠀⠀⠙⠃⢀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⡇ \n");
            printf("⣿⣿⣿⣷⠀⠀⠀⡸⠀⠀⠀⣠⣿⣿⣶⣤⣤⣀⡀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⡇ \n");
            printf("⣿⣿⣿⠏⠀⠀⢀⡇⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⡞⠋⢸⣿⣿⣿⣿⡇ \n");
            printf("⣿⡿⠃⠀⠐⠶⣿⡿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⢻⣿⣿⣿⣿⡇ \n");

            break;

        default:
            break;
        }
        return 0;
}