#ifndef CPU_H
#define CPU_H

#include "./processo.h"

typedef struct CPU
{
    int contadorPrograma; // Valor atual do contadorPrograma
    int *memoriaVect;     // Vetor de Memória
    Tempo fatiaTempo;
    Tempo tempoUsado;
    int quantidadeInteiros;
    ProcessoSimulado *processoEmExecucao;
} CPU;

#endif