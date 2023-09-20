#include "Carta.h"
#include <stdlib.h>
#include <stdio.h>

void CriaCarta(Carta *carta, int valor, char naipe, int posicao){
    carta = (Carta*)malloc(sizeof(Carta));
    carta->valor = valor;
    carta->naipe = naipe;
    carta->posicao = posicao;
    if (carta->naipe == 'C' || carta->naipe == 'O'){
        carta->cor = 'V';
    }
    if (carta->naipe == 'P' || carta->naipe == 'E'){
        carta->cor = 'P';
    }
}
char RetornaNaipe(Carta *carta){
    return carta->naipe;
}
int RetornaValor(Carta *carta){
    return carta->valor;
}
int RetornaPosicao(Carta *carta){
    return carta->posicao;
}
void AlteraPosicao(Carta *carta){
    if (carta->posicao == 0){
        carta->posicao = 1;
    }
    if (carta->posicao == 1){
        carta->posicao = 0;
    }
}
int SequenciaMesmoNaipe(Carta *carta1,Carta *carta2){
    if (carta1->naipe == carta2->naipe && carta2->valor == carta1->valor+1){
        return 1;
    }
    else{
        return 0;
    }
}
int SequenciaAlternada(Carta *carta1,Carta *carta2){
    if (carta1->cor == 'V' &&  carta2->cor == 'P' && carta2->valor == carta1->valor+1){
        return 1;
    }
    else{
        return 0;
    }
}
void Exibir(Carta *carta){
    if (carta->posicao == 0){
        printf("#\n");
    }
    else{
        printf("%d%c\n",carta->valor,carta->naipe);
    }
}