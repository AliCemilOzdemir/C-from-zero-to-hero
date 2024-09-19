// c25.c 02.08.2024 @alicemilozdemir
// syf 230 'Statik ve Otomatik Yerel Diziler' konusundan
// syf 232 '6.5:Dizilerin Fonksiyonlara geçirilmesi' konusuna kadar gelir.

// PERFORMANS ÖNERİSİ
/*Kapsam içinde ve dışında kalarak sıklıkla çağrılan fonksiyonlarda otomatik diziler yer alıyorsa ,diziyi statik 
yapmak her fonksiyon çağrısında yeniden yaratmamak açısından avantaj sağlar - zamanlama*/

// statik dizilere program başlangıcında değer ataması gerçekleşir .Eğer değer ataması yoksa 0 değeri atanır.

#include<stdio.h>

// fonk. bildirimleri
void staticArrayInit(void);
void automaticArrayInit(void);

// main başlangıcı
int main(void) 
{
    printf("%s","Fonksiyonlarin ilk defa cagrilmasi");
    staticArrayInit();
    automaticArrayInit();

    printf("%s","\n\nFonksiyonlarin ikinci defa cagrilmasi");
    staticArrayInit();
    automaticArrayInit();
}// main sonu
void staticArrayInit(void) {
    static int array1[3];
    size_t i;
    printf("\nstaticArrayInit fonksiyonunun bhaslangic degerleri : ");
    for(i=0; i<3; ++i) {
        printf("%d ",array1[i]);
    }
    printf("\nstaticArrayInit fonksiyonunun bitis degerleri : ");
    for(i=0; i<3; ++i) {
        printf("%d ",array1[i]+=5);
    }
}

void automaticArrayInit(void) {
    auto int array1[3]={1,2,3};
    size_t i;
    printf("\nautomaticArrayInit fonksiyonunun bhaslangic degerleri : ");
    for(i=0; i<3; ++i) {
        printf("%d ",array1[i]);
    }
    printf("\nautomaticArrayInit fonksiyonunun bitis degerleri : ");
    for(i=0; i<3; ++i) {
        printf("%d ",array1[i]+=5);
    }
    puts("");
}