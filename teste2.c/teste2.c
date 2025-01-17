#include <stdio.h>
int main(){
    int idade;
    char nome[20];
    float peso, altura, imc;

    printf("Digite seu nome\n");
    scanf("%c", &nome);

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    printf("Digite seu peso\n");
    scanf("%f", &peso);

    printf("Digite sua altura\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5);
    printf("IMC: abaixo do peso\n", imc);

    else if( imc >= 18.5 && imc < 25);
    printf("IMC: peso normal\n");
    
    else if( imc >= 25 && imc <30);
    printf("IMC: sobrepeso\n");

    else if( imc >= 30 && imc <35);
    printf("IMC: obesidade grau 1\n");

    else if( imc >= 35 && imc <40);
    printf("IMC: obesidade grau 2\n");

    if( imc >= 40);
    printf("IMC: obesidade grau 3");

    return 0
    
}