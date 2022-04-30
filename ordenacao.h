
//Emergência, Urgência e Sem Urgência e o total de médicos plantonistas.

struct situacao
{
    int Emergencia;
    int Urgencia;
    int SemUrgencia;
    int QntPlantonistas;    
} typedef TADsituacao;

struct  ordenacao
{
    char nome[20];
    TADsituacao Upa;

}typedef TADupa;


TADupa *lerDados(int quantidade);
void OrdemAlfabetica(TADupa *vetorUpas,int posi1,int posi2);
void OrdemNumerica(TADupa *vetorUpas,int posi1,int posi2);

void libera(TADupa *x);
