#ifndef PROTOCOLO_H
#define PROTOCOLO_H

#include <inttypes.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
    INICIAR_PROCESO,
    FINALIZAR_PROCESO,
    DETENER_PLANIFICACION,
    INICIAR_PLANIFICACION,
    MUTIPROGRAMACION,
    PROCESO_ESTADO,
    WAIT,
    SIGNAL,
    F_OPEN,
    F_CLOSE,
    F_SEEK,
    F_TRUNCATE,
    F_READ,
    F_WRITE,
} op_code;

#endif /* PROTOCOLO_H */