/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_   /*! @cond    */
#define _ALUMNOS_H_   /*! @endcond */

/** @file alumnos.h
 ** @brief Declaraciones de las funciones que serializa los alumnos.
 **
 **| REV | YYYY.MM.DD | Autor           | Descripción de los cambios                              |
 **|-----|------------|-----------------|---------------------------------------------------------|
 **|   1 | 2020.03.17 | Vittori         | Version inicial del archivo de serializar alumnos       |
 **
 ** @addtogroup indices
 ** @{ */

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

//! Tipo de datos para obtener los datos del alumno
typedef struct alumno_s {
    char apellidos[30];			//!< Cadena de caracteres para contener el apellido
    char nombres[30];			//!< Cadena de caracteres para contener los nombres			
    char documento[11];			//!< Cadena de caracteres para contener el DNI
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

extern const alumno_t ALUMNOS[];

extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Función para crear cadena de texto con los datos de un alumno.
 * 
 * @param[in]  cadena	Puntero a la cadena de texto a formar
 * @param[in]  espacio	Cantidad de caracteres de la cadena
 * @param[in]  alumno	Alumno a procesar
 * @return     True	El alumno se serializo sin errores
 * @return     False	El alumno no se pudo serializar
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Función para crear cadena de texto con los datos de todos los alumnos.
 * 
 * @param[in]  cadena	Puntero a la cadena de texto a formar
 * @param[in]  espacio	Cantidad de caracteres de la cadena
 * @param[in]  alumno	Alumnos a procesar
 * @param[in]  cantidad	Cantidad de alumnos a procesar
 * @return     True	Se forma la lista completa de alumnos
 * @return     False	Error de formato.
 */
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

/** @} Final de la definición del modulo para doxygen */

#endif /* _ALUMNOS_H_ */
