#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int a;
    int b;
    printf("\nDigite uma medida em metros: ");
    scanf("%d", &a);
    b = a * 100;
    printf("%d metros é %d centímetros \n", a, b);
    return 0;
}