#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma;
float menos;
float mult;
float divi;
float n1;
char op;
float n2;

int main()
{ setlocale(LC_ALL,"Portuguese");
    printf("Digite um número, a operação e outro número exemplo:(5+5)\n ");
    scanf("%f %c %f",&n1,&op,&n2);
    switch (op)
    {
        case '+':
            soma= n1+n2;
            printf("O resultado é:\n%.2f ", soma);
        break;
        case '-':
            menos= n1-n2;
            printf("O resultado é:\n%.2f ", menos);
        break;
        case 'x':
            mult= n1*n2;
            printf("O resultado é:\n%.2f ", mult);
        break;
        case '/':
            if (n2>0)
            {
                divi= n1/n2;
                printf("O resultado é:\n%.2f ",divi);
            }
            else
            {
                printf("Não existe divisão por zero!!!");
            }
        break;
        default:
        printf("Operação inválida");
        printf("Tânia é demais!!!");
        printf("Apoio fazer um aulão de git");
        printf("Não sei mais o que falar");
        printf("testandoooo");
        printf("seilaaaaa");


    }
    return 0;
}
