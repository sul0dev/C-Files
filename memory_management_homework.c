#include "stdio.h"
#include "stdlib.h"

int main(){
    int kapasite = 3;
    int k = 0;
    int sayi;
    int toplamGirilenSayi = 0;
    int *sayilar = malloc(kapasite * sizeof(int));

    float ortalama = 0.0;

    while(1){
        printf("Bir sayi giriniz(-1 ile cikis): ");
        scanf("%d", &sayi);

        if(sayi == -1){
            for(int i = 0; i < toplamGirilenSayi; i++){
                ortalama = ortalama + sayilar[i];
            }
            printf("Ortalama: %.2f", ortalama / toplamGirilenSayi);
            free(sayilar);
            break;
        }else{
            sayilar[k] = sayi;
            toplamGirilenSayi++;
        }

        if(toplamGirilenSayi == kapasite){
            int *sayilar2 = realloc(sayilar, (kapasite + 3) * sizeof(int));
            if(sayilar2 == NULL){
                printf("Liste genisletilemedi.");
                return 1;
            }
            else{
                printf("Liste +3 genisletildi.\n");
                kapasite += 3;
            }
        }

        k++;
    }


    return 0;
}