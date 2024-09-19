// c35.c 03.08.2024 @alicemilozdemir
// syf 277 "İşaretçiler" konusundan
// syf 282 "Argümanları Fonksiyonlara Referans İle Aktarım" konusuna kadar gelir.


// işaretçiler taşıdıkları değerler bellek adresleri olan degişkenlerdir.
// Bir değere işaretçi aracılığıyla referans olma durumuna yönlendirme(indirection) denir

#include<stdio.h>

int main(void)
{
    int *countPtr,count;
    // count integer bir değişkendir
    // 'int *' demek "bir int işaretçisi" demektir
    // countPtr int türüne bir işaretçidir.
    // * sadece countPtr için uygulanır
    int *xPtr , *XPtr; // bu tanimlamada ise iki değişken de int degerlere işaret eden işaretçilerdir
    // işaretçi değişkenleri belirtmek için pointer kelimesinin kısaltması olan 'Ptr' ekini degiskenin
    // sonuna eklemek iyi bir programlama uygulamasıdır.

    // işaretçileri ilklendirmek için 0,NULL ya da bir adres kullanmayı tercih edebilirsiniz  
    // NULL degerine sahip bir isaretci hicbir seye isaret etmez. 

    // NULL'UN TANIMI:

    /*
    NULL , <stddef.h> başlığında ve <stdio.h> kütüphane başlığı gibi diğer bir kaç kütüphane başlığı
    içerisinde tanımlanmış sembolik bir sabittir.
    */

    // beklenmedik sonuçların önüne geçmek için işaretçileri ilklendiriniz.

    // işaretçiyi 0 ile ilklendirmek işaretçiyi NULL değer ile yüklemenin aynısıdır.Fakat NULL
    // 0 atandığında ilk önce uygun türün işaretçisine dönüştürülür.0 değeri işaretçi bir değişkene direkt
    // olarak atanabilecek tek tamsayı değeridir.

    // &(adres oeratörü) kendi işleneninin adresini döndüren tekil bir operatördür.

    int y = 5;
    int *yPtr;
    yPtr= &y; // y değişkeninin adresi yPtr değişkeni içine atandı.

    // Içerik(*) operatörü(indirection) referanstan ayırma(dereferencing) operatörü olarakta geçer
    // operandının(bir işaretçi ile kullanıldığından bir işaretçinin) işaret ettiği değeri döndürür

    printf("%d\n",*yPtr); // dereferencing yaparak yPtr işaretçisinin işaret ettiği değer olan y değerini(5) döndürür
    // bu işleme işaretçiyi referanstan ayırma denir.

    printf("%d",yPtr);

    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("\nThe address of a is %p"
            "\nThe value of aPtr is %p",&a,aPtr); //%p'nin tek olayı 16 lık sayı sisteminde ifadedir.

    printf("\nThe value of a is %d"
            "\nThe value of *aPtr is %d",a,*aPtr);

    printf("\n\nShowing that * and & are complements of"
           "each other\n&*aPtr = %p"
           "\n*&aPtr = %p"
           "\naPtr = %p",
           &*aPtr,
           *&aPtr,
           aPtr);

/*

OPERATÖR                         YÖN              TÜR
-----------------------------------------------------------------
() , [] , ++ , -- (sonradan)    sağdan sola      son ek - en yüksek
+,-,!,++ , --,(önceden), *, &   sağdan sola      tekil

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
    
}// main sonu