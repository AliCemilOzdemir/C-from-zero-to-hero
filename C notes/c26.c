// c26.c 02.08.2024 @alicemilozdemir
// syf 232 '6.5:Dizilerin Fonksiyonlara geçirilmesi' konusundan
// syf 235 'const anahtar sözcüğünün dizi parametreleri ile kullanımı' konusuna kadar gelir.

// C otomatik olarak dizileri fonksiyonlara referans ile geçirir. - C dilinde tüm argümanlar
// değerleri ile geçirilseler bile bu bir çelişki değildir.
// çağrılan fonksiyonlar çağrı yapanın orjinal dizisindeki elemanların değerlerini değiştirir.
// dizinin ismi aslında ilk elemanın adresini temsil etmektedir. Böylece fonk. dizinin yerini bilir.
// fonk. dizinin değerlerini değiştirdiğinde elemanlarının bellekteki konumlarını değiştirmiş olur.

// dizilerin adresleri ile geçirilmesi sürekli kopya oluşumunu engelleyeceğinden performansı artırır.

// tüm diziler referansla geçirilse bile ,
// dizideki bir elemanı(tüm elemanları değil) değerle geçirebilirsiniz - bu tek elemana nicelik denir

#include<stdio.h>
#define BOYUT 5

void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main() {
    // baska bir ornek     
    char array[5];
    printf("array = %p\n&array[0] = %p\n&array = %p\n",array,&array[0],&array); // üçü de aynı çıktı. 
    // bu örnek dizi isminin dizideki ilk elemanın adresi olduğunu gösterir.
    // %p dönüşüm belirteci adres yazdırır.
    
    // diger ornek
    int a[BOYUT]={0,1,2,3,4};
    size_t i;
    puts("Tum dizinin referans ile gecirilmesinin etkisi:\n\nOrjinal dizinin degerleri:");
    // orjinal dizinin çıktısı
    for(i=0; i<BOYUT; ++i) {
        printf("%3d",a[i]);
    }
    puts("");

    //modifyArray fonksiyonuna dizinin referansının geçirilmesi
    modifyArray(a,BOYUT);

    puts("degistirilen dizi degerleri :");

     for(i=0; i<BOYUT; ++i) {
        printf("%3d",a[i]);
    }

    printf("\n\n\nDeger ile dizi elemani gecirmenin etkisi \n\na[3] elemaninin degeri %d\n",a[3]);
    modifyElement(a[3]);
    printf("a[3] elemaninin degeri %d\n",a[3]);
}

void modifyArray(int b[], size_t size) 
{
    size_t j;
    
    for(j=0; j<size; j++) {
        b[j] *= 2;
    }

}// modify array sonu


void modifyElement(int e) 
{
    printf("modifyElement degeri : %d\n",e*=2);
}