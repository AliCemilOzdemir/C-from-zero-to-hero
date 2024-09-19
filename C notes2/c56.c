// c56.c 10.08.2024 @alicemilozdemir
// syf 409 "Yapı Üyelerine Erişim" konusundan
// syf 412 "10.7:Yüksek Performanslı Kart Karıştırma ve Dağıtımcının Simülasyonu" konusuna kadar gelir.

#include<stdio.h>

struct card
{
    char *face;
    char *suit;
};

typedef struct card Card; // takma isim ile yapıları kullanma

typedef struct
{
    char firstName[20];
    char lastName[20];
    double salary;
} Employee; // typedef ile isim etiketi olmaksızın tanımlama.

int main(void)
{
    struct card aCard;
    struct card *cardPtr;

    aCard.face = "Ace";
    aCard.suit = "Hearts";
    
    cardPtr = &aCard;

    printf("%s%s%s\n%s%s%s\n%s%s%s\n",
           aCard.face ," of " ,aCard.suit,
           cardPtr -> face ," of " ,cardPtr -> suit ,
           (*cardPtr).face ," of " ,(*cardPtr).suit ); // 3 adet "Ace of Hearts\n" çıktısı verir.

    // (*cardPtr).face ifadesinde parantezlerin olmasi zorunludur cunku, '.' ve '->' () ve [] ile birlikte en yuksek oncelige sahip operatörlerdir.


}