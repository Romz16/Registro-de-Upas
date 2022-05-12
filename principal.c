#include "ordenacao.h"
#include <stdio.h>
#include<stdlib.h>

int main ()
{
	
	int n;
	TADupa *vetorupas = NULL;

	//ler as quantidades
	scanf("%d",&n);
	//alocar o vetor
	vetorupas = alocaUpas(vetorupas,n);
	//preencher o vetor
	preencheVetor(vetorupas, n);
	//ordenar
	selectionsort(vetorupas,n);
	//imprimir o resultado
	imprimeResultado(vetorupas, n);
	//desalocar o vetor
	vetorupas = desalocaUpas(vetorupas);
  return 0;
}
