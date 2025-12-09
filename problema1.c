#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int media;
    printf("Digite a nota 1: ");
    scanf(" %d", &n1);
    printf("Digite a nota 2: ");
    scanf(" %d", &n2);
    printf("Digite a nota 3: ");
    scanf(" %d", &n3);
    media = (n1+n2+n3) / 3;
    if (media >= 6){
        printf("APROVADO! :)\n");
    }
    else {
        printf("REPROVADO :(\n");
    }
    printf("SUA MEDIA FOI %d\n",media);
    return 0;
}
