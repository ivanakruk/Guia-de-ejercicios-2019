#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"
#include "InputsEstudiantes.h"
int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	int buffer;
	do
	{
		printf("%s",pMensaje);
		fflush(stdin);
		if(scanf("%d",&buffer)==1 && buffer >= minimo && buffer <= maximo)
		{
			*pResultado = buffer;
			retorno = 0;
			break;
		}
		printf("%s",pMensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorno;
}

