// c42.c 05.08.2024 @alicemilozdemir
// syf 304 "İşaretçi dizileri" konusundan
// syf 310 "Fonksiyonlara işaret eden işaretçiler" konusuna kadar gelir.

// işaretçi dizisi ile kart karıştırma ve dağıtma
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototipler
void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES] ,const char *wFace[] ,const char *wSuit[]); 
// dagitmak diziler uzerinde degisiklik yapmasin diye const yaptik ptr dizilerini.

int main(void)
{
    const char *suit[SUITS] = {"Hearts","Diamonds","Clubs","Spades"};
    
    const char *face[FACES] =
    {"Ace","Deuce","Three","Four","Five","Six",
    "Seven","Eight","Nine","Ten","Jack","Queen","King"};

    // deck dizisini yukle
    unsigned int deck[SUITS][FACES] = {0}; // diziler fonklara referans ile aktarılır.

    srand(time(NULL));

    shuffle(deck); // bunun ile birlikte
    unsigned row,column; 

    deal(deck,face,suit);
} // main sonu


void shuffle(unsigned int wDeck[][FACES])
{
    size_t row;
    size_t column;
    size_t card;

    for (card = 1; card <= CARDS; card++)
    {
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        }while(wDeck[row][column] != 0);
    
    wDeck[row][column] = card;
    } // for sonu


} // shuffle fonk sonu.

void deal(unsigned int wDeck[][FACES] ,const char *wFace[] ,const char *wSuit[])
{
    size_t row;
    size_t column;
    size_t card;

    for (card = 1; card <= CARDS; card++)
    {
        for (row = 0; row < SUITS; row++)
        {
            for (column = 0; column < FACES; column++)
            {
                if(wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card%4==0 ? '\n' : '\t');

                } // if sonu


            } // for3 sonu
            
        } // for2 sonu
        
    } // for 1 sonu
    
} // deal fonk sonu.
