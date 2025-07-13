#include "stdio.h"
#include "time.h"

struct myStructure{
    int a;
    float b;
};

int main(){
    //POINTER
    int A = 15;
    int *Aptr = &A;
    printf("%p\n", Aptr);

    struct myStructure struct1;
    //--- STRUCTURE ---
    struct1.a = 12;
    struct1.b = 13.65;
    printf("struct1.a: %d\nstruct1.b: %.2f\n", struct1.a, struct1.b);

    //--- STRUCTURE POINTER ---
    struct myStructure *ptr;
    printf("myStructure (struct1) address: %p\n", ptr);


    //--- ENUM ---
    enum Level{
        LOW,
        MEDIUM,
        HIGH
    };
    enum Level myEnum;
    myEnum = MEDIUM;
    printf("%d\n", myEnum);
    //--- ENUMS IN SWITCH ---
    switch (myEnum){
        case 1:
            printf("myEnum: 1\n");
            break;
        case 2:
            printf("myEnum: 2\n");
            break;
        case 3:
            printf("myEnum: 3\n");
            break;
        default:
            break;
    }


    time_t currentTime;

    time(&currentTime);

    printf("Current time is %s", ctime(&currentTime));




    





    return 0;
}