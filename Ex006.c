#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int nulo, branco, valido;
    float votosnulo, votosbranco, votosvalido, total;

    printf("\nDigite a quantidade de votos nulos: ");
    scanf("%d", &nulo);
    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &branco);
    printf("Digite a quantidade dos votos válidos: ");
    scanf("%d", &valido);
    total = nulo + branco + valido;
    votosnulo = 100 *nulo / total;
    votosbranco = (branco * 100)/total;
    votosvalido = (valido * 100)/total;


    printf("\n--------Porcentagens da votação-----------\n");
    printf("Votos nulos: %3.2f%\n", votosnulo);
    printf("votos em branco: %3.2f%\n",votosbranco);
    printf("Votos válidos: %3.2f%\n",votosvalido);
    return 0;
}