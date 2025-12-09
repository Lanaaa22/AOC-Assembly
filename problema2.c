#include <stdio.h>

int main(){
    int n;
    int div;
    int conjunto_div[50] = {};
    int qtd_div = 0;
    printf("Digite um numero maior que 2:\n");
    scanf("%d", &n);
    for (int div = 2; div < n; div++) {
        if (n % div == 0){
            conjunto_div[qtd_div] = div;
            qtd_div++;
            
        }
    }
    if (qtd_div >= 1){
        printf("\n%d não eh primo e tem como divisores: ",n);
        for (int i = 0; i < qtd_div; i++) {
            printf("%d ", conjunto_div[i]); // Imprime o conjunto dos divisores
        }
        return 0;
    }
    printf("\n%d eh primo",n);
    return 0;

}

