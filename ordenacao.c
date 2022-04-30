#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ordenacao.h"

TADupa *lerDados(int quantidade){
    int i,j;
    TADupa *vetorUpas;
    vetorUpas = malloc(quantidade* sizeof(TADupa));
    for ( i = 0; i < quantidade; i++)
    {
        scanf("%s",&vetorUpas[i].nome);
        scanf("%d",&vetorUpas[i].Upa.Emergencia);
        scanf("%d",&vetorUpas[i].Upa.Urgencia);
        scanf("%d",&vetorUpas[i].Upa.SemUrgencia);
        scanf("%d",&vetorUpas[i].Upa.QntPlantonistas);
    }
    return vetorUpas;
}

void libera(TADupa *vetorUpas){
    free(vetorUpas);
}

void OrdemAlfabetica(TADupa *vetorUpas,int posi1,int posi2){
     int r;
     TADupa aux;
     r = strcmp(vetorUpas[posi1].nome,vetorUpas[posi2].nome);
     if (r>0)
     {
        aux = vetorUpas[posi1];
        vetorUpas[posi1] = vetorUpas[posi2];
        vetorUpas[posi2 ]= aux;
     }    
}

void OrdemNumerica(TADupa *vetorUpas,int posi1,int posi2){
    TADupa aux;
     if (vetorUpas[posi1].Upa.Emergencia<vetorUpas[posi2].Upa.Emergencia)
     {
        aux = vetorUpas[posi1];
        vetorUpas[posi1] = vetorUpas[posi2];
        vetorUpas[posi2 ]= aux;
     }    
     else if (vetorUpas[posi1].Upa.Emergencia==vetorUpas[posi2].Upa.Emergencia||vetorUpas[posi1].Upa.Urgencia<vetorUpas[posi2].Upa.Urgencia)
     {
        aux = vetorUpas[posi1];
        vetorUpas[posi1] = vetorUpas[posi2];
        vetorUpas[posi2 ]= aux;
     }

    else if (vetorUpas[posi1].Upa.Emergencia==vetorUpas[posi2].Upa.Emergencia||vetorUpas[posi1].Upa.Urgencia==vetorUpas[posi2].Upa.Urgencia||vetorUpas[posi1].Upa.SemUrgencia<vetorUpas[posi2].Upa.SemUrgencia)
    
        aux = vetorUpas[posi1];
        vetorUpas[posi1] = vetorUpas[posi2];
        vetorUpas[posi2 ]= aux;
}

