// c46.c 06.08.2024 @alicemilozdemir
// syf 342 "Karakter Dizini Dönüştürme Fonksiyonları" konusundan
// syf 346 "8.5 Standart Giriş Çıkış Kütüphanesi Fonksiyonları" konusuna kadar gelir.


// Karakter Dizini Dönüştürme Fonksiyonları
/*

double strtod(const char *nPtr ,char **endPtr)  -  nPtr karakter dizinini double turune donusturur.
long strtol(const char *nPtr ,char **endPtr ,int base)  -  nPtr karakter dizinini long turune donusturur.
long strtoul(const char *nPtr ,char **endPtr ,int base)  -  nPtr karakter dizinini unsigned long turune donusturur.

long strtoll(const char *nPtr ,char **endPtr ,int base)  -  nPtr karakter dizinini long long turune donusturur.
long strtoull(const char *nPtr ,char **endPtr ,int base)  -  nPtr karakter dizinini unsigned long long turune donusturur.

*/

#include<stdio.h>
#include<stdlib.h> // standart başlık dosyası

int main(void)
{
    
    const char *string ="51.2% are admitted";
    const char *string2 = "-1234567ABC";
    const char *string3 = "1234567abc";

    double d;
    long x;
    unsigned long y;

    char *stringPtr;
    char *remainderPtr;
    char *remainderPtr2;

    d = strtod(string,&stringPtr);
    printf("\n'%s' cumlesi strtod fonk ile su oldu :\n",string);
    printf("'%f' double degeri ve '%s' cumlesi",d,stringPtr);

    x = strtol(string2,&remainderPtr,0); // ikinciye NULL yazarsan artan dizi gözardı edilir.
    printf("\n'%s' cumlesi strtol fonk ile su oldu :\n",string2);
    printf("'%d' long degeri ve '%s' cumlesi",x,remainderPtr);

    
    y = strtoul(string3,&remainderPtr2,0); // ikinciye NULL yazarsan artan dizi gözardı edilir.
    printf("\n'%s' cumlesi strtoul fonk ile su oldu :\n",string3);
    printf("'%u' unsigned long degeri ve '%s' cumlesi",y,remainderPtr2);
}