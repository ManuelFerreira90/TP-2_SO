#ifndef GERENCIADOR_PROCESSOS_H
#define GERENCIADOR_PROCESSOS_H

#include "./tabela_de_processos.h"
#include "./Fila.h"

typedef struct {
    FilaDinamica filasProntos[NUM_PRIORIDADES];
    FilaDinamica filasBloqueados[NUM_PRIORIDADES];
    int processoEmExecucao;
} EstadosProcessos;

typedef struct {
    tabelaProcessos TabelaProcessos;
    EstadosProcessos EstadosProcessos;
    int tempoAtual;
} GerenciadorProcessos;

// Declarações de funções e estruturas
void iniciarGerenciadorProcessos(GerenciadorProcessos *gerenciador, char *arquivoEntrada);
void iniciarCPU(GerenciadorProcessos *gerenciador);
void adicionarProcessoPronto(GerenciadorProcessos *gerenciador, ProcessoSimulado *processo);
void criarProcessoSimulado(GerenciadorProcessos *gerenciador, int n);
void adicionarProcessoBloqueado(GerenciadorProcessos *gerenciador, ProcessoSimulado *processo, int tempo);
Instrucao processarLinhaEspecifica(const char *caminhoArquivo, int numeroLinha);
void bloquearProcessoSimulado(GerenciadorProcessos *gerenciador, int tempo);
void terminarProcessoSimulado(GerenciadorProcessos *gerenciador);
void executarProcessoAtual(GerenciadorProcessos *gerenciador);
void processarComando(GerenciadorProcessos *gerenciador, Instrucao instrucao);
void iniciarVetorMemoria(GerenciadorProcessos *gerenciador);
void imprimirInstrucoes(ProcessoSimulado *processo);
void comecaExecucao(GerenciadorProcessos *gerenciador);
void imprimeCPU(CPU cpu);
void comandoD(CPU *cpu, int index);
void comandoN(CPU *cpu, int valor);
void comandoV(CPU *cpu, int index, int valor);
void comandoA(CPU *cpu, int index, int valor);
void comandoS(CPU *cpu, int index, int valor);
void printTableBorder();

#endif // GERENCIADOR_PROCESSOS_H
