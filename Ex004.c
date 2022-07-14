#include <stdio.h>
#include <locale.h>
#define PI 3.1415
int main(){
    setlocale(LC_ALL, "portuguese");
    float  ra, a;
    printf("\nDigite o raio: ");
    scanf("%f", &ra);
    a = PI * (ra * ra);
    printf("Área do círculo: %3.2f\n", a);;
    return 0;
}