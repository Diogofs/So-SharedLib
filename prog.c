#include <stdio.h>
#include <funcs.h>

int main (){
    printf("Main!\n");
    int a = min(2,3); 
    printf("min: %d!\n", a);
    a = max(2,3);
    printf("max: %d!\n", a);
    a = fibonacci(10);
    printf("fibonacci: %d!\n", a);
    a = fatorial(5);
    printf("fatorial: %d\n", a);
    int vetor[11];
    vetor[1] = 5;
    vetor[2] = 4;
    vetor[3] = 2;
    vetor[4] = 3;
    vetor[5] = 10;
    vetor[6] = 8;
    vetor[7] = 9;
    vetor[8] = 1;
    vetor[9] = 7;
    vetor[10] = 6;
    quick (vetor, 1, 10);
    for (a=1;a<=10;a++){
        printf ("%d ", vetor[a]);
    } printf ("\n");
}
