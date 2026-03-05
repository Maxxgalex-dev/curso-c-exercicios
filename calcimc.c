#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Qual o seu Peso ?\n");
    scanf("%f", &peso);

    printf("Qual a sua Altura ?\n");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("Seu IMC eh: %.2f\n", imc);

    if (imc <18.5) {
        printf("Voce está abaixo do peso ideal !\n");
    } else if (imc <25) {
        printf("Seu peso é ideal !\n");
    } else if (imc <30) {
        printf("Voce esta com sobrepeso !\n");
    } else if (imc <35) {
        printf("Voce esta em Estagio de Obesidade Grau 1 !\n");
    } else if (imc <40) {
        printf("Voce esta em Estagio de Obesidade Grau 2 !\n");
    } else {
        printf("Voce atingiu Grau de Obesidade 3 !\n");
    }

    return 0;
}