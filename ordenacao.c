
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ordenacao.h"

TADupa *alocaUpas(TADupa *upas, int n){
	
   upas = malloc(n*sizeof(TADupa));//preencher
   return upas;
}

TADupa *desalocaUpas(TADupa *upas){
  free(upas);
  return upas;
}

void preencheVetor(TADupa *upas, int n){
    for(int i = 0; i < n; i++){
        scanf("%s",upas[i].nome);
        scanf("%d %d %d %d", &upas[i].Upa.Emergencia, &upas[i].Upa.Urgencia, &upas[i].Upa.SemUrgencia, &upas[i].Upa.QntPlantonistas);
    }

	for(int i = 0; i < n; i++){
       

		printf(" %s ",upas[i].nome);

        printf("\n %d %d %d %d \n", upas[i].Upa.Emergencia, upas[i].Upa.Urgencia, upas[i].Upa.SemUrgencia, upas[i].Upa.QntPlantonistas);
    }
}




void selectionsort (TADupa *vet, int tam){
    int i, j, max;
    TADupa aux;
    for (i=0; i<=tam-1; i++){
        max = i;
	for (j=i+1; j<=tam; j++){
            if (vet[j].Upa.Emergencia > vet[max].Upa.Emergencia)
	        max = j;
            else if (vet[j].Upa.Emergencia == vet[max].Upa.Emergencia)
            {
                if (vet[j].Upa.Urgencia > vet[max].Upa.Urgencia)
                {
                    max = j;
                }
                 else if (vet[j].Upa.Urgencia == vet[max].Upa.Urgencia)
                 {
                    if (vet[j].Upa.SemUrgencia > vet[max].Upa.SemUrgencia)
                    {
                     max = j;
                    }
                    else if(vet[j].Upa.SemUrgencia == vet[max].Upa.SemUrgencia)
                    {

                         if(strcmp(vet[max].nome,vet[j].nome )>0){
                             max = j;
                         }
                        
                    }
                }
                
            }
            
	}
	aux = vet[max];
	vet[max] = vet[i];
	vet[i] = aux;
    }
}


void imprimeResultado(TADupa *upas, int n){
    printf("\n\n");
    for (int i = 0; i < n; i++){
        printf("%s %d %d %d %d\n", upas[i].nome, upas[i].Upa.Emergencia, upas[i].Upa.Urgencia, upas[i].Upa.SemUrgencia, upas[i].Upa.QntPlantonistas);
    }
}
