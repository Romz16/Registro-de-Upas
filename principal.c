#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ordenacao.h"

int main(){
    int quantidade;
    TADupa *vetorUpa;
    scanf("%d",quantidade);
    vetorUpa = lerDados(quantidade);
    libera(vetorUpa);

    return 0;
}


//funcao prioridade. função ordena quant. func ordena por ondem alfabetica. funcao imprime 