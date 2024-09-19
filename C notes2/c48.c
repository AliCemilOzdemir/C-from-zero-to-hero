// c48.c 06.08.2024 @alicemilozdemir
// syf 350 "Karakter dizini işleme kütüphanesinde bulunan karakter dizini konusunda 
// işlem yapan fonksiyonlar" konusundan
// syf 354 "Karakter dizini işleme kütüphanesinde bulunan arama fonksiyonları" konusuna kadar gelir

// burada bulunan strncopy hariç her fonksiyon bulduğu sonucun sonuna NULL ekler.
// bu fonksiyonların uygulanması sonucu üzerine yeni yazılar yazılacak 
    // yahut bulunan yazıya yeni yazılar eklenecek değişkenlerin boyutlarının,
    // bu işlemlerin yapılmasına elverişli olması zorunludur!
    // örneğin 10 bytelık yere sahip bir değişkene 20 byte'lık yazı yazmak yanlıştır

/*
1) char *strcpy(char *s1 ,const char *s2);  :  s2'yi s1'e kopyalar ,s1 geri döndürülür.
    s2'nin s1'i ve s1 sonundaki NULL'u tutabilecek kadar buyuk olması gerekir.

2) char *strncpy(char *s1 ,const char *s2,size_t n); : s2 içindeki en fazla n karakteri s1'e kopyalar,
    s1'in değerini geri döndürür.

3) char *strcat(char *s1 ,const char *s2);   :s2'yi s1'in sonuna ekler
    ,NULL üzerine yazarak baslar ve devam eder ,s1'in değerini geri döndürür.

4) char *strncat(char *s1 ,const char *s2,size_t n);   :s2'nin en fazla n karakterini s1'in sonuna ekler
    ,NULL üzerine yazarak baslar ve devam eder ,s1'in değerini geri döndürür.
*/

#include<stdio.h>
#include<string.h>
#define SIZE1 25
#define SIZE2 15

int main(void)
{
    char x[] = "Happy Birthday To You";
    char y[SIZE1];
    char z[SIZE2];

    // x içeriğini y'ye kopyalama
    printf("x :%s\ny :%s\n",x,strcpy(y,x));

    // x'in ilk 14 karakterini z'ye kopyalama .NULL karakteri kopyalanmaz
    strncpy(z,x,SIZE2-1);
    z[SIZE2-1] = '\0';
    printf("z :%s\n",z);

    // char s1[20] = "Happy";
    // char s2[] = " New Year";
    // char s3[40] = "";

    // printf("s1 :%s\ns2 :%s\n",s1,s2);
    // printf("strcat(s1,s2) :%s\n",strcat(s1,s2));
    // printf("strncat(s3,s1,6) :%s\n",strncat(s3,s1,6));
    // printf("strcat(s3,s1) :%s\n",strcat(s3,s1));

    const char *s1 = "Happy New Year"; // işaretciye başlangıç değeri atama
    const char *s2 = "Happy New Year"; // işaretciye başlangıç değeri atama
    const char *s3 = "Aappy New Year"; // işaretciye başlangıç değeri atama


    printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
    "sl = ", s1, "s2 = ", s2, "s3 = ", s3,
    "strcmp(s1, s2) = ", strcmp( s1, s2 ),
    "strcmp(s1, s3) = ", strcmp( s1, s3 ),
    "strcmp(s3,s1)=",strcmp(s3, s1) );

    printf("%s%2d\n%s%2d\n%s%2d\n",
    "strncmp(s1, s3, 6) = ", strncmp( s1, s3, 6 ) ,
    "strncmp(s1, s3, 7) = ", strncmp( s1, s3, 7) ,
    "strncmp(s3,sl, 7) =", strncmp( s3, s1, 7) );
    
}
// str karşılaştırma fonksiyonları
/*
1) char *strcmp(const char *s1 ,const char *s2); : s1 == s2 -> 0
    s1>s2 ise + ,s1<s2 ise - bir değer döndürür.
2) char *strncmp(const char *s1 ,const char *s2,size_t n); : s1 == s2 -> 0
    s1>s2 ise + ,s1<s2 ise - bir değer döndürür.  , s2'nin ilk  değeri için bu karşılaştırma yapılır
*/
