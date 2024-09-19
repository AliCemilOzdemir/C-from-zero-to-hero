// c57.c 10.08.2024 @alicemilozdemir
// syf 412 "10.7:Yüksek Performanslı Kart Karıştırma ve Dağıtımcının Simülasyonu" konusundan
// syf 415 "10.8 Birlikler(Union)" konusuna kadar gelir.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card yapısının tanımlanması
struct card {
const char *face; // face işaretçisi tanılmanıyor
const char *suit; // suit işaretçisi tanılmanıyor
}; // card yapı51 sonu

typedef struct card Card; // card yapısı için yeni tip ismi

// prototipler
void fillDeck( Card * const wDeck, const char *wFace[], const char *wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
        Card deck[ CARDS ]; // Cards dizisi tammla

        // işaretçi dizilerinin ilklendirilmesi
        const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King"};

        // işaretçi dizilerinin ilklendirilmesi
        const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

        srand( time( NULL) ); // rastgele

        fillDeck( deck, face, suit ); // desteye kartları yükle
        shuffle( deck ); // Cardlar rastgele yerleştir
        deal( deck ); // 52 Card'ın tümünü dağıt
} // main sonu

// Card yapılarının içine stringler yerleştiriliyor
void fillDeck(Card * const wDeck, const char * wFace[],const char * wSuit[] )
{
        size_t i; // sayıcı
        // wDeck fonksiyonunun sonu
        for ( i = 0; i < CARDS; ++i ) 
        {
        wDeck[ i ].face = wFace[ i % FACES ];
        wDeck[ i ].suit = wSuit[ i / FACES ];
        } // end for
} // fillDeck fonksiyonu sonu

// kartları karıştır
void shuffle( Card * const wDeck )
{
        size_t i; // sayac1
        size_t j; // değişken 0 - 51 arasında rastgele değer tutuyor
        Card temp; // Cardları değiştirmek için geçici yapı tanımlanıyor

        // wDeck üzerinden döngü rastgele olarak cardları değiştiriyor
        for ( i = 0; i < CARDS; ++i ) 
        {
        j= rand() % CARDS;
        temp = wDeck[ i ];
        wDeck[i ]=wDeck[ j ];
        wDeck[ j ] = temp;
        } // end for
} // shuffle fonksiyonu sonu

// kartları dağıt
void deal( const Card * const wDeck )
{
        size_t i; // say1c1

        // wDeck üzerinden döngü
        for ( i = 0; i < CARDS; ++i ) 
        {
        printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
        ( i + 1 ) % 4 ? " " : "\n" );
        } // for döngüsü sonu

} // deal fonksiyonun sonu