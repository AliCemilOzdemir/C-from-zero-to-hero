// c23.c 01.08.2024 @alicemilozdemir
/* syf 227 '6.000.000 kere zar atılması ve sonuçların dizide özetlenmesi' örneğini ele alır .*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 7

// main başlangıcı
int main(void)
{
    /*
    bir dizimiz olacak ve bu dizimiz 0-1-2-3-4-5-6 indekslerinden oluşacak.
    ve bu 7 indeksin de değeri sıfır olacak .Zar her atıldığında kaç gelirse
    küpün o indeksi artırılacak.
    */
   
    int kup[BOYUT]={0};
    unsigned int atis;
    size_t yuz;

    srand(time(NULL));

    for(atis=0; atis<6000000; atis++) 
    {
        yuz = ( rand() % 6 ) + 1;
        ++kup[yuz];
    }

    printf("%10s%20s\n","Kupun Yuzu","Kac kere geldi?");

    for(yuz=1; yuz<7; yuz++) 
    {
        printf("%10u%20d\n",yuz,kup[yuz]);
    }
    
}// main sonu.