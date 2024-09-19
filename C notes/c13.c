// c13.c 31.07.2024
// @alicemilozdemir
// syf 177 'Rastgele Sayı Üreticisini Rastgele Hale Getirmek' konusundan
// syf 179 '5.11 Örnek: Bir Şans Oyunu' konusuna kadarki bölümü içerir

// önişlemci talimatları
#include<stdio.h>   // standart giriş çıkış fonksiyonlarının bildirimleri bu başlıkta.
#include<stdlib.h>  // srand fonksiyonunun fonk. bildirimi bu başlıkta bulunur.
#include<time.h>    // time fonksiyonunun bildirimini içerir.

// main fonksiyonu başlangıcı
int main() {

//Rastgele Sayı Üreticisini Rastgele Hale Getirmek

unsigned int i; // sayaç için kullanılacak
unsigned int seed; // srand tohumu.

// rastgele sayı üreticisinin tohumunu kullanıcıdan al.
puts("Tohumu Kullanicidan Alan Program\n");
printf("%s","Enter Seed : "); 
scanf("%u",&seed);

srand(seed);// rastgele sayı üreticisinin çekirdeğini(tohumunu) gir.
//    srand fonksiyonu unsigned int bir değeri argüman olarak alır.Aldığı bu değere tohum denir.
//    ve aynı tohum değerleri için aynı sayı serisini ,farklı tohum değerleri için farklı 
//    sayı serisini döndürür.

// 10 kere zar atımı yapılacak.
for(i = 1; i<=10; i++) {
    printf("%-10.d", (rand() % 6)+1 );

    // her 5 çıktıda bir aşağı in.
    if(i==5){
        puts("");
    }// if sonu.

}// for sonu.

// Tohumu Time fonksiyonundan alan dolayısıyla hep farklı çıktılar üreten program
puts("\n\n\nTohumu Time fonksiyonundan Alan ve Hep Farkli Ciktilar Ureten Program\n");

srand(time(NULL)); // time fonksiyonu 1 Ocak 1970 gece yarisindan itibaren geçen saniyelerin ölçüsüdür ,her an değişir.
printf("time fonksiyonu : %d\n",time(NULL));


// // 10 kere zar atımı yapılacak.
for(i = 1; i<=10; i++) {
    printf("%-10.d", (rand() % 6)+1 );

    // her 5 çıktıda bir aşağı in.
    if(i==5){
        puts("");
    }// if sonu.

}// for sonu.


/*
srand yalnızca tohumu belirler .Rastgele sayılar için halen rand fonksiyonunu kullanmak durumundayız.

0 <= rand() <= RAND_MAX
rand fonksiyonu ile herhangi bir aralıktaki sayıları rastgele seçmek mümkündür.
n = a + rand() % b

durumunda b'ye ölçekleme çarpanı(b 18 ise 18 adet ardışık sayı içinden seçim yaparız.)
a'ya kayma değeri(a=1 ise sayı aralık 1'den başlar ,60 ise 60'tan) denir.

*/

    return 0;
} // main fonksiyonu sonu.