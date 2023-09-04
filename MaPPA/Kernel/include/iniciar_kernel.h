#ifndef INICIAR_KERNEL_H_
#define INICIAR_KERNEL_H_

#include <commons/config.h>
#include <commons/string.h>
#include <commons/log.h>
#include <commons/collections/list.h>
#include <stdint.h>
#include <stdlib.h>
#include <readline/readline.h>

#include "../../shared/include/sockets.h"
#include "../../shared/include/utils.h"

uint8_t generar_conexiones(int *socket_memoria, int *socket_fs, t_config_kernel *confi_kernel);
void cargar_configuracion(t_config_kernel *confi_kernel);
void cerrar_programa(t_log *logger_kernel, t_config_kernel *confi_kernel);

#endif /* INICIAR_KERNEL_H_ */