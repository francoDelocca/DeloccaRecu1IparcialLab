#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Informes.h"
#include "Trabajos.h"

char menuInformes()
{
    char opcion;
    system("cls");
    printf("*********** Informes ***********\n");
    printf("a- Mostrar bicicletas del color seleccionado \n");
    printf("b- Mostrar bicicletas de un tipo seleccionado\n");
    printf("c- Informar la o las bicicletas de menor rodado\n");
    printf("d- Mostrar un listado de las bicicletas separadas por tipo\n");
    printf("e- Informar cuantas bicicletas hay de un tipo y color seleccionados\n");
    printf("f- Mostrar el o los colores mas elegidos\n");
    printf("g- Pedir una bicicleta y mostrar todos los trabajos que se le hicieron\n");
    printf("h- Pedir una bicicleta e informar la suma de los importes de los servicios que se le hicieron a la misma \n");
    printf("i- Pedir un servicio y mostrar las bicicletas a las que se le realizo ese servicio y la fecha \n");
    printf("j- Pedir una fecha y mostrar todos los servicios realizados en la misma \n");
    printf("k- Pedir un tipo de rueda y ver todas las bicicletas con ese tipo de rueda \n");
    printf("l- Mostrar las ruedas mas elegidas \n");
    printf("m- Mostrar un listado de las bicicletas separadas por rueda \n");
    printf("n- Informar cuantas bicicletas hay de un tipo de rueda y color \n");
    printf("o- Pedir un cliente y mostrar todas las bicicletas de ese mismo \n");
    printf("p- Informar la o las bicicletas de mayor rodado \n");
    printf("x. Salir\n");


    printf("Ingrese una opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);
    return opcion;
}
//-----------------------------------------------------------------------------------------------------------------------
void informeBicicletas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eTrabajo trabajos[], int tamTr, eServicio servicios[], int tamServ, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{

    char seguir = 's';
    char confirma = 's';

    do
    {
        switch(menuInformes())
        {
        case 'a':
            listarBicicletasDeColor(bicicletas, tamB, tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'b':
            listarBicicletasDeTipo(bicicletas, tamB, tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'c':
            informarMenorRodadoBicicleta(bicicletas, tamB, colores, tamColores, tipos, tamTipo, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'd':
            informarBicicletasXTipo(bicicletas, tamB, colores, tamColores, tipos, tamTipo, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'e':
            mostrarBicicletasPorColorYTipo(bicicletas, tamB, colores, tamColores, tipos, tamTipo, ruedas, tamRuedas);
            break;
        case 'f':
            informarMayorColor(bicicletas, tamB, colores, tamColores);
            break;
        case 'g':
            informarTrabajosDeBicicletas(trabajos, tamTr, bicicletas, tamB, tipos, tamTipo, servicios, tamServ, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'h':
            preciosServiciosBicicletas(bicicletas, tamB, tipos, tamTipo, colores, tamColores, trabajos, tamTr, servicios, tamServ, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case'i':
            informarBicicletasDeServicio(bicicletas, tamB, servicios, tamServ, trabajos, tamTr, ruedas, tamRuedas);
            break;
        case 'j':
            listarBicicletasPorFechaTrabajo(bicicletas, tamB, trabajos, tamTr, servicios, tamServ, ruedas, tamRuedas);
            break;
        case 'k':
            listarBicicletasXRuedas(bicicletas, tamB, tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'l':
            informarMayorRueda(bicicletas, tamB, ruedas, tamRuedas);
            break;
        case 'm':
            informarBicicletasXRueda(bicicletas, tamB, colores, tamColores, tipos, tamTipo, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'n':
            mostrarBicicletasPorColorYRueda(bicicletas, tamB, colores, tamColores, tipos, tamTipo, ruedas, tamRuedas);
            break;
        case 'o':
            listarBicicletasXCliente(bicicletas, tamB, tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            break;
        case 'p':
            informarMayorRodadoBicicleta(bicicletas, tamB, colores, tamColores, tipos, tamTipo, clientes, tamCliente, ruedas, tamRuedas);
            break;

        case 'x':
            printf("Confirma salida? Ingrese s o n: \n");
            fflush(stdin);
            scanf("%c", &confirma);
            if(confirma== 's')
            {
                seguir = 'n';
            }
            break;

        }
        system("pause");

    }
    while ( seguir == 's');

}

void informarMayorRodadoBicicleta(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{
    float mayorRodado = 0;
    int flag=0;
    int hayBicicletas =0;
    char nombreColor[20];
    char nombreTipo[20];

    system("cls");



    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0)
        {
            if(bicicletas[i].rodado > mayorRodado || flag ==0 )
            {
                mayorRodado = bicicletas[i].rodado;
                cargarNombreColor(nombreColor, bicicletas[i].idColor, colores, tamColores);
                cargarDescripcionTipo(nombreTipo, bicicletas[i].idTipo, tipos, tamTipo);
                flag = 1;
                hayBicicletas =1;
            }
        }
    }


    printf("El mayor rodado es %.2f y corresponde a la/las bicicleta/s: \n\n", mayorRodado);
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");
    for(int e=0; e<tamB; e++)
    {
        if(bicicletas[e].rodado == mayorRodado && flag == 1 && hayBicicletas == 1)
        {
            mostrarBicicleta(bicicletas[e], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
        }
    }


    if ( hayBicicletas == 0)
    {
        printf("\nNo hay bicicletas\n");
    }
}


void listarBicicletasXCliente(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas){
    int idCliente;
    int flag = 0;

    system("cls");

    mostrarClientes(clientes, tamCliente);
    printf("\n Ingrese el ID del cliente: ");
    scanf("%d", &idCliente);


    printf("**** Listado de bicicletas por cliente ****\n\n");
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");
    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0 && bicicletas[i].idCliente == idCliente)
        {
            mostrarBicicleta(bicicletas[i], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay bicicletas con ese cliente. \n");
    }
}

void mostrarBicicletasPorColorYRueda(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColor, eTipo tipos[], int tamTipo, eRueda ruedas[], int tamRuedas){

    int auxRueda;
    int auxColor;
    int contador=0;
    char nombreRueda[20];
    char nombreColor[20];
    int flag=0;

    mostrarRuedas(ruedas, tamRuedas);
    printf("Selecione una rueda por su ID: ");
    fflush(stdin);
    scanf("%d", &auxRueda);
    while(auxRueda<10000 || auxRueda>10006){
        mostrarRuedas(ruedas, tamRuedas);
        printf("ERROR, id invalido. Selecione una rueda por su ID: ");
        fflush(stdin);
        scanf("%d", &auxRueda);
    }

    listarColores(colores, tamColor);
    printf("Selecione un color por su ID: ");
    fflush(stdin);
    scanf("%d", &auxColor);
    while(auxColor<5000 || auxColor>5004){
        listarColores(colores, tamColor);
        printf("ERROR, id invalido. Selecione un color por su ID: ");
        fflush(stdin);
        scanf("%d", &auxColor);
    }

    for(int e=0; e<tamB; e++)
    {
        if(bicicletas[e].isEmpty == 0 && bicicletas[e].idRueda == auxRueda && bicicletas[e].idRueda)
        {
            cargarNombreColor(nombreColor, bicicletas[e].idColor, colores, tamColor);
            cargarNombreRueda(nombreRueda, bicicletas[e].idRueda, ruedas, tamRuedas);
            contador++;
            flag=1;
        }

    }

    if(flag == 1 )
    {
        printf("La cantidad de bicicletas del tipo de rueda %s y el color %s es %d\n", nombreRueda, nombreColor, contador);
    }else if (flag == 0){
        printf("No hay bicicletas que tengan ese tipo de rueda y ese color simultaneamente\n");
    }
}

void informarBicicletasXRueda(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas){
    int flag=0;
    system("cls");
    printf("****** Lista de bicicletas de todas las ruedas *******\n\n");

    for (int s= 0; s<tamRuedas; s++)
    {
        printf("\n\n****************************************************************************************\n\n");
        printf("Rueda: %s\n\n", ruedas[s].descripcion);
        printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");

        for(int e=0; e<tamB; e++){
            if(bicicletas[e].isEmpty == 0 && bicicletas[e].idRueda == ruedas[s].id)
            {
                mostrarBicicleta(bicicletas[e], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
                flag =1;
            }

    }
        if (flag == 0)
        {
            printf("Sin bicicletas\n");
        }
    }
}

int obtenerTotalRuedasBicicletas(int idRueda, eBicicleta bicicletas[], int tamB){
    int totalBicicletas=0;

    for (int i=0; i<tamB; i++)
    {
        if(bicicletas[i].isEmpty == 0 && bicicletas[i].idRueda == idRueda)
        {
            totalBicicletas = totalBicicletas + 1;
        }
    }

    return totalBicicletas;
}

void informarMayorRueda (eBicicleta bicicletas[], int tamB, eRueda ruedas[], int tamRuedas){
    int totalRuedas[tamRuedas];
    int mayorTotal;
    int flag =0;

    system("cls");
    printf("***** Ruedas mas elegidas *****\n\n");

    for(int i=0; i< tamRuedas; i++)
    {
        totalRuedas[i] = obtenerTotalRuedasBicicletas(ruedas[i].id, bicicletas, tamB);
    }

    for (int i=0; i<tamRuedas; i++)
    {
        if(totalRuedas[i] > mayorTotal || flag ==0)
        {
            mayorTotal = totalRuedas[i];
            flag =1;
        }
    }
    printf("Se eligio %d veces y la / las ruedas mas elegidas son: \n", mayorTotal);

    for (int i=0; i<tamRuedas; i++)
    {
        if( totalRuedas[i] == mayorTotal)
        {
            printf("%s\n", ruedas[i].descripcion);
        }
    }
}

//------------------------------------------------------------------------------------------------------------------------

void listarBicicletasXRuedas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{
    int idRueda;
    int flag = 0;

    system("cls");

    mostrarRuedas(ruedas, tamRuedas);
    printf("\n Ingrese el ID del tipo de rueda: ");
    scanf("%d", &idRueda);


    printf("**** Listado de bicicletas por rueda ****\n\n");
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");
    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0 && bicicletas[i].idRueda == idRueda)
        {
            mostrarBicicleta(bicicletas[i], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay bicicletas con ese tipo de ruedas. \n");
    }

}



void listarBicicletasDeTipo(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{
    int idTipo;
    int flag = 0;

    system("cls");

    listarTipos(tipos, tamTipo);
    printf("\n Ingrese el ID del tipo: ");
    scanf("%d", &idTipo);


    printf("**** Listado de bicicletas por tipo ****\n\n");
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");
    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0 && bicicletas[i].idTipo == idTipo)
        {
            mostrarBicicleta(bicicletas[i], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay bicicletas de ese tipo. \n");
    }

}
//--------------------------------------------------------------------------------------------------------------


void listarBicicletasDeColor(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{
    int idColor;
    int flag = 0;

    system("cls");

    listarColores(colores, tamColores);
    printf("\n Ingrese el ID del color: ");
    scanf("%d", &idColor);
    while(idColor<5000 || idColor>5004){
       listarColores(colores, tamColores);
        printf("\nERROR, id invalido. Ingrese el ID del color: ");
        scanf("%d", &idColor);
    }


    printf("**** Listado de notebooks por color ****\n\n");
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDAS    RODADO	\n");
    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0 && bicicletas[i].idColor == idColor)
        {
            mostrarBicicleta(bicicletas[i], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay bicicletas de ese color. \n");
    }

}
//------------------------------------------------------------------------------------------------------------------
void preciosServiciosBicicletas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipos, eColor colores[], int tamColor, eTrabajo trabajos[], int tamTrabajos, eServicio servicios[], int tamServicio, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas){

	int idBici;
	int indiceBici;
	int idServicio;
	int indiceServicio;
	float totalPrecios = 0;

	system("cls");
	printf("**** Precio de servicios de una Bici ****\n");

	mostrarBicicletas(bicicletas, tamB, tipos, tamTipos, colores, tamColor, clientes, tamCliente, ruedas, tamRuedas);
	printf("Ingrese el ID de la bicicleta: ");
	scanf("%d", &idBici);
    printf("\n\n");

	indiceBici = buscarBicicleta(idBici, bicicletas, tamB);

	if(indiceBici == -1){
		printf("No se encontro la bicicleta con ese ID\n\n");
	}
	else{
		printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	     RODADO	\n");

		mostrarBicicleta(bicicletas[indiceBici], tipos, tamTipos, colores, tamColor, clientes, tamCliente, ruedas, tamRuedas);

		for(int t = 0; t < tamTrabajos; t++){
			if(bicicletas[indiceBici].id == trabajos[t].idBicicleta && trabajos[t].id > 0)
            {
				idServicio = trabajos[t].idServicio;
				indiceServicio = buscarServicio(idServicio, servicios, tamServicio);
				totalPrecios += servicios[indiceServicio].precio;
			}
		}

		if(totalPrecios == 0){
			printf("No se le realizaron trabajos a esta bicicleta\n");
		}
		else{
			printf("\nTotal de precios de los servicios de la bicicleta: %.2f\n\n", totalPrecios);
		}
	}
}

void informarMenorRodadoBicicleta(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas)
{
    float menorRodado = 0;
    int flag=0;
    int hayBicicletas =0;
    char nombreColor[20];
    char nombreTipo[20];

    system("cls");



    for (int i=0; i< tamB; i++)
    {
        if (bicicletas[i].isEmpty == 0)
        {
            if(bicicletas[i].rodado < menorRodado || flag ==0 )
            {
                menorRodado = bicicletas[i].rodado;
                cargarNombreColor(nombreColor, bicicletas[i].idColor, colores, tamColores);
                cargarDescripcionTipo(nombreTipo, bicicletas[i].idTipo, tipos, tamTipo);
                flag = 1;
                hayBicicletas =1;
            }
        }
    }


    printf("El menor rodado es %.2f y corresponde a la/las bicicleta/s: \n\n", menorRodado);
    printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");
    for(int e=0; e<tamB; e++)
    {
        if(bicicletas[e].rodado == menorRodado && flag == 1 && hayBicicletas == 1)
        {
            mostrarBicicleta(bicicletas[e], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
        }
    }


    if ( hayBicicletas == 0)
    {
        printf("\nNo hay bicicletas\n");
    }
}

//-----------------------------------------------------------------------------------------------------


void informarBicicletasXTipo(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas){
    int flag=0;
    system("cls");
    printf("****** Lista de bicicletas de todos los tipos *******\n\n");

    for (int s= 0; s<tamTipo; s++)
    {
        printf("\n\n****************************************************************************************\n\n");
        printf("Tipo: %s\n\n", tipos[s].descripcion);
        printf("ID	     CLIENTE    MARCA	        COLOR     TIPO	 RUEDA    RODADO	\n");

        for(int e=0; e<tamB; e++){
            if(bicicletas[e].isEmpty == 0 && bicicletas[e].idTipo == tipos[s].id)
            {
                mostrarBicicleta(bicicletas[e], tipos, tamTipo, colores, tamColores, clientes, tamCliente, ruedas, tamRuedas);
                flag =1;
            }

    }
        if (flag == 0)
        {
            printf("Sin bicicletas\n");
        }
    }
}

//-------------------------------------------------------------------------------------------------
void mostrarBicicletasPorColorYTipo(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColor, eTipo tipos[], int tamTipo, eRueda ruedas[], int tamRuedas){

    int auxTipo;
    int auxColor;
    int contador=0;
    char nombreTipo[20];
    char nombreColor[20];
    int flag=0;

    listarTipos(tipos, tamTipo);
    printf("Selecione un tipo por su ID: ");
    fflush(stdin);
    scanf("%d", &auxTipo);
    while(auxTipo<1000 || auxTipo>1004){
        listarTipos(tipos, tamTipo);
        printf("ERROR, id invalido. Selecione un tipo por su ID: ");
        fflush(stdin);
        scanf("%d", &auxTipo);
    }

    listarColores(colores, tamColor);
    printf("Selecione un color por su ID: ");
    fflush(stdin);
    scanf("%d", &auxColor);
    while(auxColor<5000 || auxColor>5004){
        listarColores(colores, tamColor);
        printf("ERROR, id invalido. Selecione un color por su ID: ");
        fflush(stdin);
        scanf("%d", &auxColor);
    }

    for(int e=0; e<tamB; e++)
    {
        if(bicicletas[e].isEmpty == 0 && bicicletas[e].idTipo == auxTipo && bicicletas[e].idColor)
        {
            cargarNombreColor(nombreColor, bicicletas[e].idColor, colores, tamColor);
            cargarDescripcionTipo(nombreTipo, bicicletas[e].idTipo, tipos, tamTipo);
            contador++;
            flag=1;
        }

    }



    if(flag == 1 )
    {
        printf("La cantidad de bicicletas del tipo %s y el color %s es %d\n", nombreTipo, nombreColor, contador);
    }else if (flag == 0){
        printf("No hay bicicletas que tengan ese tipo y ese color simultaneamente\n");
    }


}

//----------------------------------------------------------------------------------------------------------------
int obtenerTotalColoresBicicletas(int idColor, eBicicleta bicicletas[], int tamB){

    int totalBicicletas=0;

    for (int i=0; i<tamB; i++)
    {
        if(bicicletas[i].isEmpty == 0 && bicicletas[i].idColor == idColor)
        {
            totalBicicletas = totalBicicletas + 1;
        }
    }

    return totalBicicletas;
}
//------------------------------------------------------------------------------------------------------------------

void informarMayorColor (eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores){
    int totalColores[tamColores];
    int mayorTotal;
    int flag =0;

    system("cls");
    printf("***** Colores mas elegidos *****\n\n");

    for(int i=0; i< tamColores; i++)
    {
        totalColores[i] = obtenerTotalColoresBicicletas(colores[i].id, bicicletas, tamB);
    }

    for (int i=0; i<tamColores; i++)
    {
        if(totalColores[i] > mayorTotal || flag ==0)
        {
            mayorTotal = totalColores[i];
            flag =1;
        }
    }
    printf("Se eligio %d veces y el / los colores mas elegidos son: \n", mayorTotal);

    for (int i=0; i<tamColores; i++)
    {
        if( totalColores[i] == mayorTotal)
        {
            printf("%s\n", colores[i].nombreColor);
        }
    }
}

//-----------------------------------------------------------------------------------------------

void informarTrabajosDeBicicletas (eTrabajo trabajos[], int tamTr, eBicicleta bicicletas[], int tamBici, eTipo tipos[], int tamTipo, eServicio servicios[], int tamServ, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas){
 int flag=0;
 int idBici;
 char nombreBici[20];

 system("cls");
 printf("****** Lista de Trabajos de una bicicleta *******\n");

 mostrarBicicletas(bicicletas, tamBici, tipos, tamTipo, colores, tamColores,clientes ,tamCliente, ruedas, tamRuedas);

 printf("Ingrese ID de la bicicleta elegida: ");
 fflush(stdin);
 scanf("%d", &idBici);

    cargarMarcaBicicletaTrabajo(nombreBici, idBici, bicicletas, tamBici);

    printf("\n\nBicicleta: %s\n\n", nombreBici);

    printf(" Id         BICICLETA             SERVICIO       FECHA\n");
    for (int i=0; i< tamTr; i++)
    {
        if (trabajos[i].isEmpty == 0 && trabajos[i].idBicicleta == idBici)
        {
            mostrarTrabajo(trabajos[i], bicicletas, tamBici, servicios, tamServ);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay trabajos en esa bicicleta \n");
    }
}

//---------------------------------------------------------------------------------------------------

void informarBicicletasDeServicio(eBicicleta bicicletas[], int tamB, eServicio servicios[], int tamS, eTrabajo trabajos[], int tamTr, eRueda ruedas[], int tamRuedas)
{
    int idServicio;
    int hayBicicletasEnServ = 0;
    char nombreServicio[20];

    system("cls");
    printf("** Listado de bicicletas por servicio **\n\n");

    mostrarServicios(servicios, tamS);
    printf("\n Ingrese ID del servicio: ");
    scanf("%d", &idServicio);
    while(idServicio<20000 || idServicio>20003){
        mostrarServicios(servicios, tamS);
        printf("\nERROR. Ingrese ID del servicio: ");
        scanf("%d", &idServicio);
    }

    cargarDescripcionServicioTrabajo(nombreServicio, idServicio, servicios, tamS);

    printf("\nBicicletas de servicio: %s \n\n ", nombreServicio);

    printf("ID       BICICLETAS               SERVICIO      FECHA\n");
    for (int i=0; i< tamTr; i++)
    {
        if (trabajos[i].isEmpty == 0 && trabajos[i].idServicio == idServicio)
        {
            mostrarTrabajo(trabajos[i], bicicletas, tamB, servicios, tamS);
            hayBicicletasEnServ = 1;
        }
    }

    if ( hayBicicletasEnServ == 0)
    {
        printf("\nNo hay notebooks en el servicio \n");
    }

}

//-----------------------------------------------------------------------------------

void listarBicicletasPorFechaTrabajo(eBicicleta bicicletas[], int tam, eTrabajo trabajos[], int tamTrab, eServicio servicios[], int tamServ, eRueda ruedas[], int tamRuedas)
{
    int dia;
    int mes;
    int anio;
    int flag = 0;

    system("cls");

    printf("\n Ingrese el dia: ");
    scanf("%d", &dia);

    printf("\n Ingrese el mes: ");
    scanf("%d", &mes);

    printf("\n Ingrese el anio: ");
    scanf("%d", &anio);


    printf("\n**** Listado de servicios de bicicletas por fecha ****\n\n");
    printf("   ID       BICICLETA     SERVICIO       FECHA\n");
    for (int i=0; i< tamTrab; i++)
    {
        if (trabajos[i].isEmpty == 0 && trabajos[i].fecha.dia == dia && trabajos[i].fecha.mes == mes && trabajos[i].fecha.anio == anio)
        {
            mostrarTrabajo(trabajos[i], bicicletas, tam, servicios, tamServ);
            flag = 1;
        }
    }

    if ( flag == 0)
    {
        printf("\nNo hay servicios hechos esa fecha \n");
    }

}
//---------------------------------------------------------------------------------------------------------

