#include <stdio.h>

int main() {

    float saldo = 1000.0;
    float valor;
    
    printf("Bem vindo a sua conta, digite a opcao desejada:\n");

    int opcao = 0;

    while (opcao != 4) {
        printf("1 - Ver saldo disponivel.\n");
        printf("2 - Depositar.\n");
        printf("3 - Sacar.\n");
        printf("4 - Sair.\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
              printf("Seu saldo eh de: %.2f\n", saldo);
              break;
            
            case 2:
              printf("Digite o valor para deposito:\n");
              scanf("%f", &valor);
              saldo += valor;
              break;
              
            case 3:
              printf("Digite o valor para saque:\n");
              scanf("%f", &valor);
              if (valor <=saldo) {
              saldo -= valor;
              } else {
                printf("Saldo insuficiente !\n");
              }
              break;

             case 4:
              printf("Saindo...\n");
              break;

            default:
            printf("Opcao invalida !\n");

        }
    }

    return 0;
}