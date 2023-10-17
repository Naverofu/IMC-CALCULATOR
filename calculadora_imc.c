#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    float peso, altura, IMC;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    IMC = peso / pow(altura, 2);
    printf("Seu IMC �: %.2f \n", IMC);

    if (IMC <= 18.5)
    {
        printf("(Seu grau �: Abaixo do peso) .");
    }
    else if ((IMC >= 18.6) && (IMC <= 24.9))
        printf("(Seu grau �: Normal)");

    else if ((IMC >= 25.0) && (IMC <= 29.9))
        printf("(Seu grau �: Sobrepeso)");

    else if ((IMC >= 30.0) && (IMC <= 34.9))
        printf("(Seu grau �: obesidade grau 1)");

    else if ((IMC >= 35.0) && (IMC <= 39.9))
        printf("(Seu grau �: Obesidade grau 2)");

    else
        printf("(Seu grau �: Obesidade grau 3)");

    return 0;
    system("pause");
}
