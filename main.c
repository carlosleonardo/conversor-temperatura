#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#ifndef _WIN32
#define scanf_s scanf
#endif

void celsius_para_fahrenheit(void);

void fahrenheit_para_celsius(void);

void kelvin_para_celsius(void);

void celsius_para_kelvn(void);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int opcao = 0;
    do {
        printf("Conversor de temperatura!\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Kelvin para Celsius\n");
        printf("4. Celsius para Kelvin\n");
        printf("0. Sair\n");
        printf("Escolha opção: ");
        int lido = scanf_s("%d", &opcao);
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
    printf("Digite a temperatura em Celsius: ");
    int lido = scanf_s("%f", &celsius);
    if (lido != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}

void fahrenheit_para_celsius(void) {
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    int lido = scanf_s("%f", &fahrenheit);
    if (lido != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }
    float celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("Temperatura em Celsius: %.2f\n", celsius);
}

void kelvin_para_celsius(void) {
    float kelvin;
    printf("Digite a temperatura em Kelvin: ");
    int lido = scanf_s("%f", &kelvin);
    if (lido != 1) {
        printf("tEntrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }
    float celsius = kelvin - 273.15f;
    printf("Temperatura em Celsius: %.2f\n", celsius);
}

void celsius_para_kelvn(void) {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    int lido = scanf_s("%f", &celsius);
    if (lido != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }
    float kelvin = celsius + 273.15f;
    printf("Temperatura em Kelvin: %.2f\n", kelvin);
}
