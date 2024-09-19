// c51.c 07.08.2024 @alicemilozdemir
// syf 380 "C formatlı Giriş/Çıkış" konusundan
// syf 382 "Ondalıklı Sayıların Yazdırılması" konusuna kadar gelir.

// program çalışmaya başladığında programa otomatik olarak 3 akış bağlanır :
    // standart giriş akışı
    // standart çıkış akışı
    // standart hata akışı

//  Tamsayıların yazdırılması için dönüşüm belirteçleri
    /*
    Dönüşüm Belirteci                    Tanımlama
    d                      İşaretli bir tamsayıyı onluk sistemde görüntüler.

    i                      İşaretli bir tamsayı onluk sistemde görüntüler. [Not. i ve d
                        belirteçleri scanf fonksiyonu kullanıldığında farklı anlam taşır]


    o                      İşaretsiz bir tamsayı sekizlik sistemde görüntüler.

    u                      İşaretsiz bir tamsayıyı onluk sistemde görüntüler.

    x veya X               İşaretsiz bir tamsayıyı onaltılık sistemde görüntüler. X,
                        0-9 arasındaki sayıları ve (büyük harf) A-F arası harfleri
                        görüntüler; x, 0-9 arası harfleri ve (küçük harf) a-f arası
                        harfleri görüntüler.


       long      long long
   h , l   veya   ll ("l" harfi)    Herhangi bir tamsayı belirtecinden önce yerleştirildiklerinde
short                               sırasıyla, short, long ya da long long türündeki tamsayıları
                                    görüntülerler. Bunlara uzunluk belirteçleri de denir.
    */

// eksi bir değeri işaretsiz değer bekleyen bir dönüşüm belirteciyle yazdırmak bir hatadır


#include <stdio.h>

int main( void )
{
printf("%d\n", 455);
printf( "%i\n", 455 ); // printf ifadesinde i ile d aynidır
printf( "%d\n", +455 ); // + işareti yazdırı1maz
printf( "%d\n", -455 ); // - işareti yazdırılır
printf("%hd\n", 32000); // short int
printf( "%ld\n", 2000000000L );// 1 öneki, sabiti long int tipine dönüştürür
printf( "%o\n", 455 ); // oktal
printf("%u\n", 455);
printf("%u\n", -455);
printf( "%x\n", 455 ); // küçük harflerle hexadecimal
printf( "%X\n", 455 ); // büyük harflerle hexidecimal
} // main sonu