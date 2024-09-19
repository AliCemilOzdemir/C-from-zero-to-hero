// c45.c 06.08.2024 @alicemilozdemir
// syf 335 "C dilinde karakterler ve karakter dizinler" konusundan
// syf 342 "Karakter Dizini Dönüştürme Fonksiyonları" konusuna kadar gelir.


/*
       FONK                      AÇIKLAMA
------------------------------------------------
int isblank(int c)      " " ise true ,degilse false
int isdigit(int c)      rakamsa True ,değilse false
int isalpha(int c)      harfse True ,değilse false
int isalnum(int c)      rakamsa veya harfse True ,değilse false
int isxdigit(int c)     hexadecimal rakamsa True ,değilse false
int islower(int c)      küçük harfse True ,değilse false
int isupper(int c)      büyük harfse True ,değilse false
int tolower(int c)      kucuk harf yap
int toupper(int c)      buyuk harf yap
int isspace(int c)      \n," ",\f,\r,\t,\v True ,değilse false
int iscntrl(int c)      kontrol karakteri(\a \t ev diger \'liler) True ,değilse false
int ispunct(int c)      boşluk ,rakam ve harf harici karakterler True ,diğerleri False
int isprint(int c)      yazdırılabilen karakterler True(space dahil), diğerleri False
int isgraph(int c)      yazdırılabilen karakterler True(space dahil değil), diğerleri False
*/


#include <stdio.h>
#include <ctype.h>

int main( void )
{

    printf("%s\n%s%s\n%s%s\n\n", " isdigit fonksiyonu sonucu: ",
    isdigit( '8' ) ? "8 is a " : "8 is not a ", "digit",
    isdigit( '#' ) ? "# is a " : "# is not a ", "digit" );

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
    "isalpha fonksiyonu sonucu:",
    isalpha( 'A' ) ? "A is a " : "A is not a ", "letter",
    isalpha( 'b' ) ? "b is a " : "b is not a ", "letter",
    isalpha( '&' ) ? "& is a " : "& is not a ", "letter",
    isalpha( '4' ) ? "4 is a " : "4 is not a ", "letter" );

printf("%s\n%s%s\n%s%s\n%s%s\n\n",
"isalnum fonksiyonu sonucu:",
isalnum( 'A' ) ? "A is a " : "A is not a ",
"digit or a letter",
isalnum( '8' ) ? "8 is a " : "8 is not a ",
"digit or a letter",
isalnum( '#' ) ? "# is a " : "# is not a ",
"digit or a letter" );

printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
" isxdigit fonksiyonu sonucu:",
isxdigit( 'F' ) ? "F is a " : "F is not a ",
"hexadecimal digit",
isxdigit( 'J' ) ? "] is a " : "J is not a ",
"hexadecimal digit",
isxdigit( '7' ) ? "7 is a " : "7 is not a ",
"hexadecimal digit",
isxdigit( '$' ) ? "$ is a " : "$ is not a ",
"hexadecimal digit",
isxdigit( 'f' ) ? "f is a " : "f is not a ",
"hexadecimal digit" );

printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
"\nislower fonksiyonu sonucu:",
islower( 'p' ) ? "p is a " : "p is not a ",
"lowercase letter",
islower ( 'P' ) ? "P is a " : "P is not a ",
"lowercase letter",
islower ( '5' ) ? "5 is a " : "5 is not a ",
"lowercase letter",
islower( '!' ) ? "! is a " : "! is not a ",
"lowercase letter" );

printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
"isupper fonksiyonu sonucu:",
isupper ( 'D' ) ? "D is an " : "D is not an ",
"uppercase letter",
isupper ( 'd' ) ? "d is an " : "d is not an ",
"uppercase letter",
isupper ( '8' ) ? "8 is an " : "8 is not an ",
"uppercase letter",
isupper ( '$' ) ? "$ is an " : "$ is not an ",
"uppercase letter" );

printf("%s%c\n%s%c\n%s%c\n%s%c\n",
"u buyuk harfe donusumu ", toupper( 'u' ) ,
"7 buyuk harfe donusumu ",toupper('7'),
"$ buyuk harfe donusumu ", toupper( '$' ) ,
"L buyuk harfe donusumu ", toupper( 'L' ) );


printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
"\n----isspace fonksiyonu sonucu:",
"Newline", isspace( '\n' ) ? " is a " : " is not a ",
"whitespace character", "Horizontal tab",
isspace( '\t' ) ? " is a " : " is not a ",
"whitespace character",
isspace( '%' ) ? "% is a " : "% is not a ",
"whitespace character" );

printf("%s\n%s%s%s\n%s%s\n\n", "iscntrl fonksiyonu sonucu:",
"Newline", iscntrl( '\n' ) ? " is a " : " is not a ",
"control character", iscntrl( '$' ) ? "$ is a " :
"$ is not a ", "control character" );

printf("%s\n%s%s\n%s%s\n%s%s\n\n",
"ispunct fonksiyonuna gore:",
ispunct( ';' ) ? "; is a " : "; is not a ",
"punctuation character",
ispunct ( 'Y' ) ? "Y is a " : "Y is not a ",
"punctuation character",
ispunct( '#' ) ? "# is a " : "# is not a ",
"punctuation character" );

printf( "%s\n%s%s\n%s%s%s\n\n", "isprint fonksiyonuna gore:",
isprint( '$' ) ? "$ is a " : "$ is not a ",
"printing character",
"Alert", isprint( '\a' ) ? " is a " : " is not a ",
"printing character" );

printf("%s\n%s%s\n%s%s%s\n", "isgraph fonksiyonuna gore:",
isgraph ( 'Q' ) ? "Q is a " : "Q is not a ",
"printing character other than a space",
"Space", isgraph(' ') ? " is a " : " is not a ",
"printing character other than a space" );

} // main sonu