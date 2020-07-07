#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED
#include "Servicios.h"
typedef struct{
    int id;
    char descripcion[20];
}eTipo;
#endif // TIPOS_H_INCLUDED

/** \brief Muestra una lista de tipos
 *
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
 * \return
 *
 */
void listarTipos(eTipo tipos[], int tamTipos);

/** \brief busca la descripcion de un tipo por id
 *
 * \param descripcion cadena de caracteres para la descripcion
 * \param id id del tipo
  * \param eTipo array de tipo
 * \param tamTipo tamaño del array de tipos
 * \return
 *
 */
void cargarDescripcionTipo (char descripcion[], int id, eTipo tipos[], int tamTipo);
