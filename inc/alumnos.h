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
 *@file alumnos.h
 *@version 1.0.0
 *@brief archivo donde se declaran prototipo de funciones para manejar los datos dele alumno
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
 *@brief Estructura que guarda los datos de un alumno
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
 *@brief Funcion para covertir la estructura en un string para poder imprimir
 *@param cadena se usa para almacenar cadenas de caracteres
 *@param espacio seginacion de espacio para la cedena de caracteres
 *@param alumno datos de alumno
 *@return retorna true cuando se logra imprimir los datos del alumno
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 *@brief funcion para mostrar a todos los datos del array de alumnos
 *@param cadena se usa para almacenar caracteres
 *@param espacio seginacion de espacio para la cedena de caracteres
 *@param alumnos datos de alumno
 *@param cantidad determina cantidad de elementos en la cadena
 *@return retorna true cuando se logra imprimir los datos del alumno
*/

bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
