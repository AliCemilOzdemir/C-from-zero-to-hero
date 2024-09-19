// c41.c 05.08.2024 @alicemilozdemir
// syf 302 "Dizi ve İşaretçiler ile Karakter Dizini Kopyalama" konusundan
// syf 304 "İşaretçi dizileri" konusuna kadar gelir.

#include <stdio.h>
#define SIZE 10

void copy1( char * const s1, const char * const s2 ); // prototip
void copy2( char *s1, const char *s2 ); // prototip

int main( void )
{

char string1[ SIZE ]; // string1 dizisini oluştur
char *string2 = "Hello"; // bir karakter dizini işaretçisi oluştur
char string3[ SIZE ]; // string3 dizisi oluştur
char string4[] = "Good Bye"; // bir karakter dizini işaretçisi oluştur

copy1(string1,string2);
printf("stringl=%s\n", string1);

copy2( string3, string4 );
printf("string3=%s\n", string3);
} // main sonu


// dizi gösterimi kullanarak s2'yi sl'e kopyala
void copy1( char * const s1, const char * const s2 )
{
size_t i; // sayaç

// karakter dizinleri boyunca döngü oluştur
for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; ++i ) 
{
; // blok içerisinde hiçbir şey yapma
} // for bloğu sonu

} // copy1 fonksiyonu sonu


//işaretçi gösterimi kullanarak s2'yi sl'e kopyala
void copy2( char *s1, const char *s2 )
{
// karakter dizinleri boyunca döngü oluştur
for ( ; ( *s1 = *s2 ) != '\0'; ++s1, ++s2 ) {
; // blok içerisinde hiçbir şey yapma
} // for bloğu sonu
} // copy2 fonksiyonu sonu