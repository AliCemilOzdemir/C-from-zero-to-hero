// c19.c 01.08.2024 @alicemilozdemir
// syf 197 "Özet" konusunu içerir ve syf 217'de başlayan diziler konusundan
// syf 221 
// 'Semboli̇k Sabi̇tlerle Di̇zi̇ Boyutunun Beli̇rti̇lmesi̇ ve Dizi Elemanlarına Ilk Değerlerin Hesaplamalar Ile Atanması' 
// konusuna kadar gelir

// bir fonksiyonun her bir argümanı sabit ,değişken veya bir ifade olabilir .
// Çünkü hepsinin bir değeri var.
// her fonksiyon bir ötekinden habersizdir.Diğer fonklar tarafından değişkenler ve 
// yapılan işlemler bilinmez

// diziler aynı tip ve birbiri ile ilişkili veri yapılarından oluşmaktadır.
// structlar(yapı) ise genellikle farklı veri yapılarından oluşurlar
// diziler ve yapılar genelde program boyunca aynı boyutta kalan statik yapılardır - aksi de mümkün
// dizi aynı tipe sahip ardışık bellek alanlarının oluşturduğu grup olarak tanımlanmaktadır.
// dizi ismi bir kimliktir ve diğer kimliklerle -değişken aynı kurallar ile belirlenir
// indisli dizi ismi bir lvalue'dur.
// Dizi indisini ifade etmek için kullanılan parantezler c dilinde OPERATÖR olarak kabul edilirler.
// Dizi indisini ifade etmek için kullanılan parantezler([]) fonksiyon çağrı operatörü(()) ile aynı önceliğe sahiptir.

/*
OPERATÖR                         YÖN              TÜR
-----------------------------------------------------------------
() , [] , ++ , -- (sonradan)    sağdan sola      son ek - en yüksek
+,-,!,++ , -- (önceden)         sağdan sola      tekil

* , / , %                       soldan sağa      çarpımsal
+ , -                           soldan sağa      toplamsal
< , <= , > , >=                 soldan sağa      ilişkisel
== , !=                         soldan sağa      eşitlik

&&                              soldan sağa      mantıksal VE
||                              soldan sağa      mantıksal VEYA

?:                              sağdan sola      koşullu
= , += , -= ,*= , /= , %=       sağdan sola      atama
,                               soldan sağa      virgül

*/

// dizide veri türü,isim ve bellekte kaplanacak alan yazılması zorunludur.
// tıpkı diğer değişkenler gibi başlangıç değeri atanmamış dizi elemanları çöp değerlere sahiptir.

// önişlemci talimatı
#include<stdio.h>

// main başı
int main(void)
{
    int n[10];
    size_t i ; // size_t = unsigned int.dizi boyutunu indislerini ifade eden değişkenlerde kullanılmalıdır.
               // stddef.h içinde tanımlanmıştır .Program çalışmazsa stddef.h 'ı include edin.
    
    // 0...9 indislerine 0 değeri atanacak
    for(i=0; i<10; i++) {
        n[i] = 0;
    }// döngü sonu

    printf("%s%13s\n","Eleman","Deger");

    //dizi içeriğini çizelge şeklinde ekrana yazdırma
    for(i=0; i<10; i++) {
        printf("%6u%13d\n",i,n[i]);
    }//for sonu

    // m dizisine başlangıç listesi atayarak değer atama.
    int m[10] = {12,23,45,87,13,0,-74};

    printf("%s%13s\n","Eleman","Deger");

    //dizi içeriğini çizelge şeklinde ekrana yazdırma
    for(i=0; i<10; i++) {
        printf("%6u%13d\n",i,m[i]);
    }//for sonu


// Eğer başlangıç değeri atama listesi eksikse ,dizideki kalan elemanlara sıfır(0) 
// dizilere başlangıç değeri atanması statik diziler için program başlangıcından hemen önce
    // otomatik diziler içinse çalışma zamanında gerçekleşir.
// başlangıç değeri atama listesi dizideki eleman sayısından fazla ise hata oluşur.
// int m[] = {12,23,45,87,13,0,-74}; bu atama yapılır ve dizinin eleman sayısı belirtilmezse bile ,
    // eleman sayısı başlangıç değeri atama listesinin eleman sayısıyla aynı olur(YANİ 7)

    return 0;
}// main sonu