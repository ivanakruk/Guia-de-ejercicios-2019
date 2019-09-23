
int iniciarArray(int *pArray , int limite, int valor);
/** \brief INICIA UN ARRAY DE ENTEROS
 * * \param *pArray señala el vector a usar (array por referencia)
 * \param  limite- la cantidad de elementos que tiene el vector
 * \param valor- le que carga el valor a los elementos en cero si cumple la validacion
 * \return me devuelve los ceros cargados
 */

int MostrarArray(int *pArray , int limite);
/** \brief MUESTRA UN ARRAY DE ENTEROS
 * * \param *pArray señala el vector a usar (array por referencia)
 * \param  limite- la cantidad de elementos que tiene el vector
 * \
 */

int CargarArray(int *pArray,int limite,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);
/** \brief CARGA EL ARRAY DE ENTEROS
 * * \param *pArray señala el vector a usar (array por referencia)
 * \param  limite- la cantidad de elementos que tiene el vector
 * \param chars mensajes, minimo y max y reintentos que se encuentran dentro de la otra funcion que tienen dentro (getInt)
 * \return
 */

int minMaxArray(int* pArray,int limite,int* minimo,int* maximo);
/** \brief Descr: Busca el minimo y maximo en un array *
 * \param Array por referencia
 * \param Elementos del Array
 * \param minimo a devolver por referencia
 *\param maximo a devolver por referencia
 */

int SumaArray(int* pArray,int limite,int* resultado);
/** \brief ME SUMA TODOS LOS DATOS DE LOS INDICES DEL ARRAY POR REFERENCIA
 * \param  limite cantidad de elementos del vector
 * \return ME DEVUELVE EL TOTAL DE LA SUMA
 */



int PromedioArray(int* pArray,int limite,int* resultadoProm);
/** \brief ME SACA EL PROMEDIO DE UN VECTOR
 * * \param  el limite se va a usar para dividir la suma de todos los elementos y sacar el promedio
 * \return DEVUELVE RESUL PROMEDIO
 */

int OrdenaArray(int* pArray,int limite);
/** \brief ORDENA ARRAYS SEGUN SE NECESITE, MAYOR O MENOR POR SWAP
 * * \param limite solo para realizar las iteraciones
 * \param
 * \param
