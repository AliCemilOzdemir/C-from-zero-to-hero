// c59.c 10.08.2024 @alicemilozdemir
// syf 417 "Bit Operatörleri" konusundan
// syf x "y" konusuna kadar gelir.

#include<stdio.h>

void displayBits( unsigned int value );


int main(void)
{
    // bit operatörleri operandlarının(char ,int ,long vs) bitlerini yönetmek için kullanılır.
    // bi̇t operatörleri̇yle genelli̇kle i̇şaretsi̇z tamsayilar(unsi̇gned i̇nt kullanilir)
/*
&           AND		                İki operandın ikisininde ilgili bitlerinde 1 varsa sonuçtaki bitler 1
                                    yapılır.

|           OR		                İki operandın ilgili bitlerinden en az biri 1 ise sonuçtaki bitler 1 yapılır.

^           EXCLUSIVE OR		    İlki operandın ilgili bitlerinden yalnızca biri 1 ise sonuçtaki bitler 1
                                    yapılır.

<<          Sola kaydırma		    İlk operandındaki bitleri ikinci operandında belirtilen sayı kadar sola
                                    kaydırır. Sağdan itibaren 0 ile doldurur.

>>          Sağa kaydırma		    İlk operandındaki bitleri ikinci operandında belirtilen sayı kadar sağa
                                    kaydırır. Soldan itibaren yapılacak doldurma işlemciye bağımlıdır.

~           Tümleyen		        Tüm 0 bitleri 1, tüm 1 bitleri 0 yapılır.*/

    unsigned int x; // kullanıcı girişini tutan değişken

    printf( "%s", "Enter a nonnegative int: ");
    scanf( "%u", &x );

    displayBits(x);
}

// bir unsigned int değişkeninin bitlerinin gösterilmesi
void displayBits( unsigned int value )
{
    unsigned int c; // sayıcı

    // displayMask'i tanımlama ve 31 biti sola kaydırma
    unsigned int displayMask = 1 << 31;
    // 2.147.483.648 = 1000 0000 0000 0000 0000 0000 0000 0000
    // 1 biti 31 kere kaydırılarak oluşturulmuş değer.

    printf("%u\n",displayMask);
    
    printf( "%10u =", value );

    // bitler üzerinden döngü
    for ( c = 1; c <= 32; ++c ) {
    // ikisini bitsel olarak karşılaştırıyor.
    putchar( value & displayMask ? '1' : '0' );
    value <<= 1; // 1 ile değeri sola kaydırma

    if ( c % 8 == 0 ) { // 8 bitten sonraki yerin çıkışı
        putchar(' ');
    } // if'in sonu
    } // for'un sonu
    
    putchar('\n');
} // displayBitleri fonksiyonu sonu