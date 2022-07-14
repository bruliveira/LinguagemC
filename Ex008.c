#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float salariobru, imposto, sindicato, salarioliqui;
    printf("\nDigite quuanto você ganha pro mês: ");
    scanf("%f", &salariobru);
    
    imposto = salariobru * 0.08;
    sindicato = salariobru * 0.05;
    salarioliqui = salariobru - imposto - sindicato;

    printf("\n\nSalário bruto: R$%3.2f", salariobru);
    printf("\nQuanto pagou de imposto: R$%3.2f", imposto);
    printf("\nQuanto pagou ao sindicato: R$%3.2f", sindicato);
    printf("\nSalário líquida: R$%3.2f\n", salarioliqui);

    return 0;
}    