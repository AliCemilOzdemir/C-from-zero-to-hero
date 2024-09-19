// c21.c 01.08.2024 @alicemilozdemir
// Anket Sonuçlarının Diziler Kullanılarak Özetlenmesi Örneği

// Önişlemci Talimatları
#include<stdio.h>
#include<stdlib.h>
#define CEVAP_BOYUTU 40    // cevap veren 40 kişi var.
#define FREKANS_BOYUTU 11  // puanlar 0 ile 10 arasında.

// main ile program işleyişi başlar.
int main(void) 
{
    size_t cevap; //40 cevap için döngü sayacı
    size_t puan; // 1-10 arası frekans için döngü sayacı
    size_t cevap_atama; // cevapları atayacak
    int cevaplar[CEVAP_BOYUTU];
    
    // frekans sayaçlarına 0 atanması
    int frekans[FREKANS_BOYUTU] = {0};

    // cevapların rastgele olarak atanması
    for(cevap_atama = 0; cevap_atama<CEVAP_BOYUTU; cevap_atama++){
        cevaplar[cevap_atama] = rand()%10 + 1;
    }

    for(cevap=0; cevap<CEVAP_BOYUTU; cevap++){
        ++frekans[cevaplar[cevap]];
    }

    // sonuçların görüntülenmesi
    printf("%s%17s\n","OYLAMA","FREKANS");

    for(puan=1; puan<FREKANS_BOYUTU; puan++) {
        printf("%6u%17d\n",puan,frekans[puan]);
    }

} // main sonu.