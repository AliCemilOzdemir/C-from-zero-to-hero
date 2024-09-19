// c22.c 01.08.2024 @alicemilozdemir
/*Dizi elemanı değerlerinin histogram ile gösterilmesi örneğini ele alır.*/

// önişlemci talimatları
#include<stdio.h>
#define BOYUT 10

// main fonk başlangıcı.
int main(void) 
{
    int n[BOYUT] = {19,3,15,7,11,9,13,5,17,1}; // n dizisi için başlangıç değeri atama listesi kullanımı
    size_t i; // dizi elemanları için dıştaki for döngüsü sayacı
    int j;    // her histogram sütundaki yıldızları sayan iç for döngüsü sayacı

    printf("%s%13s%17s\n","ELEMAN","DEGER","HISTOGRAM");

    for(i=0; i<BOYUT; i++) {
        printf("%6u%13d        ",i,n[i]);
        for(j=0; j<n[i]; j++){
            printf("%c",'*');
        }
        puts(""); 
    }
}// main sonu.
// char '' ile kullanılmazsa hata oluşur.
// çevrim belirteçlerini doğru kullanmayı unutma.