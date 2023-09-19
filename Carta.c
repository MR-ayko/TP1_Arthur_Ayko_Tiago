#include "Carta.h"
#include <stdlib.h>

void CriaCarta(Carta *carta, int valor, char naipe, int posicao){
    *carta = (Carta)malloc(sizeof(Carta));
    carta->valor = valor;
    carta->naipe = naipe;
    carta->posicao = posicao;
}
char RetornaNipe(Carta *carta){
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
void SequenciaMesmoNaipe(Carta *carta1,Carta *carta2){

}
void SequenciaAlternada(Carta *carta1,Carta *carta2){

}
void Exibir(Carta *carta){

}