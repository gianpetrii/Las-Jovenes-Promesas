#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <commons/log.h>
#include "Shared/include/cambioDeColor.h" // Traigo funcion de ponerColorLogs

int main() {
    
    char* colorTitulo = "\033[1;31m"; // El 31 dentro representa el color rojo y el 1 el grosor de la letra
    const char* modulo = "CPU"; // Representa el nombre del modulo
    char* tituloLog = ponerColorLogs(modulo, colorTitulo); // Llama a la función para crear el título del log, pasando el color como parámetro

    char* log = "Este es un loggeo random";
    char* colorLogs = "\033[33m"; // El 33 final representa el color amarillo
    const char* textoLogs = ponerColorLogs(log, colorLogs); // Llama a la función para crear el título del log, pasando el color como parámetro

    // Crear un log
    t_log* logger = log_create("cpu.log", tituloLog, 1, LOG_LEVEL_INFO);

    // Registra un mensaje en el log con formato personalizado
    log_info(logger,textoLogs);

    // Libera la memoria asignada dinámicamente
    free(tituloLog);

    // Cierra el log
    log_destroy(logger);

    return 0;
}