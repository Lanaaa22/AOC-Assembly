#include <stdio.h>

int main(){
    int n;
    int divisor;
    int primo = 1;
    printf("Digite um numero maior que 2: ");
    scanf("%d", &n);
    for (int divisor = 2; divisor <= n/2; divisor++){
        if (n % divisor == 0 && primo){
            primo = 0;
            printf("\n%d nao eh primo e tem como divisores: ",n);
        }
        if (n % divisor == 0){
            printf("%d ",divisor);
        }
    }
    if (primo){
        printf("\n%d eh primo",n);
    }
    return 0;
}



