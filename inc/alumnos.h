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
/*! \brief Estructuras Alumnos.
 *         
 *  Se crea la estructura almunos_s con varias variables de tipo char.
 * 
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/
//! variable gloval externa.
extern const alumno_t ALUMNOS[];
//! variable gloval externa del tipo entero constante.
extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/
/*! \brief Funciones.
 *         
 *  Se crea la funciones SerializarAlumnos.
 *  @param argumento punteros del tipo char 
 *  @param argumento size_t de nombre espacio 
 *  @param argumento const almuno_t del tipo estructura
 *  @param argumento, del tipo entero nombre cantidad
 *  @ return resultado.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
