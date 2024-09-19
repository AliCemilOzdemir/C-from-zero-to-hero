// c10.c 30.07.2024
// @alicemilozdemir
// syf 160 'Math Kütüphane Fonksiyonları'ndan
// syf 168 'Arguman Uyumu ve Genel Aritmetik çevrim kuralları' konusuna kadarki bölümü içerir

// önişlemci talimatları
#include<stdio.h>
#include<math.h>

// fonksiyon bildirimleri
int kareAl(int girdi);
int enBuyuguBul(int girdi1,int girdi2,int girdi3);

//main fonksiyonu başlangıcı
int main(void) {


// MATH kütüphanesindeki ondalık değer gönderen fonksiyonların tümü double türü veri gönderirler.

/*
Fonksiyon       Açıklama         Örnek
-------------------------------------------------------
sqrt(x)         square root             sqrt(900) = 30.000000
cbrt(x)         cube root               cbrt(27) = 3.000000
exp(x)          e^x                     exp(2) = 7.389056
log(x)          ln(x)                   ln(7.389056) = 2.000000
log10(x)        log(x)                  log10(100) = 2.000000
fabs(x)         |x|                     fabs(10) = 10.000000
ceil(x.y)       x+1                     ceil(10.7) = 11.000000
floor(x.z)      x                       floor(10.7) = 10.000000
pow(x,y)        x^y                     pow(2,3) = 8.000000  
fmod(x,y)       ondalık kalan(x/y)      fmod(13.657,2.333) = 1,992 = 2.333*5 + 1,992
sin(x)          sin(x)-radyan           sin(3.141593/6) = 0.500000
cos(x)          cos(x)-radyan           cos(3.141593/3) = 0.500000
tan(x)          tan(x)-radyan           tan(3.141593/4) = 1.000000

*/

// ilk 10 sayının karesini alma.
for(int x = 1; x<10; ++x) {
    printf("%d ",kareAl(x));
}// döngü sonu.

// fonksiyon void türündeyse return; ile fonksiyon çıkışı sağlanabilir. Buna hiç gerek olmadan '}' ile de çıkış sağlanır

// girilen 3 sayidan en buyugunu bulma...
// değişken tanımlamaları
int a,b,c;

// program akışı
puts("\nPlease enter three numbers with pressing enter after writing each of them.");
scanf("%d%d%d",&a,&b,&c);
printf("The maximum number is :  %d",enBuyuguBul(a,b,c));
printf("\n%d",kareAl(4.9));

    return 0;
}// main fonksiyon sonu.

// kareAl fonksiyonu baslangici
int kareAl(int girdi) {
    return girdi*girdi;
}// kareAl fonksiyonu sonu.

// enBuyuguBul fonksiyonu baslangici
int enBuyuguBul(int girdi1,int girdi2,int girdi3){
    int enBuyuk = girdi1;

    if(girdi2>enBuyuk) {
        enBuyuk = girdi2;
    }
    if(girdi3>enBuyuk) {
        enBuyuk = girdi3;
    }

    return enBuyuk;
}// enBuyuguBul fonksiyonu sonu.