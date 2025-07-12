#include "stdio.h"

int integerA = 15;
float floatB = 23;
char charC = 'A';
double doubleD = 3.145962;

int main(){
    printf("---  VARIABLE NAME  ---  VALUE  --- MEMORY ADDRESS --- SIZE IN MEMORY ---\n");
    printf("---    integerA     ---   %d    ---   %p   --- %d bytes\n", integerA, &integerA, sizeof(integerA));
    printf("---     floatB      ---   %.2f  ---   %p   --- %d bytes\n", floatB, &floatB, sizeof(floatB));
    printf("---     charC       ---    %c   ---   %p   --- %d bytes\n", charC, &charC, sizeof(charC));
    printf("---    doubleD      ---   %lf   ---   %p   --- %d bytes\n", doubleD, &doubleD, sizeof(doubleD));

    return 0;
}