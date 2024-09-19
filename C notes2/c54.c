// c54.c 07.08.2024 @alicemilozdemir
// syf 393 "Scanf ile biçimlendirilmiş girişin okunması" konusundan
// syf 406 "C yapıları ,Birlikler ,Bit işleme ve Numaralandırmalar" konusuna kadar gelir.

/*
Tamsayılar				                                AÇIKLAMA,
-------------------------------------------------------------------------------------------------------------------------------------
d				İsteğe bağlı olarak onluk sistemde işaretli bir tamsayı okur. İlgili argüman tamsayıyı gösteren bir işaretçidir.	
i				İsteğe bağlı olarak onluk, sekizlik ya da onaltılık sistemde işaretlibir tamsayı okur. İlgili argüman tamsayıyı gösteren bir işaretçidir.	
O				Sekizlik sistemde bir tamsayı okur. İlgili argüman, işaretsiz bir tamsayı gösteren işaretçidir.
U				Onluk sistemde işaretsiz bir tamsayı okur. İlgili argüman işaretsiz bir tamsayıyı gösteren bir işaretçidir.
x veya X				Onaltılık sistemde bir tamsayı okur. İlgili argüman işaretsiz bir tamsayıyı gösteren bir işaretçidir.
h, 1, 11				Herhangi bir tamsayı dönüşüm belirtecinden evvel kullanıldığında, short, long ya da long long bir tamsayı girileceğini belirtir.
-------------------------------------------------------------------------------------------------------------------------------				
Ondalıklı Tamsayılar				                        AÇIKLAMA
E, e, f, g veya G				Ondalıklı bir tamsayı okur. İlgili argüman ondalıklı değişkeni gösteren bir işaretçidir.
L veya 1				Herhangi bir dönüşüm belirtecinden önce kullanıldığında double veya long double bir değerin girileceğini belirtir. İlgili argüman doub le veya long doub le bir değişkeni gösteren bir işaretçidir.
-----------------------------------------------------------------------------------------------------------------------------
Karakter ve Karakter Dizinleri					            AÇIKLAMA
c					Bir karakter okur. İlgili argüman char gösteren bir işaretçidir. En sona null ('\0') eklenmez.
s					Bir karakter dizini okur. İlgili argüman karakter dizinini ve sonlandırıcı null karakterini (otomatik olarak eklenir) depolamaya yetecek kadar büyük, char türünce bir diziyi gösteren bir işaretçidir.
Tarama Kümesi[tarama karakterleri]					Bir dizide depolanmış karakterleri karakter dizini içinde tarar
p					printf ifadesi %p ile kullanıldığında üretilen biçimle aynı biçimdeki bir adresi okur.
n					scanf ifadesi ile o zamana kadar alınan karakterlerin sayısını depolar. İlgili argüman tamsayıyı gösteren bir işaretçidir.
%					Girdi içindeki yüzde işaretini (%) atlar.
*/

#include<stdio.h>

int main(void)
{
    // integer veri alınması
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    puts( "Enter seven integers: ");
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g );

    puts ( "\nThe input displayed as decimal integers is:" );
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

    // float veri alınması - hem bilimsel giriş hem de normal giriş desteklenir
    double a0;
    double b0;
    double c0;

    puts ( "Enter three floating-point numbers:" );
    scanf( "%le%lf%lg", &a0, &b0, &c0 );

    puts ( "\nHere are the numbers entered in plain:" );
    puts( "floating-point notation:\n" );
    printf("%f\n%f\n%f\n", a0, b0, c0);


    // char veri alınması
    char x;
    char y[ 9 ];

    printf( "%s", "Enter a string: ");
    scanf("%c%8s", &x, y );

    puts("The input was:\n" );
    printf( "the character\"%c\" and the string \"%s\"\n", x, y);

    // Tarama Kümesi[tarama karakterleri] :Bir dizide depolanmış karakterleri karakter dizini içinde tarar

    char z[ 9 ]; // z disinin tanimlanmas1

    printf( "%s", "Enter string: " );
    scanf( "%8[aelails]", z ); // karakter kümesi aranması [a-z] ya da [0-9] da yapilabilir.]
    // scanf( "%8[^aeiou]", z ); aeiou olmayan karakterleri alır. - ters karakter kümesi

    printf("The input was\"%s\"\n", z);

    int m;
    int n;

    printf( "%s", "Enter a six digit integer: ");
    scanf( "%2d%d", &m, &n); // ilk iki rakamı m'ye digerlerini n'ye ata

    printf( "The integers input were %d and %d\n", m, n );


    // atama bastırma karakteri *
    // scanf(%d-%d-%d)'de 17-02-2023 verisini doğru alır
    // scanf(%d/%d/%d)'de 17/02/2023 verisini doğru alır
    // * karakteri ise her char değeri görmezden gelir 
    int month1;
    int day1;
    int year1;
    int month2;
    int day2;
    int year2;

    printf( "%s", "Enter a date in the form mm-dd-yyyy: ");
    scanf( "%d%*c%d%*c%d", &month1, &day1, &year1);

    printf("month=%d day=%d year=%d\n\n", month1, day1, year1);

    printf( "%s", "Enter a date in the form mm/dd/yyyy: ");
    scanf( "%d%*c%d%*c%d", &month2, &day2, &year2);

    printf("month=%d day=%d year=%d\n", month2, day2, year2 );
} // main sonu

// 16 lık sayılar 0x10 = 16 , 8lik sayılar 010 = 8 , 2 lik sayılar 0b10 = 2.