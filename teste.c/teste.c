#include <stdio.h>
int main(){

    int idade, matricula, semestre;
    float altura;
    char nome[50];

    printf("Nome do aluno\n");
    scanf("%s", &nome);

    printf("Digite a idade\n");
    scanf("%d", &idade);

    printf("Digite matricula\n");
    scanf("%d",&matricula);

    printf("Digite o semestre");
    scanf("%d", &semestre);

    printf("Digite a altura");
    scanf("%f", &altura);

    printf("NOME DO ALUNO %s - IDADE %d - MATRICULA %d\n", nome, idade, matricula);
    printf("SEMESTRE %d - ALTURA %f", semestre, altura);

    return 0;


}