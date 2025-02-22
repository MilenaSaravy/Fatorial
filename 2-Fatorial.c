#include <stdio.h>

int main() {
    int numero, fatorial = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) printf("Erro: Fatorial de numero negativo não é definido.\n");
    else{
        for (int i = 1; i <= numero; i++) fatorial *= i;
        printf("o fatorial de %d é: %d\n", numero, fatorial);
    }
    
    return 0;
}