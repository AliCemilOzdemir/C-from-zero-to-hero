// c36.c 05.08.2024 @alicemilozdemir
// syf 282 "Argümanları Fonksiyonlara Referans İle Aktarım" konusundan
// syf 287 "Bir karakter dizinini NAN-Sabit Verilere NAN-Sabit İşaretçi ile büyük harflere donusturme"
//  konusuna kadar gelir.


// Argümanları Fonksiyonlara Referans İle Aktarım
    // Argümanlara Fonksiyonlara aktarmanın 2 yolu vardur : Referans ile, değer ile
    // C'de tüm argümanlar değer ile aktarılır .
    // pointerler kullanilarak referans ile aktarimin bir benzeri yapilabilir.

// Onislemci Talimatlari
#include<stdio.h>

//fonk bildirimleri
void cubeByReference(int *nPtr);
/*Bu bildirim cubeByReference fonksiyonunun argüman olarak bir tamsayı değişkeninin adresini aldığını ,
Bu adresi yerel olarak nPtr içinde tuttuğunu ve geriye bir değer döndürmedigini belirtir.*/


// main fonk baslangici
int main()
{
    int number = 5;

    printf("number: %d\n",number);
    cubeByReference(&number);
    printf("the new value of number: %d",number);

} // main fonk sonu.


void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr ; // nPtr'ın içerik operatörünün küpü.
}
