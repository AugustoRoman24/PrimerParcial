/*
 * cencista.h
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */

#ifndef SRC_CENSISTA_H_
#define SRC_CENSISTA_H_
#include <vivienda.h>

#define TAM_NOMBRE 50


struct Censista {
	int legajo;
	char nombre[TAM_NOMBRE];
	int edad;
	char telefono[10];
	Vivienda vivienda;
} typedef Censista;


/***
 * @fn void InicializarCensista(Censista*, int)
 * @brief funcion para poder ingresar un censista
 * @param censistas toma el legajo del censista
 * @param len largo de un array
 */
void InicializarCensista(Censista* censistas, int len);
/***
 * @fn void ListarCensista(Censista*, int)
 * @brief array de cencistas
 * @param censistas array de censistas
 * @param len largo del array
 */
void ListarCensista(Censista* censistas, int len);
/***
 * @fn void AltaCensista(Censista*, int, int, char[], int, char[])
 * @brief toma los datos del cencista
 * @param censistas array de censistas
 * @param len largo del array
 * @param legajo toma el legajo del cencista
 * @param nombre toma nombre del cencista
 * @param edad del cencista
 * @param telefono toma telefono del cencista
 */
void AltaCensista(Censista* censistas, int len, int legajo, char nombre[], int edad, char telefono[]);
/***
 * @fn void BajaCensista(Censista*, int, int)
 * @brief da de baja al censista
 * @param censistas  array de censista
 * @param len largo del array
 * @param legajo borra legajo
 */
void BajaCensista(Censista* censistas, int len, int legajo);
/***
 * @fn void ModificarCensista(Censista*, int, int, int, char[], char[])
 * @brief esta funcion modifica los datos del cencista
 * @param censistas  recorre el array de censistas
 * @param len
 * @param legajo modifica el legajo del cencista
 * @param edad modifica la edad del cencista
 * @param telefono modifica el telefono del cencista
 * @param nombre modifica el nombre del cencista
 */
void ModificarCensista(Censista* censistas, int len, int legajo, int edad, char telefono[], char nombre[]);
/***
 * @fn int ExisteCensista(Censista*, int, int)
 * @brief verifica si hay un censista cargado
 * @param censistas recorre el array de cencistas
 * @param len largo del array
 * @param legajo legajo del censista
 * @return
 */
int ExisteCensista(Censista* censistas, int len, int legajo);
void ListarCensistasPorViviendas(Censista* censistas, int len);

#endif /* SRC_CENSISTA_H_ */
