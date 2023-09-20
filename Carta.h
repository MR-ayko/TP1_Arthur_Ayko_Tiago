#ifndef TP1_CARTA_H
#define TP1_CARTA_H

typedef struct {
    int valor;
    char naipe;
    int posicao;
    char cor;
}Carta;

void CriaCarta(Carta *carta, int valor, char naipe, int posicao);
char RetornaNaipe(Carta *carta);
int RetornaValor(Carta *carta);
int RetornaPosicao(Carta *carta);
void AlteraPosicao(Carta *carta);
int SequenciaMesmoNaipe(Carta *carta1,Carta *carta2);
int SequenciaAlternada(Carta *carta1,Carta *carta2);
void Exibir(Carta *carta);

#endif //TP1_CARTA_H
