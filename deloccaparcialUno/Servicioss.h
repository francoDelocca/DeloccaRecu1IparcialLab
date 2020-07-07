#ifndef SERVICIOSS_H_INCLUDED
#define SERVICIOSS_H_INCLUDED
#include "Servicios.h"

/** \brief muestra un servicio
 *
 * \param eServicio array de servicios
 * \param tamServ tamaño del array de servicios
 * \return
 *
 */
void mostrarServicio(eServicio servicio, int tamServicios);

/** \brief muestra una lista de servicios
 *
 * \param eServicio array de servicios
 * \param tamServ tamaño del array de servicios
 * \return
 *
 */
void mostrarServicios(eServicio servicios[], int tamServicios);

/** \brief busca un servicio por id
 *
 * \param id id del servicio
 * \param eServicio array de servicios
 * \param tamServ tamaño del array de servicios
 * \return
 *
 */
int buscarServicio(int id, eServicio servicios[], int tamServ);
#endif // SERVICIOS_H_INCLUDED
