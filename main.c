#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    float media;

    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10.0;
    printf("A média aritmética é %.2f.\n", media);
    return 0;
}
