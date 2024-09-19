// c12.c 30.07.2024
// @alicemilozdemir
// syf 174 'Rastgele Sayı Üretme' konusundan
// syf 177 'Rastgele Sayı Üreticisini Rastgele Hale Getirmek' konusuna kadarki bölümü içerir

//önişlemci talimatları
#include<stdio.h>
#include<stdlib.h>

// main fonksiyonunun başlangıcı
int main(void) {

// rand fonksiyonu : stdlib.h kütüphanesinin bir fonksiyonudur . 0 ile RAND_MAX(stdlib'in bir değişkeni) arasında rastgele
// değerler alır.Aşağıda rand fonksiyonunun rastgeleliği kullanılarak zar atma 20 kere modellenmiştir :

for(int i=1; i<=20; i++) {
    printf("%-10.d",1 + (rand()%6) );
    if(i%5 == 0) {
        puts("");        
    }// if sonu

}// for sonu

// 6 milyon zar atımı sonucu her sayının kaç kere geldiğini analiz edelim.
int deger;// zarin kac geldigi
int birGeldi,ikiGeldi,ucGeldi,dortGeldi,besGeldi,altiGeldi;//zarın her durumda kaç geldiğini sayacagiz.

birGeldi=ikiGeldi=ucGeldi=dortGeldi=besGeldi=altiGeldi=0;// ilk basta hic atim olmadigi icin hepsi 0.

for(int atis=1; atis<=6000000; atis++) { //6.000.000 atis yapiliyor
    deger =(rand()%6)+1; // her bir degerin sayimi yapilacak.

    switch(deger) {//sayimlar yapiliyor.
        case 1:
        ++birGeldi;
        break;
        
        case 2:
        ++ikiGeldi;
        break;

        case 3:
        ++ucGeldi;
        break;

        case 4:
        ++dortGeldi;
        break;
        
        case 5:
        ++besGeldi;
        break;

        case 6:
        ++altiGeldi;
        break;
    } // çoklu seçim switch sonu.
}// for sonu

// Değerleri içeren tabloyu yazdırma ifadeleri :
printf("\n%s%30s","Zar Numaralari","Kac Kere Geldiler");
printf("\n%14.d%30.d",1,birGeldi);
printf("\n%14.d%30.d",2,ikiGeldi);
printf("\n%14.d%30.d",3,ucGeldi);
printf("\n%14.d%30.d",4,dortGeldi);
printf("\n%14.d%30.d",5,besGeldi);
printf("\n%14.d%30.d",6,altiGeldi);
    
printf("\nToplam :%10d",birGeldi+ikiGeldi+ucGeldi+dortGeldi+besGeldi+altiGeldi); //atış sayısını verir 6.000.000 değilse hata.

// rand fonksiyonu hep aynı sayıları üretir .Buna sözde rastgele sayı üretimi denir.


    return 0;

}//main fonksiyonunun sonu.