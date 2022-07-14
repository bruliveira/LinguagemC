#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float qtdqui, dias, paluguel;
    printf("\nDigite a quantidade de quilômetros percorridos: ");
    scanf("%f", &qtdqui);
    printf("Digite a quantidade de dis do aluguel: ");
    scanf("%f", &dias);
    paluguel = (0.15 * qtdqui) + (60 * dias);
  
    printf("O preço do aluguel será: R$%3.2f\n", paluguel);

    return 0;
}    