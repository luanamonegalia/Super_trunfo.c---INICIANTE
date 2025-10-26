#include <stdio.h>

int main() {
    int potencia1 = 80, velocidade1 = 90, peso1 = 70, tamanho1 = 60;
    int potencia2 = 75, velocidade2 = 85, peso2 = 65, tamanho2 = 70;
    int modo, escolha;

    printf("=====================================\n");
    printf("        SUPER TRUNFO EM C            \n");
    printf("=====================================\n");
    printf("Escolha o modo de jogo:\n");
    printf("1 - Desafio 1 (Comparação simples)\n");
    printf("2 - Desafio 2 (Múltiplos atributos)\n");
    printf("3 - Desafio 3 (Dois atributos + ternário)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &modo);

    switch (modo) {
        case 1:
            printf("\n=== DESAFIO 1 ===\n");
            printf("Escolha o atributo para comparar:\n");
            printf("1 - Potência\n");
            printf("2 - Velocidade\n");
            printf("3 - Peso\n");
            printf("4 - Tamanho\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolha);

            if (escolha == 1) {
                if (potencia1 > potencia2)
                    printf("Carta 1 venceu! (Potência: %d vs %d)\n", potencia1, potencia2);
                else if (potencia1 < potencia2)
                    printf("Carta 2 venceu! (Potência: %d vs %d)\n", potencia2, potencia1);
                else
                    printf("Empate!\n");
            } else if (escolha == 2) {
                if (velocidade1 > velocidade2)
                    printf("Carta 1 venceu! (Velocidade: %d vs %d)\n", velocidade1, velocidade2);
                else if (velocidade1 < velocidade2)
                    printf("Carta 2 venceu! (Velocidade: %d vs %d)\n", velocidade2, velocidade1);
                else
                    printf("Empate!\n");
            } else if (escolha == 3) {
                if (peso1 > peso2)
                    printf("Carta 1 venceu! (Peso: %d vs %d)\n", peso1, peso2);
                else if (peso1 < peso2)
                    printf("Carta 2 venceu! (Peso: %d vs %d)\n", peso2, peso1);
                else
                    printf("Empate!\n");
            } else if (escolha == 4) {
                if (tamanho1 > tamanho2)
                    printf("Carta 1 venceu! (Tamanho: %d vs %d)\n", tamanho1, tamanho2);
                else if (tamanho1 < tamanho2)
                    printf("Carta 2 venceu! (Tamanho: %d vs %d)\n", tamanho2, tamanho1);
                else
                    printf("Empate!\n");
            } else {
                printf("Opção inválida!\n");
            }
            break;

        case 2:
            printf("\n=== DESAFIO 2 ===\n");
            printf("Escolha o modo de comparação:\n");
            printf("1 - Potência e Velocidade\n");
            printf("2 - Peso e Tamanho\n");
            printf("3 - Todos os atributos\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    if ((potencia1 > potencia2) && (velocidade1 > velocidade2))
                        printf("Carta 1 venceu! (Potência e Velocidade superiores)\n");
                    else if ((potencia1 < potencia2) && (velocidade1 < velocidade2))
                        printf("Carta 2 venceu! (Potência e Velocidade superiores)\n");
                    else
                        printf("Empate parcial!\n");
                    break;

                case 2:
                    if ((peso1 > peso2) && (tamanho1 > tamanho2))
                        printf("Carta 1 venceu! (Peso e Tamanho superiores)\n");
                    else if ((peso1 < peso2) && (tamanho1 < tamanho2))
                        printf("Carta 2 venceu! (Peso e Tamanho superiores)\n");
                    else
                        printf("Empate parcial!\n");
                    break;

                case 3:
                    if ((potencia1 + velocidade1 + peso1 + tamanho1) >
                        (potencia2 + velocidade2 + peso2 + tamanho2))
                        printf("Carta 1 venceu no total!\n");
                    else if ((potencia1 + velocidade1 + peso1 + tamanho1) <
                             (potencia2 + velocidade2 + peso2 + tamanho2))
                        printf("Carta 2 venceu no total!\n");
                    else
                        printf("Empate total!\n");
                    break;

                default:
                    printf("Opção inválida!\n");
            }
            break;

        case 3:
            printf("\n=== DESAFIO 3 ===\n");
            printf("Escolha dois atributos para comparar:\n");
            printf("1 - Potência e Velocidade\n");
            printf("2 - Peso e Tamanho\n");
            printf("3 - Potência e Peso\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolha);

            switch (escolha) {
                case 1: {
                    int resultado = ((potencia1 + velocidade1) > (potencia2 + velocidade2)) ? 1 :
                                    ((potencia1 + velocidade1) < (potencia2 + velocidade2)) ? 2 : 0;
                    resultado == 1 ? printf("Carta 1 venceu!\n") :
                    resultado == 2 ? printf("Carta 2 venceu!\n") :
                                     printf("Empate!\n");
                    break;
                }
                case 2: {
                    int resultado = ((peso1 + tamanho1) > (peso2 + tamanho2)) ? 1 :
                                    ((peso1 + tamanho1) < (peso2 + tamanho2)) ? 2 : 0;
                    resultado == 1 ? printf("Carta 1 venceu!\n") :
                    resultado == 2 ? printf("Carta 2 venceu!\n") :
                                     printf("Empate!\n");
                    break;
                }
                case 3: {
                    int resultado = ((potencia1 + peso1) > (potencia2 + peso2)) ? 1 :
                                    ((potencia1 + peso1) < (potencia2 + peso2)) ? 2 : 0;
                    resultado == 1 ? printf("Carta 1 venceu!\n") :
                    resultado == 2 ? printf("Carta 2 venceu!\n") :
                                     printf("Empate!\n");
                    break;
                }
                default:
                    printf("Opção inválida!\n");
            }
            break;

        default:
            printf("Modo inválido!\n");
    }

    printf("\n=== Fim do jogo! ===\n");
    return 0;
}
