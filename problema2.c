#include <stdio.h>

int main(){
    int n;
    int div;
    int primo = 1;
    printf("Digite um numero maior que 2:\n");
    scanf("%d", &n);
    for (int div = 2; div < n; div++){
        if (n % div == 0 && primo){
            primo = 0;
            printf("\n%d não eh primo e tem como divisores: ",n);
        }
        if (n % div == 0){
            printf("%d ",div);
        }
    }
    if (primo){
        printf("\n%d eh primo",n);
    }
    return 0;
}




