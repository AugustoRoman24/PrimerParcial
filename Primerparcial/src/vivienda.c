/*
 * vivienda.c
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */
#include <string.h>
#include "vivienda.h"
#include <stdio.h>

void InicializarVivienda(Vivienda* viviendas, int len) {
	for (int i = 0; i < len; i++) {
		viviendas[i].idVivienda = 0;
		viviendas[i].cantidadPersonas = 0;
		viviendas[i].cantidadHabitaciones = 0;
		viviendas[i].tipoVivienda = 0;
		viviendas[i].legajoCensista = 0;
	}
}
void ListarVivienda(Vivienda* viviendas, int len) {
	for (int i = 0; i < len; i++) {
		if (viviendas[i].idVivienda > 0) {
			printf("\n Id Vivienda %d", viviendas[i].idVivienda);
			printf("\n Calle: %s", viviendas[i].calle);
			printf("\n Cantidad de personas: %d", viviendas[i].cantidadHabitaciones);
			printf("\n Cantidad de habitaciones: %d", viviendas[i].cantidadPersonas);
			printf("\n Tipo Vivienda: %d", viviendas[i].tipoVivienda);
			printf("\n Legajo Censista: %d", viviendas[i].legajoCensista);
		}
	}
}
int AltaVivienda(Vivienda* viviendas, int len, int idVivienda, char calle[], int cantPersonas, int cantHabitaciones, int tipoVivienda, int legajoCensista) {
	for (int i = 0; i < len; i++) {
		if (viviendas[i].idVivienda == 0) {
			viviendas[i].idVivienda = idVivienda;
			strcpy(viviendas[i].calle, calle);
			puts(viviendas[i].calle);
			viviendas[i].cantidadPersonas = cantPersonas;
			viviendas[i].cantidadHabitaciones = cantHabitaciones;
			viviendas[i].tipoVivienda = tipoVivienda;
			viviendas[i].legajoCensista = legajoCensista;
			return 1;
		}
	}
	return 0;
}
/*
 * Modifica la vivienda, el parametro mod sirve para la cantidad de personas, el tipo y la cantidad de habitaciones
 */
void ModificarVivienda(Vivienda* viviendas, int len, int idVivienda, int modVivienda, int mod)
{
	for (int i = 0; i < len; i++) {
			if (viviendas[i].idVivienda == idVivienda) {
				switch (modVivienda) {
				case 2:
					viviendas[i].cantidadPersonas = mod;
					break;

				case 3:
					viviendas[i].cantidadHabitaciones = mod;
										break;

				case 4:
					viviendas[i].tipoVivienda = mod;
					break;
				}
			}
	}
}
void ModificarCalle(Vivienda* viviendas, int len, int idVivienda, char calle[]) {
	for (int i = 0; i < len; i++) {
			if (viviendas[i].idVivienda == idVivienda) {
					strcpy(viviendas[i].calle, calle);
					puts(viviendas[i].calle);
			}
	}
}
int ExisteVivienda(Vivienda* viviendas, int len, int idVivienda) {
	for (int i = 0; i < len; i++) {
			if (viviendas[i].idVivienda == idVivienda) {
					return 1;
			}
	}
	return 0;
}
int BajarVivienda(Vivienda* viviendas, int len, int idVivienda)
{
	for (int i = 0; i < len; i++) {
			if (viviendas[i].idVivienda == idVivienda) {
				viviendas[i].idVivienda = 0;
				viviendas[i].cantidadPersonas = 0;
				viviendas[i].cantidadHabitaciones = 0;
				viviendas[i].tipoVivienda =0;
				viviendas[i].legajoCensista = 0;
				return 1;
			}
	}
	return 0;
}
