#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float a, b;
    printf("\nDigite o primeiro número, por favor: ");
    scanf("%f", &a);
    printf("Digite o segundo número, por favor: ");
    scanf("%f", &b);
    printf("A multiplicação entre %3.2f e %3.2f é %3.2f\n", a, b, a * b);
    return 0;
}