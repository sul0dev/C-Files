#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    /*int n = 5;

    int *ptr = malloc(n * sizeof(int));
    if (ptr == NULL){
        printf("Memory couldn't reserved.");
        return 1;
    }else{
        printf("Memory reserved for %zu bytes\n", n * sizeof(int));
    }
    
    _sleep(1000);

    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
        printf("ptr[i] (4 bytes): %d\n", ptr[i]);
    }
    
    



    free(ptr);
    printf("allocated memory for ptr is now free.\n");*/

    /*int amount = 4;

    int *ptr;
    ptr = calloc(amount, sizeof(*ptr));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    
    for(int i = 0; i < amount; i++){
        printf("%d\n", ptr[i]);
    }*/

    int k = 0;

    int *ptr1 = malloc(128);

    int *ptr2 = realloc(ptr1, 256);


    if(ptr2 != NULL){
        ptr1 = ptr2;
        for(int i = 0; i < 64; i++){
            ptr1[i] = k;
            printf("ptr1[i]: %d\n", ptr1[i]);
            k++;
        }
    }else{
        printf("PROCESS UNSUCCESS.");
        free(ptr1);
        return 1;
    }







    return 0;
}