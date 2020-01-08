/*
 * @kernel.h
 *
 * Header file: protótipos de funções
 *              utilizados pelo kernel
 *
 * Autor: Eduardo Pagotto
 * Data: 2020-01
 * Versão: 0.0.0
 */

#ifndef KERNEL_ZERO_RTOS_H
#define KERNEL_ZERO_RTOS_H

#include <Arduino.h>

//---------------------------------------------------------------------------------------------------------------
// Definicioe do Kernel
//---------------------------------------------------------------------------------------------------------------

// Definições para as tarefas
#define NUMBER_OF_TASKS 3
#define TEMPO_MAXIMO_EXECUCAO 100 // 100ms

// Definições gerais
#define SUCCESS 1
#define FAIL 0
#define SIM true
#define NAO false

// Definição ponteiro de função
typedef void (*ptrFunc)();

// Definição da estrutura que contem as informações das tarefas
typedef struct {
    ptrFunc Function;
    unsigned char* taskName;
    uint32_t period;
    bool enableTask;
} TaskHandle;

// Declaração de variaveis globais (Definições em kernel.cpp)
extern volatile uint32_t sysTickCounter;

//---------------------------------------------------------------------------------------------------------------
// Protótipos de funções do Kernel
//---------------------------------------------------------------------------------------------------------------
char KernelInit(void);
char KernelAddTask(ptrFunc _function, unsigned char* _nameFunction, uint16_t _period, char _enableTask,
                   TaskHandle* task);
char KernelRemoveTask(TaskHandle* task);
void KernelStart(void);
void IsrTimer(void);

#endif