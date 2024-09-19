// c52.c 07.08.2024 @alicemilozdemir
// syf 382 "Ondalıklı Sayıların Yazdırılması" konusundan
// syf 386 "Alan Genişliği ve Duyarlık ile Ekrana Yazdırmak" konusuna kadar gelir.

// Floating Point Number Dönüşüm Belirteçleri
/*
Dönüşüm Belirteçleri                         AÇIKLAMA
-----------------------------------------------------------------------------------------------------------------------
E veya e                        Ondalıklı bir değeri üssel biçimde gösterir

F veya f                        Ondalıklı bir değeri olduğu gibi gösterir

G veya g                        Ondalıklı bir değeri olduğu gibi ya da üssel biçimde gösterir.

L                               Herhangi bir dönüşüm belirtecinden önce kullanıldığında,değerin "long double" tipinde görüntüleneceğini ifade eder
*/
// e,E ve f ile gösterilen değerler aksi belirtilmedikçe noktadan sonra 6 basamak yazdırır.
// e,E ve f ile gösterilen değerler noktadan önce e ve E için kesin olarak 1 basamak ile yazdırılır,f ise en az 1 bas.ile yazdırılır.
// g ve G dönüşüm belirtecinde sondaki sıfırlar atılır.
// g(e/f için)/G(E/F için)üssel dönüşümünde e+(-4)'ten küçük ve e+5'ten büyük değerlerde e/E ,aksi durumda f/F verir.
// ondalıklı çıktı için en az 1 basamak noktadan sonra yazılı olmalıdır.
#include<stdio.h>

int main( void )
{

    printf("%e\n",1234567.89);
    printf( "%e\n", +1234567.89 ); // artı işareti yazdırılmaz
    printf( "%e\n", -1234567.89 ); // artı işareti yazdırılmaz
    printf( "%E\n", 1234567.89);
    printf( "%f\n", 1234567.89);
    printf("%g\n", 1234567.89);
    printf( "%G\n", 1234567.89);


    // Karakter dizini ve karakterleri yazdırmak
    /*
    Dönüşüm Belirteçleri                         AÇIKLAMA
    -----------------------------------------------------------------------------------------------------------------------
            c                            char türünde bir argüman alır.
            s                            argüman olarak char gösteren bir işaretçiyi alır '\0'(NULL) okuyana kadar yazmaya devam eder.
    */
    // %c kullanarak karakter dizini yazdırmaya çalışmak bir hatadır
    // %s ile char yazdırmak hatadır.
    // char'da tek tırnak char[]'nde çift tırnak kullanılmalıdır.

    char character = 'A'; // character değişkenine başlangıç değeri atanması
    char string[] = "This is a string"; // diziye başlangıç değeri atanması
    const char *stringPtr = "This is also a string"; // char türünde işaretçi

    printf( "%c\n", character );
    printf( "%s\n", "This is a string" );
    printf( "%s\n", string );
    printf( "%s\n", stringPtr );
    

    // Diğer Dönüşüm Belirteçleri
    /*
    Dönüşüm Belirteçleri                         AÇIKLAMA
    -----------------------------------------------------------------------------------------------------------------------
            p                            bir adresi uygulamaya bağımlı olarak görüntüler.(çoğu cihazda 16lık sistemde gösterir)
            %                            % yazmaya yarar ."%%" = %.
    */
    printf("%p , %x\n",string,&string); // 0061FF07 , 61ff07
    printf("bir %% yazmak istedim.\n"); // bir % yazmak istedim.
} // main sonu