#include <stdio.h>

#define DEPOSITOS 2147483000
#define SAQUES 2147483000

double saldo = 1000.00;

void depositos() {
    for (long i = 0; i < DEPOSITOS; i++) {
        saldo += 5.0;
    }
}

void saques() {
    for (long i = 0; i < SAQUES; i++) {
        saldo -= 2.0;
    }
}

int main() {
    printf("Saldo inicial: %.2lf\n", saldo);

    depositos();
    saques();

    printf("Saldo final: %.2lf\n", saldo);

    return 0;
}
