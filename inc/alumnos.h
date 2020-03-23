/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

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

//! Estructura para guardar los datos del alumno
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[13];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

//! Arreglo de tipo alumno_t para almaceran la lista de alumnos
extern const alumno_t ALUMNOS[];

//! Cantidad de alumnos
extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Funcion para serializar cada alumno a JSON
 * @param cadena Cadena de caracteres donde se guardara el alumno serializado
 * @param espacio Tamaño de la cadena de caracteres
 * @param alumno Alumno que se requiere serializar
 * @return true si se pude serializar
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Funcion para serializar cierta cantidad de alunmos a JSON
 * @param cadena Cadena de caracteres donde se guardara JSON con todos los alumnos
 * @param espacio Tamaño de la cadena de caracteres
 * @param alumnos Arreglo de alumnos que se requiere serializar
 * @param cantidad Cantidad de alumnos que se quieren serializar
 * @return true si se pude serializar
 */
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
