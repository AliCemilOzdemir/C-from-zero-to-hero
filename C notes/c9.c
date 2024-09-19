// c9.c 30.07.2024
// @alicemilozdemir
// syf 138 'Yapısal Programlama Özeti'nden
// syf 160 'Math Kütüphane Fonksiyonları' konusuna kadarki bölümü içerir

#include<stdio.h>
int main(void) {
/*
YAPISAL PROGRAMLAR OLUŞTURMAK İÇİN KURALLAR

1) EN BASİT AKIŞ DİYAGRAMI İLE BAŞLANIR(BAŞLA-EYLEM-BİTİR)(ELİPS-DİKDÖRTGEN-ELİPS)
2) HERHANGİ BİR DİKDÖRTGEN(EYLEM), ARDIŞIK İKİ DİKDÖRTGEN(EYLEMLER) İLE YER DEĞİŞTİREBİLİR.
(2-YIĞMA KURALI)
3) HERHANGİ BİR DİKDÖRTGEN(EYLEM) HERHANGİ BİR KONTROL İFADESİ İLE DEĞİŞTİRİLEBİLİR.
(3-KÜMELEME KURALI)
4) 2. VE 3. KURALLAR İSTENİLEN SIKLIKLA UYGULANABİLİR.

KONTROL İFADELERİ :SIRA ,İF ,İF...ELSE ,SWİTCH ,WHİLE ,DO...WHİLE ,FOR.

*/

// scanf ifadesi başarılı olduğunda kaç değişkenin değerini aldıysa o sayıyı döndürür.
// başarısız olduğunda ise stdio.h'ta tanımlı EOF değerini döndürür.
float x,y;
puts("Toplamlarini gormek icin lutfen iki deger giriniz...");
if(2 == scanf("%f%f",&x,&y) ) {
    printf("Toplam : %8.2f\n",x+y);
}
else {
    puts("Hatali Giris.");
    puts("Lutfen tekrar deneyiniz.");
}
unsigned int rakam;
puts("Lutfen bir rakam giriniz : ");
if(scanf("%u",&rakam) == 1 && rakam<10) {
    printf("Tebrikler bir rakam girdiniz...");
}

else
puts("daha bir rakamin ne oldugunu bile bilmiyorsun!");
// karakterler tek tırnak içinde temsil edilir.

//YAPISAL PROGRAMLAMA VE YAPISAL OLMAYAN PROGRAMLAMA ARASINDAKİ FARK
    return 0;
}