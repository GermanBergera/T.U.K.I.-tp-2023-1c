#ifndef CPU
#define CPU_H_

#include<stdio.h>
#include<stdlib.h>
#include<commons/log.h>
#include<commons/string.h>
#include<commons/config.h>
#include<readline/readline.h>
#include<utils/utils_client.h>
#include <valgrind/valgrind.h>
#include <utils/utils_server.h>


t_log* iniciar_logger(void);
t_config* iniciar_config(void);
void leer_consola(t_log*);
void paquete(int);
void terminar_programa(int, t_log*, t_config*);
void establecer_conexion(char* , char* , int, t_config*, t_log*);

#endif