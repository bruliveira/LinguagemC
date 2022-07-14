#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("\nOi, digite um número, por favor: ");
    scanf("%d", &a);
    printf("O número digitado foi: %d\n", a);

    return 0;
}