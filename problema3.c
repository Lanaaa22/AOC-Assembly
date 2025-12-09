#include <stdio.h>

int SomaPA(int pTermo, int uTermo, int qtdTermo) {
    return ((pTermo + uTermo) * qtdTermo)/2;
}

int main()
{
    int pTermo;
    int uTermo;
    int qtdTermo;
    int soma;
    printf("Primeiro termo: ");
    scanf("%d", &pTermo);
    
    printf("Último termo: ");
    scanf("%d", &uTermo);
    
    printf("Quantidade de termos: ");
    scanf("%d", &qtdTermo);
    soma = SomaPA(pTermo, uTermo, qtdTermo);
    printf("A soma dos termos da PA é: %d\n", soma);
    return 0;
}

