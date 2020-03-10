/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}

/*=====[Implementations of private functions]================================*/

bool CarlosGermanCarrenoRomano(char* cadena, size_t espacio){
	struct alumno_s alumno = {
		.apellidos = "CARRENO ROMANO",
		.nombres = "Carlos German",
		.documento = "32342193",
	};
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JoseMauricioLara(char * cadena, size_t espacio) {
        static const struct alumno_s ALUMNO = {
        .apellidos = "LARA TAPIA",
        .nombres = "JOSE MAURICIO",
        .documento = "88.537.78",
    };
    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool FelipeSarche(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "SARCHE CARRION",
        .nombres = "Felipe Esteban",
        .documento = "171957",
    };
    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool RaulCamacho(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "CAMACHO",
        .nombres = "Raul Alejandro",
        .documento = "75.656.530",
        };

	return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool JoseDanielLopez(char * cadena, size_t espacio) {
	struct alumno_s alumno = {
		.apellidos = "LÓPEZ",
		.nombres = "José Daniel",
		.documento = "20.010.452",
	};

	return SerializarAlumno(cadena, espacio, &alumno);
}

bool HanesSciarrone(char * cadena, size_t espacio) {
    struct alumno_s alumno = {
        .apellidos = "SCIARRONE",
        .nombres = "Hanes Nahuel",
        .documento = "37.867.564",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AlejandroPermingeat(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "29.072.387",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool MonzonLanguascoLucas(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "MONZONLANGUASCO",
        .nombres = "Lucas",
        .documento = "38.876.668",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool FedericoPacher(char * cadena, size_t espacio) {
    struct alumno_s ALUMNO = {
        .apellidos = "PACHER",
        .nombres = "Federico",
        .documento = "28.215.978",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool DanielMarquez(char * cadena, size_t espacio) {
    struct alumno_s ALUMNO = {
        .apellidos = "MARQUEZ FARIAS",
        .nombres = "Daniel Alexander",
        .documento = "95.956.478",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool KevinMoncayo(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "MONCAYO",
        .nombres = "Jorge Kevin",
        .documento = "1.85.298.19",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}