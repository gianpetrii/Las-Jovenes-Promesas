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

    int cpu_server = iniciar_servidor(logger_cpu, config_cpu->PUERTO_ESCUCHA_DISPATCH);

    return 0;
}