// Universidade La salle
// Created by: Dionatan Paniz Sprenger
// Curso: Analise Desenvolvimento de Sistemas
// Matricula: 202212837
// Github: https://github.com/DionatanSprenger/UniLasalle

// Este codigo e uma calculadora
// Ela pode fazer as seguintes contas
// Soma, subtracao, divisao, multiplicacao, raiz quadrada e potencia
// Voce deve selecionar qual tipo deseja utilizar

#include <math.h>
#include <stdio.h>

typedef enum {
    exit, soma, subtracao, div, multi, raiz, potencia
} option;

int main(void) {
    printf("\nUniversidade La salle\n");
    printf("Autor: Dionatan Paniz Sprenger\n");
    printf("Curso: Analise Desenvolvimento de Sistemas\n");
    printf("Matricula: 202212837\n\n");

    float num1, num2;
    float num3, num4;
    int op = 0;

    do {
        printf("Digite:\n");
        printf("1 Soma\n");
        printf("2 Subtracao\n");
        printf("3 Divisao\n");
        printf("4 Multiplicacao\n");
        printf("5 Raiz\n");
        printf("6 Potencia\n");
        printf("0 Exit\n\n");

        scanf("%i", &op);
        option selection = op;

        switch (selection) {
        case exit:
            // code //
            break;

        case soma:
            printf("Digite os 2 numeros a serem processados:\n\n");
            scanf("%f%f", &num1, &num2);

            float soma = num1 + num2;
            printf("A soma: %.3f\n\n", soma);
            break;

        case subtracao:
            printf("Digite os 2 numeros a serem processados:\n\n");
            scanf("%f%f", &num1, &num2);

            float subtracao = num1 - num2;
            printf("A subtracao: %.3f\n\n", subtracao);
            break;

        case div:
            printf("Digite os 2 numeros a serem processados:\n\n");
            scanf("%f%f", &num3, &num4);

            float div = num3 / num4;
            printf("A divisao: %.3f\n\n", div);
            break;

        case multi:
            printf("Digite os 2 numeros a serem processados:\n\n");
            scanf("%f%f", &num1, &num2);

            float multi = num1 * num2;
            printf("A multiplicacao: %.3f\n\n", multi);
            break;

        case raiz:
            printf("Digite 1 numero a ser processado:\n\n");
            scanf("%f", &num3);

            float raiz = sqrt(num3);
            printf("A raiz quadrada: %.3f\n\n", raiz);
            break;

        case potencia:
            printf("Digite os 2 numeros a serem processados:\n\n");
            scanf("%f%f", &num1, &num2);

            float potencia = pow(num1, num2);
            printf("A potencia: %.3f\n\n", potencia);
            break;
        }
    } while (op);

    // Como primeiro contato com C#/c.main foi muito complexo de entender
    // Por sorte tive muita assistencia e conseguindo alguns exemplos
    // Mais especificadamente o da soma que deu a base para fazer todos os outros
    // Conseguindo fazer os calculos a parte mais complicada
    // Apos conseguir fazer os calculos o principal problema era conseguir criar opcoes
    // Ao descobrir mecanismos como switch, option e case
    // As coisas ficaram muito simples e faceis de manejar
    // Está foi minha principal referencia: https://excript.com/linguagem-c/calculadora-c.html

    return 0;
}
