#include <stdio.h>

int main() {

    float nota;

    printf("Digite sua nota:");
    scanf("%f", &nota);

    if (nota >=7) {
        printf("Voce foi aprovado, parabens !\n");
    } else if (nota >=5 ) {
        printf("Voce esta de recuperacao, aguarde data de prova !\n");
    } else {
        printf("Voce foi reprovado, faca rematricula !\n");
    }

    return 0;
}