// c50.c 06.08.2024 @alicemilozdemir
// syf 360 "string.h'taki bellek fonksiyonları" konusundan
// syf 380 "C formatlı Giriş/Çıkış" konusuna kadar gelir.

// string.h'taki bellek fonksiyonları
/*
1) void *memcpy( void *s1, const void *s2, size_t n ); :
    s2 tarafından gösterilen nesnedeki n karakteri, sl tarafından gösterilen
    nesneye kopyalar. Sonuç nesnesini işaret eden bir işaretçi döndürür.

2) void *memmove( void *s1, const void *s2, size_t n );
    s2 tarafından gösterilen nesnedeki n karakteri, s1 tarafından gösterilen
    nesneye kopyalar. Bu işlem, s2 nesnesi tarafından gösterilen karakterlerin
    ilk önce geçici bir dizi içinde kopyalanmış, sonrasında ise geçici diziden
    s1 tarafından işaret edilen nesneye kopyalanmış gibi yapılır. Fonksiyon,
    sonuç nesnesini işaret eden bir işaretçi döndürür.

3) int memcmp( const void *s1, const void *s2, size_t n );
    s1 ve s2 ile gösterilen nesnedeki ilk n karakteri karşılaştırır. Karşılaştırma
    eşitlikle sonuçlanırsa 0, s1 s2'den küçükse eksi bir değer, büyükse artı bir
    değer döner.

4) void *memchr( const void *s, int c, size_t n );
    s tarafından işaret edilen nesnedeki ilk n karaktere bakılır, burada
    ilk rastlanan c karakterine ("unsigned char" türüne dönüştürülür)
    konumlanılır. c karakteri bulunursa, karakteri işaret eden bir işaretçi, aksi
    halde NULL döndürülür.   

5) void *memset( void *s, int c, size_t n );
    c karakteri ("unsigned char" türüne dönüştürülür) s tarafından işaret
    edilen nesnenin ilk n karakteri içine kopyalanır. Sonucu işaret eden bir
    işaretçi döndürülür.
*/
// string.h'taki diğer fonksiyonlar
/*
1) char *strerror( int errornum );
    Derleyici ve lokasyon bazlı olmak üzere hata sayısını bir metin karakter
    dizini haline dönüştürür. (örneğin; bir mesajın bulunan lokasyona bağlı
    olarak farklı dillerde görüntülenmesi). Karakter dizinini gösteren bir işa-
    retçi döndürülür.

2) size_t strlen( const char *s );
    s karakter dizininin uzunluğunu tespit eder. Null karakterinden önceki
    karakterlerin sayısı döndürülür.
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    // memcpy fonksiyonu
    char s1[17];
    char s2[] = "Copy this string";

    memcpy(s1,s2,5); // sona '\0' koymadığı için kendimiz koymalıyız
    s1[5] ='\0'; 
    printf("s1 :%s\ns2 :%s\n",s1,s2);


    // memmove fonksiyonu
    char x[] = "Home Sweet Home:)";
    printf("%s\n",memmove(x,&x[5],10));


    // memcmp fonksiyonu
    char s3[] = "ABCDEFG";
    char s4[] = "ABCDXYZ";
    printf("%d\n",memcmp(s3,s4,3)); // ilk 3 karakter aynı 0 verecek
    printf("%d\n",memcmp(s3,s4,5)); // ilk 5 karakteri karşılaştıracak
    printf("%d\n",memcmp(s4,s3,5)); //


    // memchr
    const char *s = "This is a string";
    printf("%s\n",memchr(s,'r',15)); // ring


    // memset - bir dizinin her elemanına sıfır vermek için yüksek performanslı fonksiyon
    char string[15] = "BBBBBBBBBBBBBB";
    printf("%s\n",memset(string,'b',7));


    // strerror
    printf("%s\n",strerror(12));

    // strlen
    const char *string1 = "abcdefghijk1mnopqrstuvwxyz";
    const char *string2 = "four";
    const char *string3 = "Boston";

    printf("%d\n",strlen(string1));
    printf("%d\n",strlen(string2));
    printf("%d\n",strlen(string3));
}// main sonu

