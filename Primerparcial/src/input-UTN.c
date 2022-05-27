/*
 * input-UTN.c
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */

#include <stdio.h>
#include <string.h>
#include "input-UTN.h"

int utn_getCadena(char pResultado[], char* mensaje, char* mensajeError) {


	printf(mensaje);

	fgets(pResultado, 25, stdin);
	//scanf("%s", pResultado);
	fflush(stdin);

	if (strlen(pResultado) == 0) {
		printf(mensajeError);
		return -1;
	}

	return 0;
}
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError,
		int minimo, int maximo, int reintentos) {
	int num;
	while (reintentos > 0) {
		printf(mensaje);

		scanf("%d", &num);
		fflush(stdin);

		if (num <= maximo && num >= minimo)
			break;

		reintentos--;
		printf(mensajeError);
	}
	if (reintentos == 0) {
		return -1;
	} else {
		*pResultado = num;
		return 0;
	}
	return 0;
}
int esNumerica(char* cadena) {
	int i = 0;
	int retorno = 1;
	if (cadena != NULL && strlen(cadena) > 0) {
		while (cadena[i] != '\0') {
			if (cadena[i] < '0' || cadena[i] > '9') {
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}
