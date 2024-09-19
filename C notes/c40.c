// c40.c 05.08.2024 @alicemilozdemir
// syf 299 "İşaretçiler ve Diziler Arasındaki İlişki" konusundan
// syf 302 "Dizi ve İşaretçiler ile Karakter Dizini Kopyalama" konusuna kadar gelir.

//İşaretçiler ve Diziler Arasındaki İlişki
    // Bir dizi adı SABİT bir işaretçidir.
    // ona işaret eden işaretçide onun sabit olmayan bir kopyası gibi davranır.

#include<stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
    int x[5] = {10,15,20,25,30};
    int *xPtr = x;
    
    printf("%d\n",*(xPtr+2)); // b[2] = 20;
    // bu kullanım işaretçi/offset gösterimi olarak geçmektedir.
    // +2 değerine offset değeri denir.
    // * ifadesinin +'dan yuksek onceliginden dolayı once 2 eklendigine ve sonrasında * kullanıldıgına dikkat edilmelidir.
    // işaretçiler diziler gibi indislenebilir. İşaretçi ,dizinin(sabit işaretçi) sabit olmayan kopyası : xPtr[2] = x[2];
    
    // x+=3; HATA
    printf("%d\n",*xPtr);

    int b[] = { 10, 20, 30, 40 }; // b dizisini oluştur ve ilk değer ata
    int *bPtr = b; // bPtr oluştur ve b dizisine işaret ettir
    size_t i; // sayaç
    size_t offset; // sayaç

    // b dizisini "dizi indis gösterimi" kullanarak çıktı olarak sun
    puts ( "Array b printed with:\nArray subscript notation" );

    // b dizisi boyunca döngü oluştur
    for ( i = 0; i < ARRAY_SIZE; ++i ) 
    {
    printf( "b[ %u ] =%d\n", i, b[ i ] );
    } // for bloğu sonu

    //b dizisini dizi adı ve "işaretçi/offset gösterimi" kullanarak çıktı olarak sun
    puts( "\nPointer/offset notation where\n"
    "the pointer is the array name" );

    //b dizisi boyunca döngü oluştur
    for ( offset = 0; offset < ARRAY_SIZE; ++offset ) 
    {
    printf("*(b+%u) =%d\n", offset, *(b + offset) );
    } // for bloğu sonu

    // b dizisini "bPtr ve dizi indisleme gösterimi" kullanarak çıktı olarak sun
    puts( "\nPointer subscript notation" );

    //b dizisi boyunca döngü oluştur
    for ( i = 0; i < ARRAY_SIZE; ++i ) 
    {
    printf( "bPtr[ %u ] =%d\n", i, bPtr[ i ] );
    } // for bloğu sonu

    //b dizisini "bPtr ve işaretçi/offset gösterimi" kullanarak çıktı olarak sun
    puts( "\nPointer/offset notation" );


    // b dizisi boyunca döngü oluştur
    for ( offset = 0; offset < ARRAY_SIZE; ++offset ) 
    {
    printf("*(bPtr+%u) =%d\n", offset, *( bPtr + offset) );
    } // for bloğu sonu

    puts("");
} // main sonu