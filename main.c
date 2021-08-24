#include <stdio.h>
#include "libgroup01.h"

int main(){

    int x, y, z;

    printf("Escreva dois nomeros para serem somados\n");

    scanf("%d%d",&x,&y);

    z = soma(x, y);

    printf("A soma e: %d\n", z);

    return 0;

}