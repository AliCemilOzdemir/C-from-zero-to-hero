// c20.c 01.08.2024 @alicemilozdemir
/*syf 221 

'Semboli̇k Sabi̇tlerle Di̇zi̇ Boyutunun Beli̇rti̇lmesi̇ ve 
Dizi Elemanlarına Ilk Değerlerin Hesaplamalar Ile Atanması' 

konusundan*/

/*syf 227 '6.000.000 kere zar atılması ve sonuçların dizide özetlenmesi' konusuna kadar gelir.*/

// s dizisindeki elemanlara 2-20 arası çift başlangıç değeri atanması.

// önişlemci talimatları
#include<stdio.h>
#define BOYUT 10 // maksimum dizi boyutu
// 'define önişlemci ataması' ile değeri 10 olan 'sembolik sabit' BOYUT tanımlanmaktadır.
// sembolik sabit(BOYUT) ,program derlenmeden önce C önişlemcisi tarafından 'yer değiştirme metni'(10) ile yer değiştirilen 
// bir tanımlayıcıdır.
// önişlemci yönlendiricileri C ifadeleri değildir. Bundan dolayı sonlarına ';' konulmamalıdır.
// önişlemci C derleyicisi değildir .Eğer '#define BOYUT 10;' yazılırsa BOYUT yerine 10; yazılacak ve hata verecek.
// her dizi boyutunu sembolik sabit ile belirtmek programları daha fazla ölçeklenebilir yapacaktır.
// Kod dosyasında sembolik sabitlere değer atanması söz dizim hatasına neden olur.Sembolik sabit bir değişken değildir.
// Derleyici değişkenlere yaptığı gibi sembolik sabitlere yer ayırması yapmamaktadır.
// Sembolik sabit isimlerinde yalnızca büyük harfler kullanınız böylece program içinde sabitleri tespit edebilir 
// ve bunların değişken isimleri olmadıklarını hatırlarsınız. birden fazla kelimeden oluşacak sembolik sabit isimlerinde
// okunaklılık için kelimeler arasına _ yerleştirin.


// main fonksiyonu
int main(void) {
    //dizi boyutu belirtmede sembolik sabit BOYUT kullanımı
    int s[BOYUT];
    size_t j;

    // değer ataması
    for(j=0; j<BOYUT; j++) 
    {
        s[j] = 2*(j+1);
    }// döngü sonu

    printf("%s%13s\n","ELEMAN","DEGER");

    // dizi içeriğinin çizelge olarak yazdırılması
    for(j=0; j<BOYUT; j++) 
    {
        printf("%u%13d\n",j,s[j]);
    }// döngü sonu


    return 0;
}// main sonu.