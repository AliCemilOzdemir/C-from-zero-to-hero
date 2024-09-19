// c49.c 06.08.2024 @alicemilozdemir
// syf 354 "Karakter dizini işleme kütüphanesinde bulunan arama fonksiyonları" konusundan
// syf 360 "string.h'taki bellek fonksiyonları" konusuna kadar gelir.

// Arama fonksiyonlari

// 1) char *strchr(const char *s,int c);  :s karakter dizini içinde c karakterine ilk rastladığında 
    // konumlanır .c değeri dizide bulunursa o değeri işaret eden bir işaretçi döndürülür,
    // aksi takdirde NULL bir işaretçi döndürülür.

// 2) size_t strcspn(const char *s1 ,const char *s2);  :s1 karakter dizini içinde olup ,s2 içinde
    // olmayan karakterleri belirler ve s1 içinde buna uyan ilk karakter parçasının uzunlugunu döndürür

// 3) size_t strspn(const char *s1 ,const char *s2);  : strcspn'nin aksine bu fonk., s1'in içinde olup
    // s2'nin de içinde olan ilk karakter parçasının uzunluğunu döndürür.

// 4) char *strpbrk(const char *s1 ,const char *s2);  : s1 

// 5) char *strtok(char *s,const char*c);  : s içindeki son c'ye işaret eden bir işaretçi döndürür ,c yoksa
    // null bir işaretçi döndürür

// 6) char *strstr(const char *s1 ,const char *s2);  : s1 içinde s2'ye rastlanan ilk yere işaret eden bir işarteçi
    // döndürür aksi halde NULL işaretçisi döndürür

// 7) char *strtok(char *s1,const char*s2);


#include<stdio.h>
#include<string.h>

int main(void)
{
    // strchr fonksiyonu
    const char *string = "Learning C is a journey";
    char c1 = 'a';
    printf("%d\n",strchr(string,c1)); // işaretçi döndürür
    printf("%d\n",strchr(string,'x')==NULL); // olmayan harf icin NULL döndürür

    // strcspn fonksiyonu
    const char *string1 = "The value is 3.14159";
    const char *string2 = "1234567890";
    printf( "\n%s%s\n%s%s\n%s\n%s%u\n",
    "stringl = ", string1, "string2 = ", string2,
    "The length of the initial segment of stringl",
    "containing no characters from string2 = ",
    strcspn(string1, string2 ) ); 
    //string 1 in 13 karakterlik "The value is " başlangıcı boyunca string2'den hiçbir değer içermez

    // strspn fonksiyonu
    const char *string1000 = "The value is 3.14159";
    const char *string200 = "aehi lsTuv"; // string1000 fonksiyonunda "aehi lsTuv" harflerinden baska harflerden olusmayan en buyuk yapının uzunlugunu döndürür
    printf("\n%d",strspn(string1000,string200)); 

    // strpbrk fonksiyonu
    const char *string10 = "this is a test";
    const char *string20 = "beware";
    printf("\n%d",strpbrk(string10,string20)); // 1.de en erken kullanılan 2.dizi elemanının adresini döndürür ,aksi halde NULL döndürür


    // strrchr fonksiyonu
    const char *string100 = "A zoo has many animals including zebras";
    int c= 'z';
    printf("\n%c",*strrchr(string100,c)); // z'nin son göründüğü yerinin adresini işaretçi ile döndürür
    // son konumu bulmaya yarar.

    // strstr fonksiyonu
    const char *string10000 = "abcdefabcdef";
    const char *string2000 = "def"; // harfler tıpatıp aynı olmak zorundalar .strspn ile farkı budur.
    printf("\n%d\n",strstr(string10000,string2000)); // ilk rastladığı yerdeki işaretçiyi döndürür.

    //strtok fonksiyonu
    char ctring[] = "This is a sentence with 7 tokens"; // boşluklardan ayırırsak 7 kelime cikiyor.
    char *tokenPtr;

    tokenPtr = strtok(ctring," ");
    // printf("\n%s",tokenPtr);

    //tokenPtr = strtok("ali", " ");
    // printf("\n%s",tokenPtr);
    
    while (tokenPtr != NULL)
    {
        printf("\n%s",tokenPtr);
        tokenPtr = strtok(NULL, " "); // diziye ekleme yapmadan kalan ile devam et.
    }

}