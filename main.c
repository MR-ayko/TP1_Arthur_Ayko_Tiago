#include <stdlib.h>
#include <stdio.h>
#include "Carta.h"

int main(){
    Carta carta1,carta2;
    CriaCarta(&carta1,1,'P',1);
    CriaCarta(&carta2,2,'C',1);
    printf("Valor carta 1: %d\n",carta1.valor);

}