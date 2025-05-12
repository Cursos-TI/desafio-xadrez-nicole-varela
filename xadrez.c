

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Movimento da TORRE usando estrutura FOR
    int i; // Variável de controle do laço for
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 0; i < 5; i++) { // Laço que repete 5 vezes
        printf("Direita "); // Corrigido para "Direita" e adicionado espaço para melhor visualização
    }
    printf("\n"); // Quebra de linha após o movimento da torre

    // Movimento do BISPO usando estrutura WHILE
    int j = 0; // Variável de controle do laço while
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    while (j < 5) { // Enquanto j for menor que 5
        printf("Cima Direita "); // Corrigido para "Cima Direita" e adicionado espaço
        j++; // Incrementa j para avançar na repetição
    }
    printf("\n"); // Quebra de linha após o movimento do bispo

    // Movimento da RAINHA usando estrutura DO-WHILE
    int k = 0; // Variável de controle do laço do-while
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda "); // Corrigido para "Esquerda" e adicionado espaço
        k++; // Incrementa k para continuar o laço
    } while (k < 8); // Continua enquanto k for menor que 8

    return 0; // Encerra o programa
}