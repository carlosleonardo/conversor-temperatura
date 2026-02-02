#include <stdio.h>
#include <locale.h>
#ifndef _WIN32
#define scanf_s scanf
#endif

void celsius_para_fahrenheit(void);

void fahrenheit_para_celsius(void);

void kelvin_para_celsius(void);

void celsius_para_kelvn(void);

int main(void) {
    if (setlocale(LC_ALL, ".UTF-8") == NULL) {
        printf("Não foi possível definir a localidade para pt_BR.UTF-8\n");
    }
    int opcao;
    do {
        printf("Conversor de temperatura!\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Kelvin para Celsius\n");
        printf("4. Celsius para Kelvin\n");
        printf("0. Sair\n");
        printf("Escolha opção: ");
        const int lido = scanf_s("%d", &opcao);
        if (lido != 1) {
            printf("Entrada inválida! Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
        switch (opcao) {
            case 1: celsius_para_fahrenheit();
                break;
            case 2: fahrenheit_para_celsius();
                break;
            case 3: kelvin_para_celsius();
                break;
            case 4: celsius_para_kelvn();
                break;
            case 0: printf("Saindo...\n");
                break;
            default: printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void celsius_para_fahrenheit(void) {
    float celsius;
    int sucesso = 0;
    while (!sucesso) {
        printf("Digite a temperatura em Celsius: ");
        const int lido = scanf_s("%f", &celsius);
        if (lido != 1) {
            printf("Entrada inválida! Tente novamente.\n");
        } else {
            sucesso = 1;
        }
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }
    const float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}

void fahrenheit_para_celsius(void) {
    float fahrenheit;
    int sucesso = 0;
    while (!sucesso) {
        printf("Digite a temperatura em Fahrenheit: ");
        const int lido = scanf_s("%f", &fahrenheit);
        if (lido != 1) {
            printf("Entrada inválida! Tente novamente.\n");
        } else {
            sucesso = 1;
        }
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }
    const float celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("Temperatura em Celsius: %.2f\n", celsius);
}

void kelvin_para_celsius(void) {
    float kelvin;
    int sucesso = 0;
    while (!sucesso) {
        printf("Digite a temperatura em Kelvin: ");
        const int lido = scanf_s("%f", &kelvin);
        if (lido != 1) {
            printf("tEntrada inválida! Tente novamente.\n");
        } else {
            sucesso = 1;
        }
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }
    const float celsius = kelvin - 273.15f;
    printf("Temperatura em Celsius: %.2f\n", celsius);
}

void celsius_para_kelvn(void) {
    float celsius;
    int sucesso = 0;

    while (!sucesso) {
        printf("Digite a temperatura em Celsius: ");
        const int lido = scanf_s("%f", &celsius);
        if (lido != 1) {
            printf("Entrada inválida! Tente novamente.\n");
        } else {
            sucesso = 1;
        }
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }
    const float kelvin = celsius + 273.15f;
    printf("Temperatura em Kelvin: %.2f\n", kelvin);
}
