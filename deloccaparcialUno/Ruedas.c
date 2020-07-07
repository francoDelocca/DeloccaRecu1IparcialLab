#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ruedas.h"

void mostrarRueda(eRueda rueda, int tamRueda){

    printf("%2d    %10s        \n", rueda.id, rueda.descripcion);
}

//---------------------------------------------------------------------------------------
void mostrarRuedas(eRueda ruedas[], int tamRuedas){

 int flag=0;
 system("cls");
 printf("****** LISTA RUEDAS ******\n");
 printf("ID	   NOMBRE   	\n");

    for(int i=0; i<tamRuedas; i++)
    {

            mostrarRueda(ruedas[i], tamRuedas);
            flag=1;


    }

    if(flag==0)
    {
        printf("No hay ruedas que mostrar\n");
    }

}

//---------------------------------------------------------------------------------------
int buscarRueda(int id, eRueda ruedas[], int tamRuedas){

  int indice= -1;

    for(int i=0; i<tamRuedas; i++)
    {
        if(ruedas[i].id == id)
        {
            indice= i;
            break;
        }
    }
  return indice;
}

//---------------------------------------------------------------------------------------


int cargarNombreRueda(char nombre[], int id, eRueda ruedas[], int tamRuedas){

    int todoOk = 0;

    for (int i=0; i<tamRuedas; i++)
    {
        if(ruedas[i].id == id)
        {
            strcpy(nombre, ruedas[i].descripcion);
            todoOk =1;

        }
    }
    return todoOk;
}

//---------------------------------------------------------------------------------------

