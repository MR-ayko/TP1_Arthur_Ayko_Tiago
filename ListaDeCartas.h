#ifndef TP1_LISTADECARTAS_H
#define TP1_LISTADECARTAS_H
#include <Carta.h>

typedef Carta *Apontador;

typedef struct{
    Carta *carta;
    Apontador prox;
    int contador;
}ListaCartas;

void CriaListaVazia(ListaCartas *listaCartas);
void Tamanho(ListaCartas *listaCartas);
void VerificaVazia(ListaCartas *listaCartas);
void CartaDoTopo(ListaCartas *listaCartas);
void RetornaCarta(ListaCartas *listaCartas);
void AdicionarNoTopo(ListaCartas *listaCartas);
void RetirarDoTopo(ListaCartas *listaCartas);
void TransferirCartas(ListaCartas *listaCartas);
void Embaralhar(ListaCartas *listaCartas);
void Mostrar(ListaCartas *listaCartas);

#endif //TP1_LISTADECARTAS_H
