/*
 * vivienda.h
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */
#ifndef SRC_VIVIENDA_H_
#define SRC_VIVIENDA_H_

#define TAM_CALLE 25

struct vivienda {
	int idVivienda;
	char calle[TAM_CALLE];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda; //(1.CASA - 2.DEPARTAMENTO - 3.CASILLA - 4.RANCHO)
	int legajoCensista; //(debe existir) Validar
} typedef Vivienda;

void InicializarVivienda(Vivienda* viviendas, int len);
void ListarVivienda(Vivienda* viviendas, int len);
int AltaVivienda(Vivienda* viviendas, int len, int idVivienda, char calle[], int cantPersonas, int cantHabitaciones, int tipoVivienda, int legajoCensista);
void ModificarVivienda(Vivienda* viviendas, int len, int idVivienda, int modVivienda, int mod);
void ModificarCalle(Vivienda* viviendas, int len, int idVivienda, char calle[]);
int ExisteVivienda(Vivienda* viviendas, int len, int idVivienda);
int BajarVivienda(Vivienda* viviendas, int len, int idVivienda);

#endif /* SRC_VIVIENDA_H_ */
