/*
 * cencista.c
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */
#include "cencista.h"
#include <stdio.h>
#include <string.h>
#include "vivienda.h"


void InicializarCensista(Censista* censistas, int len) {
	for (int i = 3; i < len; i++) {
		censistas[i].legajo = 0;
		censistas[i].edad = 0;

	}
}
void ListarCensista(Censista* censistas, int len) {
	//censista[0] nombre = "Jose", edad "33"
	//censista[1].nombre = "Pedro", edad "25"
	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo > 0) {
			printf("\n Censista %d", i);
			printf("\n Legajo: %d", censistas[i].legajo);
			printf("\n Nombre: %s", censistas[i].nombre);
			printf("\n Edad: %d", censistas[i].edad);
			printf("\n Telefono: %s", censistas[i].telefono);
		}
	}
}
void AltaCensista(Censista* censistas, int len, int legajo, char nombre[], int edad, char telefono[]) {
	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo == 0) {
			censistas[i].legajo = legajo;
			censistas[i].edad = edad;
			strcpy(censistas[i].telefono, telefono);
			strcpy(censistas[i].nombre, nombre);
		}
	}
}
void BajaCensista(Censista* censistas, int len, int legajo) {
	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo == legajo) {
			censistas[i].legajo = 0;
			censistas[i].edad = 0;

		}
	}
}
void ModificarCensista(Censista* censistas, int len, int legajo, int edad, char telefono[], char nombre[]) {
	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo == legajo) {
			censistas[i].edad = edad;
			strcpy(censistas[i].nombre, nombre);
			strcpy(censistas[i].telefono, telefono);

		}
	}
}
/*
 * Retorna 1 si existe el censista de lo contrario retorna 0.
 */
int ExisteCensista(Censista* censistas, int len, int legajo) {
	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo == legajo) {
			return 1;
		}
	}
	return 0;
}
void ListarCensistasPorViviendas(Censista* censistas, int len) {

	for (int i = 0; i < len; i++) {
		if (censistas[i].legajo > 0) {
			printf("\n Censista %d", i);
			printf("\n Legajo: %d", censistas[i].legajo);
			printf("\n Nombre: %s", censistas[i].nombre);
			printf("\n Edad: %d", censistas[i].edad);
			printf("\n Telefono: %s", censistas[i].telefono);
			printf("\n Id vivienda: %d",  censistas[i].vivienda.idVivienda);
			printf("\n calle: %s", censistas[i].vivienda.calle);
			printf("\n cantidad de habitantes: %d", censistas[i].vivienda.cantidadPersonas);
			printf("\n cantidad de habitaciones: %d", censistas[i].vivienda.cantidadHabitaciones);
			printf("\n tipo de vivienda: %d", censistas[i].vivienda.tipoVivienda);


		}
	}
}

