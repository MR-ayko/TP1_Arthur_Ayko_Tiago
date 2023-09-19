#ifndef TP1_CARTA_H
#define TP1_CARTA_H

typedef struct {
    int valor;
    char naipe;
    int posicao;
}Carta;

void CriaCarta(Carta *carta, int valor, char naipe, int posicao);
void RetornaNipe(Carta *carta);
void RetornaValor(Carta *carta);
void RetornaPosicao(Carta *carta);
void AlteraPosicao(Carta *carta);
void SequenciaMesmoNaipe(Carta *carta1,Carta *carta2);
void SequenciaAlternada(Carta *carta1,Carta *carta2);
void Exibir(Carta *carta);

#endif //TP1_CARTA_H
