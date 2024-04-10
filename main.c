#include <stdio.h>
#include <stdlib.h>


// Define o tamanho máximo da fila como 5
#define MAX_SIZE 5

// Definição da estrutura da fila
typedef struct {
    int items[MAX_SIZE];// Array para armazenar os elementos da fila
    int front; //Índice do elemento da frente da fila
    int rear; // Índice do elemento do final da fila
} Queue;