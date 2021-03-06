/*
 * vivienda.h
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */
#ifndef SRC_VIVIENDA_H_
#define SRC_VIVIENDA_H_

#define TAM_CALLE 25
#define TAM_NOMBRE 50

struct vivienda {
	int idVivienda;
	char calle[TAM_CALLE];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda; //(1.CASA - 2.DEPARTAMENTO - 3.CASILLA - 4.RANCHO)
	int legajoCensista; //(debe existir) Validar

} typedef Vivienda;

/***
 * @fn void InicializarVivienda(Vivienda*, int)
 * @brief ingresa una vivienda
 * @param viviendas arrays de viviendas
 * @param len largo de un array
 */
void InicializarVivienda(Vivienda* viviendas, int len);
/***
 * @fn void ListarVivienda(Vivienda*, int)
 * @brief muestra los datos de la vivienda
 * @param viviendas
 * @param len
 */
void ListarVivienda(Vivienda* viviendas, int len);
/***
 * @fn int AltaVivienda(Vivienda*, int, int, char[], int, int, int, int)
 * @brief toma los datos de la vivienda
 * @param viviendas array de viviendas
 * @param len largo del array
 * @param idVivienda genera id de la vivienda
 * @param calle toma la direccion de la vivienda
 * @param cantPersonas toma la cantidad de personas en la vivienda
 * @param cantHabitaciones toma la cantida de habitaciones en la vivienda
 * @param tipoVivienda toma el tipo de vivienda
 * @param legajoCensista toma el legajo del cencista
 * @return retorna 1
 */
int AltaVivienda(Vivienda* viviendas, int len, int idVivienda, char calle[], int cantPersonas, int cantHabitaciones, int tipoVivienda, int legajoCensista);
/***
 * @fn void ModificarVivienda(Vivienda*, int, int, int, int)
 * @brief modifica los datos de la vivienda
 * @param viviendas
 * @param len
 * @param idVivienda
 * @param modVivienda
 * @param mod
 */
void ModificarVivienda(Vivienda* viviendas, int len, int idVivienda, int modVivienda, int mod);
void ModificarCalle(Vivienda* viviendas, int len, int idVivienda, char calle[]);
int ExisteVivienda(Vivienda* viviendas, int len, int idVivienda);
int BajarVivienda(Vivienda* viviendas, int len, int idVivienda);



#endif /* SRC_VIVIENDA_H_ */
