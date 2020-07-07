#include "Tipos.h"
#include "Colores.h"
#include "Servicios.h"
#include "Clientes.h"
#include "Servicioss.h"
#include "Ruedas.h"
#ifndef BICICLETAS_H_INCLUDED
#define BICICLETAS_H_INCLUDED
typedef struct{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int idCliente;
    int idRueda;
    float rodado;
    int isEmpty;
}eBicicleta;

#endif // BICICLETAS_H_INCLUDED

/** \brief Da de alta una bicicleta
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */

int altaBicicleta(int idBici, eBicicleta bicicletas[], int tam, eTipo tipos[], int tamTipos, eColor colores[], int tamColores, eCliente clientes[], int tamCliente , eRueda ruedas[], int tamRuedas);

//------------------------------------------------------------------------------------------------------------------------

/** \brief modifica una bicicleta
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void modificarBicicletas(eBicicleta bicicletas[], int tam, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);


/** \brief muestra un menu para modificar las bicicletas
 *
 * \param
 * \param
 * \return
 *
 */

int menuModificar();


/** \brief Da de alta una bicicleta
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void ordenarBicicletas(eBicicleta bicicletas[], int tam, eTipo tipos[], int tamTipo, eColor colores[], int tamColor, eCliente clientes[], int tamCliente , eRueda ruedas[], int tamRuedas);




/** \brief busca una bicicleta
 *
 * \param int id id de la bicicleta
 * \param eBicicleta array de bicicletas
 * \param int tam tamaño del array de bicicletras
 * \return
 *
 */

int buscarBicicleta(int id, eBicicleta bicicletas[], int tam);


/** \brief muestra el array de bicicletas
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void mostrarBicicletas(eBicicleta bicicletas[], int tam, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);


/** \brief inicializa el array de bicicletas
 *
 * \param eBicicletras array de bicicletas
 * \param int tam tamaño del array de bicicletras
 * \return
 *
 */

void inicializarBicicletas(eBicicleta bicicletas[], int tam);

/** \brief muestra una bicicleta
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void mostrarBicicleta(eBicicleta bici, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief Crea un menu de opciones
 *
 * \param
 * \param
 * \return
 *
 */

int menu();

/** \brief Da de baja una bicicleta
 *
 * \param int idBici
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void bajaBicicleta(eBicicleta bicicletas[], int tam, eTipo tipos[], int tamTipo, eColor colores[], int tamColor, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);


