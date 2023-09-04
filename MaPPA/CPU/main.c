#include "../include/config.h"
#include "../include/iniciar_cpu.h"

t_congig_cpu *config_cpu;
t_log *logger_cpu;

void iniciar_confi() {
    config_cpu = malloc(sizeof(t_config_cpu));
    config_cpu->IP_MEMORIA = NULL;
}

int main() {
    logger_cpu = log_create("CPU.log", "CPU", true, LOG_LEVEL_INFO);

    char *puerto_dispatch = config_cpu->PUERTO_ESCUCHA_DISPATCH;
    char *puerto_interrupt = config_cpu->PUERTO_ESCUCHA_INTERRUPT;

    int cpu_server_dispatch = iniciar_servidor(logger_cpu, "127.0.0.1" ,puerto_dispatch);
    int cliente_dispatch = esperar_cliente(logger_cpu, cpu_server_dispatch);

    int cpu_server_interrupt = iniciar_servidor(logger_cpu, "127.0.0.1", puerto_interrupt);
    int cliente_interrupt = esperar_cliente(logger_cpu, cpu_server_interrupt);
    
    crear_conexion(logger_cpu, "SERVER_MEMORIA", config_cpu->IP_MEMORIA, config_cpu->PUERTO_MEMORIA);

    free(puerto_dispatch);
    free(puerto_interrupt);

    if (cpu_server_dispatch == -1 || cpu_server_interrupt == -1) {
        log_error(logger_cpu, "No se pudo iniciar el servidor");
        exit(EXIT_FAILURE);
    }

    // Crear un funcion que libere la memoria de config_cpu

    return 0;
}