// c11.c 30.07.2024
// @alicemilozdemir
// syf 168 'Arguman Uyumu ve Genel Aritmetik çevrim kuralları' konusundan
// syf 174 'Rastgele Sayı Üretme' konusuna kadarki bölümü içerir

// önişlemci talimatları
#include<stdio.h>


//main fonksiyon başlangıcı
int main() {

/*
----------------------------------------------
Veri Türü                    |Çevrim Belirteci
                             |
Ondalık Türler               | 
                             |
long double                  | %Lf
double                       | %f
float                        | %f
                             |   
Tamsayı Türler               |   
                             |
unsigned long long int       | %llu
long long int                | %lld
unsigned long int            | %lu
long int                     | %ld
unsigned int                 | %u
int                          | %d
unsigned short int           | %hu
short int                    | %hd
char                         | %c
-----------------------------------------------
*/
// C'de işlem yaparken genellikle küçük türler büyük türlere dönüştürülür.
// bir değişkene sadece kasıtlı olarak daha düşük türden bir değer atayarak ya da
// tür dönüştürme işlemi ile daha düşük türden bir değeri atayabiliriz.
// fonksiyon çağrısında argümanlar parametre türünden değişkenlere direkt olarak atanıyormuş gibi
// fonksiyon bildiriminde belirtilen parametre türlerine dönüştürülür.

/* Bir fonksiyon için fonksiyon bildirimi yoksa derleyici fonksiyonun ilk defa ortaya çıktığı halini
ya fonksiyon tanımlamasını ya da fonksiyon çağrısını kullanarak kendi fonksiyon bildirimini oluşturur
Bu ,derleyiciye bağlı olarak uyarı veya hataya yönlendirebilir - hatalı çağrıya bakılarak derleyici tarafından
fonk. bildirimi oluşturulması durumunda.  */

// yığınlar son giren ilk çıkar(last input first output) yapısı olarak adlandırılır(LIFO)
// Yığına itilen(eklenen) son eleman çıkan ilk elemandır
// Programin yürütülme mekanizmasında yığın veri yapısı oldukça önemlidir.
// Program main fonksiyonu ile başlar ve main fonksiyonunun yığın yapısı fonksiyon çağrı yığınına girer
// main in içindeki her fonksiyon için ve bu fonksiyonların içindeki her fonksiyon için yığın yapıları çağrı yığınına girerler.
// Fonksiyonların yığın yapılarında o fonksiyonun Dönüş yeri(örneğin main'in içindeki printf fonksiyonu için dönüş yeri main'in adresidir .R1 ile gösterilebilir.)
// ve otomatik değişkenleri(parametreler ve bazı veya tüm yerel değişkenler)
// böylece yığınlar yürütmeyi destekler.Bir yığın başka bir yığın eklenmesine sebep olmuyorsa ve işlevini yapmışsa artık
// o yığın için(dönüş yeri ve otomatik değişkenler dahil) 'yok edilme' vakti gelmiştir.

// Her bir standart kütüphaneye karşılık gelen o kütüphanedeki tüm fonksiyonların bildirimlerini ve bu fonksiyonlar tarafından
// ihtiyaç duyulan çeşitli veri türlerinin ve sabitlerin tanımlamalarını içeren bir kütüphane başlığı vardır.

// programlama dillerinde değişken eşleştirmelerinde 2 aktarım vardır : değer ile aktarım ,adres ile aktarım.
// c'de ise yalnızca değer ile aktarım vardır .Adres ile aktarımın bir benzerini adres işlemi ve dolaylı işlem ile yapmak mümkündür.
// Performans sebeplerinden dolayı dizi argümanları adres ile aktarılır.




    return 0;
}// main fonksiyonu sonu.
