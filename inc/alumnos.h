/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/** @file alumnos.h
 ** @brief Archivo de datos de los alumnos.
 ** @addtogroup Alumnos
 ** @{ */

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

//! Definicion de la estructura de alumnos
typedef struct alumno_s {
    char apellidos[30];  //!< Apellidos
    char nombres[30];    //!< Nombrers
    char documento[11];  //!< Documento de Identidad
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/


extern const alumno_t ALUMNOS[];


extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

//! Declaración de prototipos de función

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
