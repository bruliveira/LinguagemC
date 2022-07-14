#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float dinheiro, hora, recebidom;
    printf("\nDigite a quantidade de horas trabalhada no mês: ");
    scanf("%f", &hora);
    printf("Digite a quantidade de dinheiro recebido por hora: ");
    scanf("%f", &dinheiro);
    recebidom = hora * dinheiro;
    printf("O valor total que será recebido por mês será: R$%3.2f \n", recebidom);
    return 0;
}