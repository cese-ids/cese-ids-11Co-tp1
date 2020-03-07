/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/
/**
 * @file alumnos.h
 * @version 1.0
 * @brief definicion de funciones y estructuras para guardar y manejar los datos 
 * de los alumnos.
 */
#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
/**
 * @struct alumno_s
 * @brief Estructura donde se guardaran los datos de un alumno
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

extern const alumno_t ALUMNOS[];

extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 *@brief SerializarAlumno construye una cadena con los datos de un alumno
 *y imprime dichos datos en pantalla
 *@param cadena es la cadena donde en la que se pondran los datos de un alumno
 *@param espacio es la cantidad de bytes que posee cadena 
 *@param alumno es la estructura con los datos del alumno que se desean imprimir
 *@return la funcion retorna true cuando la cadena de con los datos del alumno a sido creada
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief SerializarAlumnos immprime los datos de varios alumnos guardados en un array
 * de alumnos apoyandose en la funcion SerializarAlumno
 * @param cadena es la cadena donde en la que se pondran los datos de un alumno
 * @param espacio es la cantidad de bytes que posee cadena
 * @param alumnos es el array de alumnos que se desea imprimir en pantalla
 * @param cantidad es numero de elementos que posee el array alumnos
 */
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
