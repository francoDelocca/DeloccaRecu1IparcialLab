#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Bicicletas.h"
#include "Tipos.h"
#include "Servicios.h"
#include "Trabajos.h"
#include "Informes.h"

#define TAMC 5
#define TAMT 4
#define TAMS 4
#define TAMB 10
#define TAMTR 10
#define TAMCLIENTE 10
#define TAMR 6

int main()
{
    eColor colores[TAMC] = {{5000, "Gris"},{5001, "Negro"}, {5002, "Blanco"}, {5003, "Azul"}, {5004, "Rojo"}};
    eTipo tipos[TAMT] = { {1000, "Rutera"}, {1001, "Carrera"}, {1002, "Mountain"}, {1003, "BMX"} };
    eServicio servicios[TAMS]= { {20000, "Limpieza", 250}, {20001, "Parche", 300}, {20002, "Centrado", 400}, {20003, "Cadena", 350} };
    eRueda ruedas[TAMR] = {{10000, "Todoterreno"},{10001, "Mixtos"},{10003, "Asfalto"},{10004, "Terreno compacto"}, {10005, "Descensos"},{10006, "Terreno seco"} };

    eBicicleta bicicletas[TAMB]= {};

    eCliente clientes[TAMCLIENTE]= {    {1, "Franco", 'm', 0},
                                        {2, "Laura", 'f', 0},
                                        {3, "Ana", 'f', 0},
                                        {4, "Hernan", 'm', 0},
                                        {5, "Tomas", 'm', 0},
                                        {6, "Julia", 'f', 0},
                                        {7, "Alejandro", 'm', 0},
                                        {8, "Danilo", 'm', 0},
                                        {9, "Fernanda", 'f', 0},
                                        {10, "Olga", 'f', 0} };
    eTrabajo trabajos[TAMTR]  ={};




    char confirma;
    char seguir = 's';



    int proximoIdTrabajo = 1;
    int proximoIdBicicleta =1;
    int proximoIdCliente = 1;
    int flagAlta=0;
    int flagTrabajo =0;


    inicializarBicicletas(bicicletas, TAMB);
    inicializarTrabajos(trabajos, TAMTR);


    do{
		switch(menu()){


			case 1:
			if(altaBicicleta(proximoIdBicicleta, bicicletas, TAMB, tipos, TAMT, colores,TAMC, clientes, TAMCLIENTE, ruedas, TAMR) == 1)
                {

					proximoIdBicicleta++;
					proximoIdCliente++;
					flagAlta=1;
                }
				//mostrarBicicletas(bicicletas, TAMB, tipos, TAMT, colores, TAMC);
				system("pause");
				break;
			case 2:

				if(flagAlta == 0)
                {
                    printf("No se cargo ninguna bicicleta aun\n");
                    system("pause");
                }else{
                    modificarBicicletas(bicicletas, TAMB, tipos, TAMT, colores, TAMC, clientes, TAMCLIENTE, ruedas, TAMR);
                }

                //modificarNotebook(notebooks, TAMN, tipos, TAMT, marcas, TAMM, clientes, TAMCLIENTE);
				break;

			case 3:
			    if(flagAlta == 0)
                {
                    printf("No se cargo ninguna bicicleta aun\n");
                    system("pause");
                }else{
                    bajaBicicleta(bicicletas, TAMB, tipos, TAMT, colores, TAMC, clientes, TAMCLIENTE, ruedas, TAMR);
                }

                //bajaBicicleta(bicicletas, TAMB, tipos, TAMT, colores, TAMC);
				system("pause");
				break;

			case 4:
			    if(flagAlta == 0)
                {
                    printf("No se cargo ninguna bicicleta aun\n");
                    system("pause");
                }else{
                    ordenarBicicletas(bicicletas, TAMB, tipos, TAMT, colores, TAMC, clientes, TAMCLIENTE, ruedas, TAMR);
                }
                //ordenarBicicletas(bicicletas, TAMB, tipos, TAMT, colores, TAMC);
				system("pause");
				break;

			case 5:
				listarColores(colores, TAMC);
				system("pause");
				break;

			case 6:
				listarTipos(tipos, TAMT);
				system("pause");
				break;

			case 7:
                mostrarServicios(servicios, TAMS);
				system("pause");
				break;

			case 8:

			   if(flagAlta == 0)
                {
                printf("No hay ninguna bicicleta para cargar un trabajo\n");
                system("pause");
			   }else{
                 if(altaTrabajo(proximoIdTrabajo, bicicletas, TAMB, tipos, TAMT, colores, TAMC, servicios, TAMS, trabajos, TAMTR, clientes, TAMCLIENTE, ruedas, TAMR)){
				   proximoIdTrabajo++;
				   flagTrabajo = 1;
			       }
			   }
			   break;

			case 9:

			   if(flagTrabajo== 0)
                {
                    printf("No hay trabajos cargados\n");
                    system("pause");
			    }else{
			        mostrarTrabajos(trabajos, TAMTR, bicicletas, TAMB, servicios, TAMS);
                    system("pause");
			    }
			    //mostrarTrabajos(trabajos, TAMTR, notebooks, TAMN, servicios, TAMS);
                system("pause");
				break;
            case 10:
                informeBicicletas(bicicletas, TAMB, tipos, TAMT, colores, TAMC, trabajos, TAMTR, servicios, TAMS, clientes, TAMCLIENTE, ruedas, TAMR);
                system("pause");
                break;
			case 11:
				printf("Confirma salida?: Ingrese s o n \n");
				fflush(stdin);
				scanf("%c", &confirma);
				if(confirma == 's')
				{
					seguir = 'n';
				}
				break;
			default:
				break;
		}//fin switch
    }while(seguir == 's');

    return 0;
}
