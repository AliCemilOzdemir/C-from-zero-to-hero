/*
                                1.Bölüm : Genel bir giriş
*/

//  deitel.com/SecureC
//  dinkumware.com   - standart c kütüphane fonksiyonları
//  CERT ile güvenli kodlama
//  Secure Coding in C and C++   The CERT C Secure Coding Standard
//  PJ Plauger the standart c library
//  makine dili = nesne kodu


/*
                                2.bölüm : C ile Programlamaya giriş...
*/

//# ile başlayan satırlar derlenmeden önce önişlemci tarafından işlenir.
//her türlü boşluk(aşağı inme,space-tab tuşları vs.) beyaz boşluk olarak değerlendirilir ve normalde görmezden gelinir.

#include<stdio.h> //standart giriş/çıkış başlık içeriğini programa eklemesini söyler.

//fonksiyonlar bilgi alabilirler .main'in içindeki void ,main'in bilgi almadığını belirtir
int main(void) {// main fonksiyonu her C programının zorunlu bir parçasıdır.main mutlaka olacak!
//her C programı yürütülmeye main fonksiyonundan başlar
//fonksiyonlar bilgi gönderebilirler .main'in yanındaki "int" ibaresi main fonksiyounun tam sayı döndürdüğünü söyler

//  İYİ PROGRAMLAMA UYGULAMASI
//her fonksiyon,kendisinden önce fonksiyonun amacını tanımlayan bir açıklamaya sahip olmalıdır.
    printf("Merhaba Dunya!\n"); //karakter dizini = karakter katarı
    //printf = print formed - biçimlendirilmiş print
    //printf("Merhaba Dünya!\n"); koduna "ifade" denir
//Her ifade noktalı virgül ile sonlanmak zorundadır.
// \ tersslaş kaçış karakteri olarak isimlendirilir
//Derleyici \ ile sonraki karakteri alır ve bir kaçış dizisi oluşturur

    return 0;
}// {} parantezi kod bloğu oluşturulmasına yarar.Kod blokları C'de önemli birer programlama birimidir.

//  İYİ PROGRAMLAMA UYGULAMASI
// main dahil her fonksiyonu kapatan sağ küme parantezinin olduğu satıra(}) açıklama ekleyin.

/*
Standart Kütüphane Fonksiyonları(printf,scanf vs.) C dilinin parçaları değildir.
Derleyici, programı derlerken standart kütüphane fonksiyonlarının kısmında makine kodunda boşluk bırakır.
Bağlayıcı skf'nın nerede olduğunu bilir(derleyici bilmez) ve bağlayıcı çalıştığında skf'nı konumlandırır ve
uygun çağrıları makine kodundaki boşluklara girer.
böylece makine kodu tamamlanmış durumdadır ve yürütülmeye hazırdır.
Bu nedenle bağlanmış programa YÜRÜTÜLEBİLİR denir
fonksiyon adı yanlış yazılmışsa bağlayıcı skf'na bakıp fonk.u bulamayacağı için hata yapacaktır.

BU SEBEPTEN DOLAYI DERLEYICI SKF'NDAKI VE DIĞER FONKSIYONLARDAKI HATALARI BULAMAZ.
    alicemil("nasılsın");
yazmayı deneyin!
*/

// YAYGIN PROGRAMALAMA HATASI
//printf yerine print yazmaktır. print f = formed.
