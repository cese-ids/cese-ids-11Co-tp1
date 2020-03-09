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

//! Estructura de datos del alumnos
typedef struct alumno_s {
    char apellidos[30];	//!<Vercor de caracteres que contiene el apellido
    char nombres[30];	//!< Vercor de caracteres que contiene el nombre completo
    char documento[11]; //!< Vercor de caracteres que contiene el número de documento 
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

extern const alumno_t ALUMNOS[]; /*!< Listado de los alumnos con sus datos */


extern const int CANTIDAD_ALUMNOS; /*!< Variable que indica la cantidad de alumnos */

/*=====[Prototypes (declarations) of public functions]=======================*/

/*! \brief Función para completar un JSON con los datos del alumno
 *
 * \param[in,out] cadena: Cadena de caracteres que contendra el JJSON cargado
 * \param[in] 	  espacio: Tamaño de la cadena de caracteres disponible 
 * \param[in] 	  alumno: estructuta tipo alumno_t que contiene todos los datos que tendra el JSON
 *
 * \return Retorna TRUE si se pudo completar el JSON, de lo controría devuelve FALSE
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/*! \brief Función para recorre todo el listado de alumnos y
 *  completar en una lista de JSON con los datos de cada alumno
 *
 * \param[in,out] cadena: Vector de caracteres que contendra el JSON cargado
 * \param[in]     espacio: Tamaño de la cadena de caracteres disponible 
 * \param[in] 	  alumnos[]: Vector de  estructuta tipo alumno_t que contiene todos los alumnos del curso con sus datos
 * \param[in] 	  cantidad: Cantidad de alumnos que hay en el curso
 *
 * \return Retorna TRUE si se pudo completar el JSON, de lo controría devuelve FALSE
 */
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
