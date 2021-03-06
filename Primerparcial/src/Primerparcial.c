/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cencista.h"
#include "vivienda.h"
#include "input-UTN.h"

#define TAM_LISTA_CENSISTAS 100
#define TAM_LISTA_VIVIENDAS 100
int main(void) {

	setbuf(stdout, NULL);
	int opcion;
	int idVivienda = 20000;

	Censista censistas[TAM_LISTA_CENSISTAS] =
			{ { 100, "Ana", 34, "1203-2345" },{ 101, "Juan", 24, "4301-54678" }, { 102, "Sol", 47,"5902-37487" } };
	InicializarCensista(censistas, TAM_LISTA_CENSISTAS);

	Vivienda viviendas[TAM_LISTA_VIVIENDAS];
	InicializarVivienda(viviendas, TAM_LISTA_VIVIENDAS);

	do {

		printf("\nMenu:"
				"\n1-ALTA VIVIENDA."
				"\n2-MODIFICAR VIVIENDA."
				"\n3-BAJA VIVIENDA."
				"\n4-LISTAR VIVIENDAS."
				"\n5-LISTAR CENSISTAS."
				"\n6-MOSTRAR CENSISTAS POR VIVIENDA."
				"\n7-SALIR");

		scanf("%d", &opcion);
		fflush(stdin);

		switch (opcion) {
		case 1:
			char calle[100];
			utn_getCadena(calle, "Ingrese la calle y la altura de la vivienda",
					"\nERROR: No se han ingresado datos para la calle");

			int cantPersonas;
			utn_getNumero(&cantPersonas, "Ingrese la cantidad de personas ",
					"El numero ingresado no es correcto", 1, 3000, 3);

			int cantHabitaciones;
			utn_getNumero(&cantHabitaciones,
					"Ingrese la cantidad de habitaciones ",
					"El numero ingresado no es correcto", 1, 3000, 3);

			int tipoVivienda;
			utn_getNumero(&tipoVivienda, "Ingrese el tipo de vivienda"
					"\n1) CASA"
					"\n2)DEPARTAMENTO"
					"\n3)CASILLA"
					"\n4) RANCHO\n",
					"El numero ingresado debe estar entre 1 y 4", 1, 4, 3);

			int legajoCensista;
			int existeCensista = 0;
			utn_getNumero(&legajoCensista,
					"Ingrese el numero de legajo del censista",
					"El numero ingresado no es correcto", 1, 100000, 3);

			existeCensista = ExisteCensista(censistas, TAM_LISTA_CENSISTAS,
					legajoCensista);

			if (existeCensista == 0) {
				printf("No existe ningun censista con el legajo ingresado");
				break;
			}

			if (idVivienda > 0) {
				AltaVivienda(viviendas, TAM_LISTA_VIVIENDAS, idVivienda, calle,
						cantPersonas, cantHabitaciones, tipoVivienda,
						legajoCensista);
				idVivienda++;
			}
			break;
		case 2:
			printf("\nMODIFICAR:"
					"\n1-CALLE."
					"\n2-CANTIDAD DE HABITACIONES."
					"\n3-CANTIDAD DE PERSONAS."
					"\n4-TIPO DE VIVIENDA.");
			int mod = 0;

			utn_getNumero(&mod, "\nIngrese la opcion a modificar de 1 a 4",
					"\nLa opcion elegida no es valida", 1, 4, 3);

			int idVivienda;
			int existeVivienda = 0;

			utn_getNumero(&idVivienda, "\nIngrese la ID de la vivienda",
					"\nLa opcion elegida no es valida", 2000, 300000, 3);
			existeVivienda = ExisteVivienda(viviendas, TAM_LISTA_VIVIENDAS,
					idVivienda);

			if (existeVivienda == 0) {
				printf("No existe una vivienda con la id Ingresada");
				break;
			}

			switch (mod) {
			case 1:
				char calle[100];
				utn_getCadena(calle,
						"Ingrese la calle y la altura de la vivienda",
						"ERROR: No se han ingresado datos para la calle");
				ModificarCalle(viviendas, TAM_LISTA_VIVIENDAS, idVivienda,calle);
				break;

			case 2:
				int cantHabitaciones;
				utn_getNumero(&cantHabitaciones,
						"Ingrese la cantidad de habitaciones",
						"La opcion elegida no es valida", 1, 100, 3);
				ModificarVivienda(viviendas, TAM_LISTA_VIVIENDAS, idVivienda,mod, cantHabitaciones);
				break;

			case 3:
				int cantPersonas ;
				utn_getNumero(&cantPersonas, "Ingrese la cantidad de personas",
						"La opcion elegida no es valida", 1, 100, 3);
				ModificarVivienda(viviendas, TAM_LISTA_VIVIENDAS, idVivienda,
						mod, cantPersonas);
				break;
			case 4:
				int tipoVivienda;
				utn_getNumero(&tipoVivienda, "Ingrese el tipo de vivienda"
						"\n1) CASA"
						"\n2)DEPARTAMENTO"
						"\n3)CASILLA"
						"\n4) RANCHO",
						"\nEl numero ingresado debe estar entre 1 y 4", 1, 4,
						3);
				ModificarVivienda(viviendas, TAM_LISTA_VIVIENDAS, idVivienda,
						mod, tipoVivienda);}
				break;

			break;

		case 3:

			int id;
			int existe = 0;

			utn_getNumero(&id, "\nIngrese la ID de la vivienda",
								"\nLa opcion elegida no es valida", 2000, 300000, 3);
						existe = ExisteVivienda(viviendas, TAM_LISTA_VIVIENDAS,id);

						if (existe == 0) {
							printf("No existe una vivienda con la id Ingresada");
							break;
						}

						int borrado =0;
						borrado = BajarVivienda(viviendas, TAM_LISTA_VIVIENDAS, id);
						if(borrado == 1){
							printf("\nSe ha borrado la vivienda");
						}
			break;
		case 4:
			ListarVivienda(viviendas, TAM_LISTA_VIVIENDAS);
			break;

		case 5:
			ListarCensista(censistas, TAM_LISTA_CENSISTAS);
			break;

		case 6:
			ListarCensistasPorViviendas(censistas,viviendas, TAM_LISTA_VIVIENDAS);
			break;
		case 7:
			break;
		}


	} while (opcion != 7);

	return 0;
}
