#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 int numero = 0;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("***Movimentação do Bispo***\n");
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= 2; j++)
        {
        if (j % 2 != 0){

            printf("direita\n");
        }
     
        } 
         printf("cima\n");  
    }
 



    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n\n***Movimentação da Torre***\n");
    for (int i = 0; i < 5; i++){
        printf("Direita\n");
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n\n***Movimentação da Rainha***\n");
    
    while(numero <= 7){
        printf("Esquerda \n");
        numero++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n\n***Movimento do Cavalo***\n");
    int movimentocompleto = 1;

    while (movimentocompleto--)
    {
    for (int i = 0; i < 2; i++){
        printf("Baixo \n");
    }
    printf("Esquerda \n");
    }

     printf("\n"); 
     
 int movimentocompleto2 = 1;

    while (movimentocompleto2--)
    {
    for (int i = 0; i < 2; i++){
       
        printf("Cima \n");
    }
    printf("Direita \n");
    }
    


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
