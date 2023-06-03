#include <stdio.h>

int main() {
    int num1, num2, num3;
    int cont = 0;
    float media, soma;

    printf("Digite um numero inteiro:\n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    while (!(num1 < num2 < num3)) {
        num1 = num2;
        num2 = num3;
        scanf("%d", &num3);
    }
        printf("----------------------------\n");
  
    soma = (num1 + num2 + num3),
    media = soma / 3;

    printf("A soma dos numeros e igual a: %.2f\n", soma);
    printf("A media dos numeros %d, %d e %d e igual a: %.2f\n", num1, num2, num3, media);

    return 0;
}
