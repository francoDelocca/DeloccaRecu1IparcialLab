#include "Bicicletas.h"
#include "Tipos.h"
#include "Colores.h"
#include "Trabajos.h"

/** \brief Carga un menu de opciones
 *
 * \param
 * \param
 * \return
 *
 */
char menuInformes();


/** \brief genera un switch con el menu de opciones de informes
 *
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
 * \param eTrabajo array de trabajos
 * \param tamTrabajo tamaño del array de trabajos
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */

void informeBicicletas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eTrabajo trabajos[], int tamTr, eServicio servicios[], int tamServ, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief lista bicicletas por tipo
 *
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
void listarBicicletasDeTipo(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief lista bicicletas por color
 *
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
void listarBicicletasDeColor(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief informa cual es el menor rodado
 *
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
void informarMenorRodadoBicicleta(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief informa bicicletas separadas por tipo
 *
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
void informarBicicletasXTipo(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief lista bicicletas segun el color y tipo seleccionado
 *
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
void mostrarBicicletasPorColorYTipo(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColor, eTipo tipos[], int tamTipo, eRueda ruedas[], int tamRuedas);

/** \brief obtiene la cantidad de bicicletas con el id del color X
 *
 * \param idColor id del color elegido
 * \param eBicicleta array de bicicletas
 * \param tamB tamaño del array de bicicletas
 * \return
 *
 */
int obtenerTotalColoresBicicletas(int idColor, eBicicleta bicicletas[], int tamB);

/** \brief informa cual es el color mas usada por los clientes
 *
 * \param eBicicleta array de bicicletas
 * \param tamB tamaño del array de bicicletas
 * \param eColor array de colores
 * \param tamColor tamaño del array de colores
 * \return
 *
 */
void informarMayorColor (eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores);

/** \brief Pide una bicicleta y muestra todos los trabajos que se le hicieron
 *
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eTrabajo array de trabajos
 * \param tamTrab tamaño del array de trabajos
 * \param eServicios array de servicios
 * \param tamServicios tamaño del array de servicios
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void informarTrabajosDeBicicletas (eTrabajo trabajos[], int tamTr, eBicicleta bicicletas[], int tamBici, eTipo tipos[], int tamTipo, eServicio servicios[], int tamServ, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief Pide un servicio y muestra las bicicletas a las que se le realizo ese servicio y la fecha
 *
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTrabajo array de trabajos
 * \param tamTrab tamaño del array de trabajos
 * \param eServicios array de servicios
 * \param tamServicios tamaño del array de servicios
 * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void informarBicicletasDeServicio(eBicicleta bicicletas[], int tamB, eServicio servicios[], int tamS, eTrabajo trabajos[], int tamTr, eRueda ruedas[], int tamRuedas);

/** \brief Pide una fecha y muestra todos los servicios realizados en la misma
 *
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTrabajo array de trabajos
 * \param tamTrab tamaño del array de trabajos
 * \param eServicios array de servicios
 * \param tamServicios tamaño del array de servicios
 * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void listarBicicletasPorFechaTrabajo(eBicicleta bicicletas[], int tam, eTrabajo trabajos[], int tamTrab, eServicio servicios[], int tamServ, eRueda ruedas[], int tamRuedas);

/** \brief Pide una bicicleta e informa la suma de los importes de los servicios que se le hicieron a la misma
 *
 * \param eBicicleta
 * \param tam tamaño del array de bicicletas
 * \param eTipo array de tipos
 * \param tamTipos tamaño del array de tipos
  * \param eColor array de color
 * \param tamColores tamaño del array de colores
  * \param eTrabajo array de trabajos
 * \param tamTrab tamaño del array de trabajos
 * \param eServicios array de servicios
 * \param tamServicios tamaño del array de servicios
  * \param eClientes array de clientes
 * \param tamClientes tamaño del array de clientes
  * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */
void preciosServiciosBicicletas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipos, eColor colores[], int tamColor, eTrabajo trabajos[], int tamTrabajos, eServicio servicios[], int tamServicio, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief informa bicicletas segun la rueda elegida
 *
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
void listarBicicletasXRuedas(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief informa cual es la rueda mas usada por los clientes
 *
 * \param eBicicleta array de bicicletas
 * \param tamB tamaño del array de bicicletas
 * \param eRueda array de ruedas
 * \param tamRuedas tamaño del array de ruedas
 * \return
 *
 */

void informarMayorRueda (eBicicleta bicicletas[], int tamB, eRueda ruedas[], int tamRuedas);

/** \brief obtiene la cantidad de bicicletas con el id de rueda X
 *
 * \param idRueda id de la rueda elegida
 * \param eBicicleta array de bicicletas
 * \param tamB tamaño del array de bicicletas
 * \return
 *
 */

int obtenerTotalRuedasBicicletas(int idRueda, eBicicleta bicicletas[], int tamB);

/** \brief informa las bicicletas separadas por tipo de rueda
 *
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
void informarBicicletasXRueda(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);

/** \brief lista las bicicletas con el color y el tipo de rueda solicitada
 *
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
void mostrarBicicletasPorColorYRueda(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColor, eTipo tipos[], int tamTipo, eRueda ruedas[], int tamRuedas);

/** \brief lista las bicicletas por los clientes
 *
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
void listarBicicletasXCliente(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamTipo, eColor colores[], int tamColores, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);


/** \brief informa cual es el mayor rodado
 *
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
void informarMayorRodadoBicicleta(eBicicleta bicicletas[], int tamB, eColor colores[], int tamColores, eTipo tipos[], int tamTipo, eCliente clientes[], int tamCliente, eRueda ruedas[], int tamRuedas);
