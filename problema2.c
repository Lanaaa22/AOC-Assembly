#include <stdio.h>

int main(){
    int n;
    int div;
    int conjunto_div[50] = {};
    int qtd_primo = 0;
    printf("Digite um número maior que 2:\n");
    scanf("%d", &n);
    for (int div = 2; div < n; div++) {
        if (n % div == 0){
            conjunto_div[qtd_primo] = div;
            qtd_primo++;
            
        }
    }
    if (qtd_primo >= 1){
        printf("\n%d não eh primo e tem como divisores: ",n);
        for (int i = 0; i < qtd_primo; i++) {
            printf("%d ", conjunto_div[i]); // Imprime o conjunto dos divisores
        }
        return 0;
    }
    printf("\n%d eh primo",n);
    return 0;
}