#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int calc; //var switchcase
    int x, y; //ninteiros
    float xquebrado, yquebrado, X, p, T, raiz; //nquebrados 
    int i, contador  = 1; //fatorial
    int base, exp, resultado; //potenciação

    printf("|-----------------------------------|\n");
    printf("|---------CALCULADORA GERAL---------|\n");
    printf("|----------em switch case-----------|\n");
    printf("|-----------------------------------|\n");
    printf("Escolha a operação a ser realizada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Somar uma porcentagem a um determinado número\n");
    printf("6 - Subtrair uma porcentagem a um determinado número\n");
    printf("7 - Fatorial de um determinado número\n");
    printf("8 - Potenciação (escolha a base e o expoente)\n");
    printf("9 - Raiz Quadrada\n");
    scanf("%d", &calc);

    switch(calc){
    case 1:
        printf("digite aqui seu primeiro número: ");
        scanf("%d", &x);
        printf("digite aqui seu segundo número: ");
        scanf("%d", &y);
        printf("a soma dos dois números equivale a: %d", x + y);
    break;
    case 2:
        printf("digite aqui seu primeiro número: ");
        scanf("%d", &x);
        printf("digite aqui seu segundo número: ");
        scanf("%d", &y);
        if(x < y){
            printf("o primeiro número que você digitou é menor que o segundo dando %d, um número negativo.", x - y);
        }else{
            printf("o resultado da subtração equivale a: %d", x - y);
        }
    break;
    case 3:
        printf("digite aqui seu primeiro número: ");
        scanf("%d", &x);
        printf("digite aqui seu segundo número: ");
        scanf("%d", &y);
        printf("o resultado da multiplicação entre os dois números equivale a: %d", x * y);
    break;
    case 4:
        printf("digite aqui seu primeiro número: ");
        scanf("%f", &xquebrado);
        printf("digite aqui seu segundo número: ");
        scanf("%f", &yquebrado);
        if(xquebrado < yquebrado ){
            printf("o primeiro número que você digitou é menor que o segundo e o resultado é %.3f", xquebrado / yquebrado);
        }else{
            printf("o resultado da divisão equivale a %.1f", xquebrado / yquebrado);
        }
    break;
    case 5:
        printf("digite aqui um número: ");
        scanf("%f", &X);

        printf("digite aqui a porcentagem a ser acrescentada ao número: ");
        scanf("%f", &p);

        T = (X * p) / 100;

        printf("ao acrescentar a porcentagem o número ficará: %.2f", X + T);
    break;
    case 6:
        printf("digite aqui um número: ");
        scanf("%f", &X);

        printf("digite aqui a porcentagem a ser acrescentada ao número: ");
        scanf("%f", &p);

        T = (X * p) / 100;

        printf("ao subtrair a porcentagem o número ficará: %.2f", X - T);
    break;
    case 7 :
        printf("digite aqui o número para saber seu fatorial: ");
        scanf("%d", &x);
        
        for(i = 1; i <= x ; i++){
            printf("%d ", i);
            contador = contador * i;
        }
        printf("\no fatorial equivale a %d", contador);
    break;
    case 8 :
        printf("digite aqui a base de sua potenciação: ");
        scanf("%d", &base);

        printf("digite aqui o expoente da sua potenciação: ");
        scanf("%d", &exp);

        resultado = pow(base, exp);

        printf("o resultado da potenciação equivale a: %d", resultado);
    break;
    case 9 :
        printf("digite aqui o número para saber sua raiz quadrada: ");
        scanf("%d", &base);

        raiz = sqrt(base);

        printf("a raiz quadrada do número %d é %.2f", base, raiz);
    break;
    }

    return 0;
}