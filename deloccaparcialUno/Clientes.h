#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

typedef struct {
    int id;
    char nombre[20];
    char sexo;
    int isEmpty;
}eCliente;

#endif // CLIENTES_H_INCLUDED
//------------------------------------------------------------------------------------------------------------------------

/** \brief Muestra un cliente
 *
 * \param eCliente array de clientes
 * \param tamCliente tamaño del array de clientes
 * \return
 *
 */

void mostrarCliente(eCliente cliente, int tamCliente);
//------------------------------------------------------------------------------------------------------------------------

/** \brief Muestra una lista de clientes
 *
 * \param eCliente array de clientes
 * \param tamCliente tamaño del array de clientes
 * \return
 *
 */

void mostrarClientes(eCliente clientes[], int tamCliente);
//------------------------------------------------------------------------------------------------------------------------

/** \brief Busca un cliente
 *
 * \param id id del cliente
 * \param eCliente array de clientes
 * \return tamCliente tamaño del array de clientes
 *
 */

int buscarCliente(int id, eCliente clientes[], int tamCliente);
//------------------------------------------------------------------------------------------------------------------------


/** \brief busca el nombre de un cliente por id
 *
 * \param nombre cadena de caracteres para el nombre
 * \param id id del cliente
  * \param eCliente array de cliente
 * \param tamCliente tamaño del array de clientes
 * \return
 *
 */

int cargarNombreCliente(char nombre[], int id, eCliente clientes[], int tamCliente);


