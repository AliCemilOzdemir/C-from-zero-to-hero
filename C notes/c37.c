// c37.c 05.08.2024 @alicemilozdemir
// syf 287 
//"Bir karakter dizinini NAN-Sabit Verilere NAN-Sabit İşaretçi ile büyük harflere donusturme" konusundan
// syf 291 "7.6 Referans ile Aktarım Kullanan Kabarcık Sıralama" konusuna kadar gelir.

// Onislemci Talimatlari
#include<stdio.h>
#include<ctype.h>

// Fonk bildirimleri
void convertToUppercase(char *sPtr);
void printCharacters(const char *sPtr);


// Main baslangici.
int main()
{
    // 1) NAN-Sabit Verilere NAN-Sabit İşaretçi
    char isim[] ="Ali Cemil and 100$";

    printf("The string before the conversion is : %s\n",isim);
    convertToUppercase(isim);
    printf("The string after the conversion is : %s\n",isim);

    // 2) Sabit Verilere NAN-Sabit İşaretçi
    char string[] = "print characters of a string";
    
    puts("The string is :");
    printCharacters(string);
    puts("");
    
    // 3) NAN-Sabit Verilere Sabit İşaretçi
    int x;
    int y;
    int * const xPtr= &x;
    // *xPtr=7;
    printf("%d\n",x);
    printf("%d\n",xPtr);
    printf("%d\n",y);
    //xPtr = &y;
    *xPtr = 5;

// 4) Sabit Verilere Sabit İşaretçi
    int a = 5;
    int b;

    const int * const aPtr = &x;
    printf("%d",*aPtr);

    /* *aPtr = 7;
    aPtr = &y;*/

} // Main sonu.

// 1) NAN-Sabit Verilere NAN-Sabit İşaretçi
// convertToUppercase fonk baslangici
void convertToUppercase(char *sPtr)
{
    while(*sPtr != '\0')
    {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
} // convertToUppercase fonk sonu.


// 2) Sabit Verilere NAN-Sabit İşaretçi
// printCharacters fonk baslangici
void printCharacters(const char *sPtr)
{
    for(; *sPtr != '\0'; ++sPtr) // ilkleme yok!
    {
        printf("%c",*sPtr);
    }// for sonu
    
} // printCharacters fonk sonu.


// Bir işaretçiyi fonksiyona aktarmanın 4 yolu vardır.
    // 1) NAN-Sabit Verilere NAN-Sabit İşaretçi
    // 2) Sabit Verilere NAN-Sabit İşaretçi
    // 3) NAN-Sabit Verilere Sabit İşaretçi
    // 4) Sabit Verilere Sabit İşaretçi

// 1) NAN-Sabit Verilere NAN-Sabit İşaretçi 
    // En yüksek veri erişim seviyesi.
    // Bu durumda veri referanstan ayrılmış işaretçi aracılığıyla değiştirilir ve işaretçi ,diğer veri nesnelerine işaret
    // etmesi için değiştirilebilir.
    // const kullanilmaz.

// 2) Sabit Verilere NAN-Sabit İşaretçi
    // Sabit Verilere NAN-Sabit İşaretçi, uygun türde herhangi bir veri nesnesine işaret edecek şekilde değiştirilebilir.
    // ancak işaret edilen veriler değiştirilemez .Böyle bir işaretçi ,herbir elemani verileri değiştirmeden işleyecek
    // bir fonksiyona bir dizi argümanı almak için kullanılabilir.

// 3) NAN-Sabit Verilere Sabit İşaretçi
    // NAN-Sabit Verilere Sabit İşaretçi ,daima aynı bellek bölgesine işaret eder ve işaretçi aracılığıyla bu bölgedeki
    // veriler üzerinde değişiklik yapılabilir.
    // bu durum bir dizi adı için varsayılan olandır.
    // bir dizi adı ,dizinin başlangıcına işaret eden sabit bir işaretçidir.
    // const olarak tanımlanan işaretçiler ,tanımlandıkları anda ilklendirilmelidirler.
    // eğer işaretçi ,bir fonksiyon parametresi ise fonksiyona aktarılan bir işaretçi ile ilklenir.
    // int * const xPtr= &x; bu durumda xPtr yani adres const oldu.
    // const int *xPtr= &x; bu durumda da *xPtr yani deger const oldu.

// 4) Sabit Verilere Sabit İşaretçi
    // en düşük erişim ilkesi bununla sağlanır.
    // sabit bellek bölgesinin sabit verilerine işaret eder.
    // const int * const xPtr ile gosteriler ve hem adresi hem de degeri sabitler
