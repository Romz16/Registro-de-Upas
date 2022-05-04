#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"ordenacao.h"

int comparaEmergencia(TADupa *vetorUpas, int quantidade){
    int maior = 0;
    for(int i = 0; i < quantidade; i++){
        if(vetorUpas[i].Upa.Emergencia == vetorUpas[i + 1].Upa.Emergencia){
            return 0;
        }else if(vetorUpas[i].Upa.Emergencia > vetorUpas[i + 1].Upa.Emergencia){
            maior = vetorUpas[i].Upa.Emergencia;
        }
    }
    return maior;
}

int comparaUrgencia(TADupa *vetorUpas, int quantidade){
    int maior = 0;
    for(int i = 0; i < quantidade; i++){
        if(vetorUpas[i].Upa.Urgencia == vetorUpas[i + 1].Upa.Urgencia){
            return 0;
        }else if(vetorUpas[i].Upa.Urgencia > vetorUpas[i + 1].Upa.Urgencia){
            maior = vetorUpas[i].Upa.Urgencia;
        }
    }
    return maior;
}

int comparaSemUrgencia(TADupa *vetorUpas, int quantidade){
    int maior = 0;
    for(int i = 0; i < quantidade; i++){
        if(vetorUpas[i].Upa.SemUrgencia == vetorUpas[i + 1].Upa.SemUrgencia){
            return 0;
        }else if(vetorUpas[i].Upa.SemUrgencia > vetorUpas[i + 1].Upa.SemUrgencia){
            maior = vetorUpas[i].Upa.SemUrgencia;
        }
    }
    return maior;
}

int comparaPlantonistas(TADupa *vetorUpas, int quantidade){
    int maior = 0;
    for(int i = 0; i < quantidade; i++){
        if(vetorUpas[i].Upa.QntPlantonistas == vetorUpas[i + 1].Upa.QntPlantonistas){
            return 0;
        }else if(vetorUpas[i].Upa.QntPlantonistas > vetorUpas[i + 1].Upa.QntPlantonistas){
            maior = vetorUpas[i].Upa.QntPlantonistas;
        }
    }
    return maior;
}

int prioridade(TADupa *vetorUpas, int quantidade){
    int priori;
    if(comparaEmergencia(vetorUpas, quantidade) != 0){ // Se for diferente de zero, emergencia tem prioridade;
        priori = comparaEmergencia(vetorUpas, quantidade);
        // se comparaEmergencia for = zero, verefica-se a próxima gravidade;
    }else if(comparaUrgencia(vetorUpas, quantidade) != 0){ // Se for diferente de zero, urgencia tem prioridade;
        priori = comparaUrgencia(vetorUpas, quantidade);
        // se comparaUrgencia for = zero, verefica-se a próxima gravidade;
    }else if(comparaSemUrgencia(vetorUpas, quantidade) != 0){ // Se for diferente de zero, sem urgencia tem prioridade;
        priori = comparaSemUrgencia(vetorUpas, quantidade);
        // se comparaSemUrgencia for = zero, verefica-se a próxima gravidade;
    }else if(comparaEmergencia(vetorUpas, quantidade) == comparaUrgencia(vetorUpas, quantidade) && comparaEmergencia(vetorUpas, quantidade) == comparaSemUrgencia(vetorUpas, quantidade)){
        if(comparaPlantonistas(vetorUpas, quantidade) != 0){ // Se for diferente de zero, plantonistas tem prioridade;
            priori = comparaPlantonistas(vetorUpas, quantidade);
            // se comparaPlantonistas for = zero, "ORDEM ALFABÉTICA";
        }
    }
    return priori;
}

// Adicionar depois a função da ordem alfabética caso o comparaPlantonistas for igual a zero;