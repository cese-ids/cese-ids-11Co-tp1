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
 * @brief FUNCION QUE IMPRIME DATOS BÁSICOS DE UN ALUMNO EN PARTICULAR
 * 
 * @param[in]  cadena      Puntero a espacio de memoria a desplegar en texto
 * @param[in]  espacio     Numero de caracteres 
 * @param[in]  alumno      Estructura con los datos del alumno
 * @return                 Error en la ejecución de la función booleano
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);


/**
 * @brief FUNCION QUE IMPRIME DATOS BÁSICOS DE VARIOS ALUMNOS 
 * 
 * @param[in]  cadena      Puntero a espacio de memoria a desplegar en texto
 * @param[in]  espacio     Numero de caracteres 
 * @param[in]  alumnos[]   lista con estructuras de alumnos 
 * @return                 Error en la ejecución de la función booleano
 */

bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
