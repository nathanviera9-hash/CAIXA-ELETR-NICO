#include <stdio.h>

/*
 * Simulador Básico de Caixa Eletronico
 * Calcula a distribuicao de cedulas (100, 50, 20, 10, 5, 2 e 1)
 * usando divisao inteira (/) e resto da divisao (%).
 */
int main() {
    // Saldo inicial fixo para os testes (mesmo valor usado no Portugol)
    int saldo = 2000;
    int valorSaque = 0;
    int resto = 0;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    printf("=== CAIXA ELETRONICO ===\n");
    printf("Saldo disponivel: R$ %d\n", saldo);
    printf("Digite o valor que deseja sacar: ");

    // scanf devolve 1 quando consegue ler um inteiro; qualquer outro
    // resultado (ex.: o usuario digitou letras) e tratado como erro.
    if (scanf("%d", &valorSaque) != 1) {
        printf("Erro: entrada invalida. Digite apenas numeros inteiros.\n");
        return 1;
    }

    // ---------- VALIDACAO ----------
    // 1) O valor precisa ser positivo.
    if (valorSaque <= 0) {
        printf("Erro: O valor do saque deve ser maior que zero.\n");
    }
    // 2) O valor nao pode ultrapassar o saldo disponivel.
    else if (valorSaque > saldo) {
        printf("Erro: Saldo insuficiente para realizar esta operacao.\n");
    }
    // 3) Valor valido: calcula as cedulas.
    else {
        // "resto" guarda o quanto ainda falta distribuir.
        resto = valorSaque;

        // Operador / (divisao inteira): quantas cedulas cabem no valor.
        // Operador % (modulo): o que sobrou e nao coube nessas cedulas.
        // Exemplo com 123: 123 / 100 = 1 nota; 123 % 100 = 23 restantes.
        n100 = resto / 100;
        resto = resto % 100;

        // Agora trabalhamos so com o que sobrou (23): 23 / 50 = 0; 23 % 50 = 23.
        n50 = resto / 50;
        resto = resto % 50;

        // 23 / 20 = 1 nota; 23 % 20 = 3 restantes.
        n20 = resto / 20;
        resto = resto % 20;

        // 3 / 10 = 0; 3 % 10 = 3.
        n10 = resto / 10;
        resto = resto % 10;

        // 3 / 5 = 0; 3 % 5 = 3.
        n5 = resto / 5;
        resto = resto % 5;

        // 3 / 2 = 1 nota; 3 % 2 = 1 restante.
        n2 = resto / 2;
        resto = resto % 2;

        // O que sobrar (0 ou 1) e entregue em notas de 1.
        n1 = resto / 1;

        // ---------- EXIBICAO ----------
        // Mostra apenas as cedulas cuja quantidade e maior que zero.
        printf("\nSaque realizado com sucesso! Distribuicao de notas:\n");
        if (n100 > 0) printf("- %d nota(s) de R$ 100\n", n100);
        if (n50 > 0)  printf("- %d nota(s) de R$ 50\n", n50);
        if (n20 > 0)  printf("- %d nota(s) de R$ 20\n", n20);
        if (n10 > 0)  printf("- %d nota(s) de R$ 10\n", n10);
        if (n5 > 0)   printf("- %d nota(s) de R$ 5\n", n5);
        if (n2 > 0)   printf("- %d nota(s) de R$ 2\n", n2);
        if (n1 > 0)   printf("- %d nota(s) de R$ 1\n", n1);
    }

    return 0;
}
