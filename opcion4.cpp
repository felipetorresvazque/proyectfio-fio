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

int inst_flat_sna()
{
    string opcion41;

    int opcion4;
    system("clear");
    printf("-----menu de opciones---- \n");
    printf("\n");
    printf("1)instalar flatpak \n");
    printf("\n");
    printf("2)instalar snap \n");
    printf("\n");
    printf("3)instalar snap en linuxmint \n");
    printf("\n");

    cout << "que opcion vas elegir :";
    cin >> opcion4;
    switch (opcion4)
    {
    case 1:
        system("clear");
        printf("vamos instalar flatpak este proceso se va demora un poco\n");
        system("sudo apt install flatpak && flatpak remote-add --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo");

        printf("por favor reinicia el ordenador o pc por que se aplique los cambios \n");

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
        system("clear");
        printf("vamos instalar snapcraft  \n");
        printf("\n");
        system("sudo apt update && sudo apt install snapd");
        printf("\n");

        printf("por favor reinicia el ordenador o pc por que se aplique los cambios \n");

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
    case 3:

        printf("su sitema operativo es linux mint si o no ? \n");
        cin >> opcion41;

        if (opcion41 == "si")
        {

            system("clear");
            printf("vamos instalar snapcraft para linux mint  \n");

            printf("adventecia este proceso va eliminar el archivo nosnap.pref \n");
            system("sudo rm /etc/apt/preferences.d/nosnap.pref");
            printf("eliminado ");
            system("sudo apt update");

            printf("\n");
            system("sudo apt update && sudo apt install snapd");
            printf("\n");

            printf("por favor reinicia el ordenador o pc por que se aplique los cambios \n");

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
        }else{
            printf("Okay operacion cancelado ");
        }

        break;

    default:
        break;
    }
    return 0;
}