/*
 * cencista.h
 *
 *  Created on: 26 may. 2022
 *      Author: augus
 */

#ifndef SRC_CENSISTA_H_
#define SRC_CENSISTA_H_

#define TAM_NOMBRE 50

struct Censista {
	int legajo;
	char nombre[TAM_NOMBRE];
	int edad;
	char telefono[10];
} typedef Censista;

void InicializarCensista(Censista* censistas, int len);
void ListarCensista(Censista* censistas, int len);
void AltaCensista(Censista* censistas, int len, int legajo, char nombre[], int edad, char telefono[]);
void BajaCensista(Censista* censistas, int len, int legajo);
void ModificarCensista(Censista* censistas, int len, int legajo, int edad, char telefono[], char nombre[]);
int ExisteCensista(Censista* censistas, int len, int legajo);

#endif /* SRC_CENSISTA_H_ */
