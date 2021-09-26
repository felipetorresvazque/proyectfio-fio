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

int limpieza()
{

    printf("Okay vamos hacer proceso de auto remove \n");
    system("sudo apt autoremove");

    printf("Okay está listo el sistema operativo está  libre de software abandonado. \n");
    
    return 0;
}