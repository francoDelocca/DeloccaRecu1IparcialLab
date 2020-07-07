#ifndef RUEDAS_H_INCLUDED
#define RUEDAS_H_INCLUDED

typedef struct {
    int id;
    char descripcion[20];
}eRueda;

#endif // CLIENTES_H_INCLUDED
//------------------------------------------------------------------------------------------------------------------------

/** \brief Muestra una rueda
 *
 * \param eRueda array de ruedas
 * \param tamRueda tamaño del array de ruedas
 * \return
 *
 */
void mostrarRueda(eRueda rueda, int tamRueda);
//------------------------------------------------------------------------------------------------------------------------

/** \brief Muestra una lista de ruedas
 *
 * \param eRuedas array de ruedas
 * \param tamRueda tamaño del array de ruedas
 * \return
 *
 */
void mostrarRuedas(eRueda ruedas[], int tamRuedas);
//------------------------------------------------------------------------------------------------------------------------

/** \brief Busca una rueda
 *
 * \param id id de la rueda
 * \param eRueda array de ruedas
 * \return tamRuedas tamaño del array de ruedas
 *
 */
int buscarRueda(int id, eRueda ruedas[], int tamRuedas);
//------------------------------------------------------------------------------------------------------------------------


/** \brief busca el nombre de una rueda por id
 *
 * \param nombre cadena de caracteres para el nombre
 * \param id id de la rueda
  * \param eRueda array de ruedas
 * \param tamRueda tamaño del array de ruedas
 * \return
 *
 */
int cargarNombreRueda(char nombre[], int id, eRueda ruedas[], int tamRuedas);



