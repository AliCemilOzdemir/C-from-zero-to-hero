// c17.c 01.08.2024 @alicemilozdemir
// syf 185 "5.13 : Kapsam Konuları" konusundan
// syf 188 "5.14 : Özyineleme" konusuna kadar gelir

// önişlemci talimatları
#include<stdio.h>

// fonk bildirimleri
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // genel değişken

// program main'i yürütmeyle başlar
int main(void) 
{
    int x = 5; //main'e yerel değişken

    printf("Local x in outer scope of main is %d\n",x);

    { // yeni kapsam başlar.
        int x = 7; // yeni kapsama yerel değişken

        printf("Local x in inner scope of main is %d\n",x);
    } // yeni kapsamın sonu.

    printf("Local x in outer scope of main is %d\n",x);

    useLocal();
    useStaticLocal();
    useGlobal();

    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\nLocal x in main is %d\n",x);
}//main sonu.

// useLocal her çağrıda x yerel değişkenine yeniden başlangıç değeri verir.
void useLocal(void)
{
    int x = 25;
    printf("\nLocal x in useLocal is %d after entering useLocal\n",x);
    ++x;
    printf("\nLocal x in useLocal is %d before exiting useLocal\n",x);
}// useLocal fonk. sonu


// useStaticLocal static x yerel değişkenine fonk. yalnızca ilk çağrıldığı zaman 
// başlangıç değeri verilir: x'in değeri bu fonksiyona yapılan çağrılar arasında saklanır. 
void useStaticLocal(void)
{
    static int x = 50;
    printf("\nLocal static x in useStaticLocal is %d after entering useStaticLocal\n",x);
    ++x;
    printf("\nLocal static x in useStaticLocal is %d before exiting useStaticLocal\n",x);
}// useStaticLocal fonk. sonu


// useGlobal fonk. her çağrıda genel x değişkenini değiştirir çünkü yerel bir x tanımlaması yapmıyor.
void useGlobal(void)
{
    printf("\nGlobal x in useGlobal is %d after entering useGlobal\n",x);
    x*=10;
    printf("\nGlobal x in useGlobal is %d before exiting useGlobal\n",x);
}// useGlobal fonk. sonu

// statik değişkenler için program yürütmeye başlamadan önce hafızada yalnızca 1 kez yer ayrılır
// ve değer ataması yapılır.Static olarak ifade edilmiş değişkenler kapsam dışında olsalar bile
// değerlerini korurlar.