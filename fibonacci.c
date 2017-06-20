#include <stdio.h>
int fibonacci (int n){
    int i, aux;
    int a = 0;
    int b = 1;
    for (i = 0; i < n; i++){
        aux = a + b;
        a = b;
        b = aux;
        printf ("%d ", aux);
    }
    return aux;
}
