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

int spot()
{

    printf("vamos instalar a spotifly forma nativa \n");

    system("curl -sS https://download.spotify.com/debian/pubkey_0D811D58.gpg | sudo apt-key add - ");

    system("echo Deb http://repository.spotify.com stable non-free | sudo tee /etc/apt/sources.list.d/spotify.list");
    system("sudo apt-get update && sudo apt-get install spotify-client");

    return 0;
}

void  visualcode(){
    system("sudo apt install software-properties-common apt-transport-https wget");
    system("wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -");
    system("sudo add-apt-repository deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main");
    system("sudo apt install code");

}
