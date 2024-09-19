// c53.c 07.08.2024 @alicemilozdemir
// syf 386 "Alan Genişliği ve Duyarlık ile Ekrana Yazdırmak" konusundan
// syf 393 "Scanf ile biçimlendirilmiş girişin okunması" konusuna kadar gelir.

#include <stdio.h>

int main( void )
{

    int i = 873; // i ye başlangıç değeri atanması
    double f = 123.94536; // f ye başlangıç değeri atanması
    char s[] = "Happy Birthday"; // s karakter dizisine başlangıç değeri atanması

    puts( "Using precision for integers" );
    printf("\t%.4d\n\t%.9d\n\n",i,i); // başına sıfır ekler

    puts( "Using precision for floating-point numbers" );
    printf("\t%.3f\n\t%.3e\n\t%.4g\n\n", f, f,f); // e ve f ile kullanıldığında ondalık basamak sayısını ifade ederken
                                                  // g ile kullanıldığında bütün sayının kaç basamaklı olacağını ifade eder
                                                  // örneğin 123.94536 sayısı %.3g ile 124 olarak ,%.4g ile 123.9 olarak yazılır
    puts( "Using precision for strings" );
    printf("\t%.11s\n",s); // 11 karakterini yazar.
    printf( "%*.*f\n", 7, 2, 98.736 );
    
    printf("\n% 7.5d",i);

/*
    Bayrak                                      Açıklama
-------------------------------------------------------------------------------------------------------------------------------
       -                       Belirtilen alan içinde sola dayalı çıktı verir

       +                       Pozitif değerlerden önce artı ve negatif değerlerden önce eksi işareti görüntüler

     boşluk                    + bayrağı ile yazdırılmamış pozitif bir değerden önce boşluk görüntüler
                               
     #                         Sekizlik dönüşüm belirteci ile birlikte kullanıldığında yazdırılan değerin
                               önüne 0 ekler X veya x onaltılık dönüşüm belirteci ile birlikte kullanıldığında yazdırılan
                               değerin önüne 0x veya OX ekler E, G, e, f veya g ile yazdırılmış ondalık kısmı bulunmayan ondalıklı
                               sayıların nokta içermesini sağlar. (normalde, kendinden sonra bir basamak varsa nokta yazdırılır).
                               G ve g dönüşüm belirteçlerinde ard arda gelen sıfırlar ihmal edilmez

     0 (sıfır)                 Önce sıfırlar gelecek şekilde alanı 0 ile doldurur
*/

// - bayrağı
    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
    printf( "%-10s%-10d%-10c%-10f\n\n", "hello", 7, 'a', 1.23 );

// + bayrağı
    printf("%d\n%d\n", 786, -786);
    printf("%+d\n%+d\n\n", 786, -786);

// boşluk bayrağı
    printf("% d\n% d\n\n", 547, -547 ); // işareti olmayan değerlere boşluk ekler - amaci işareti olmayan değerleri işareti olanlarla hizalamak

// # bayrağı
int c = 1427; // c ye başlangıç değeri atanması
double p = 142789.0; // p ye başlangıç değeri atanması

printf( "%#o\n", c); // sekizlik bir değerin önüne 0 eklemek

printf( "%#x\n", c); // onaltılık bir değerin önüne OX ve 0x eklemek
printf("%#X\n", c);

printf("\n%#g\n", p); // g ile görüntülenen bir değerde ondalık noktanın yazdırılması
printf("%#.8g\n\n", p); // altı basamak olacak şekilde(. dahil değil) 0 ile doldurur ,altıyı aşarsa noktalı gösterim

// + ve 0 bayraklarının birlikte kullanımı
printf("%+09d\n", 452); // +00000452
printf("%09d\n", 452); // 000000452


/*
Çıkış Sırası                              Açıklama
------------------------------------------------------------------------------------------------------------------------------------
\' (tek tırnak)                     Tek tırnak yazdırır
\" (çift tırnak)                    Çift tırnak yazdırır
\? (soru işareti)                   Soru işareti yazdırır
\\ (ters çizgi)                     Ters çizgi yazdırır
\a (zil yada alarm)                 Duyulabilen zil ya da görülebilen alarm çalıştırır
\b (geri işareti)                   İmleci o andaki konumundan bir geriye alır
\f (yeni sayfa)                     İmleci bir sonraki sayfanın başına alır
\n (yeni satır)                     İmleci bir sonraki yeni satırın başına alır
\r (satırbaşı)                      İmleci o andaki satırın başına alır
\t (yatay tab)                      İmleci bır sonraki yatay tab konumuna alır
\v (düşey tab)                      İmleci bir sonraki düşey tab konumuna alır
*/


} // main sonu