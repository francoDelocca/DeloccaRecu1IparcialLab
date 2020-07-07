#ifndef COLORES_H_INCLUDED
#define COLORES_H_INCLUDED
#include "Servicios.h"
typedef struct{
    int id;
    char nombreColor[20];
}eColor;
#endif // COLORES_H_INCLUDED

/** \brief Muestra una lista de colores
 *
 * \param eColores array de colores
 * \param tamColores tamaño del array de colores
 * \return
 *
 */
void listarColores(eColor colores[], int tamColores);

/** \brief busca el nombre de un color por id
 *
 * \param nombre cadena de caracteres para el nombre
 * \param id id del color
  * \param eColor array de color
 * \param tamColor tamaño del array de colores
 * \return
 *
 */
void cargarNombreColor (char nombreColor[], int id, eColor colores[], int tamColores);
