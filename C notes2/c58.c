// c58.c 10.08.2024 @alicemilozdemir
// syf 415 "10.8 Birlikler(Union)" konusundan
// syf 417 "Bit Operatörleri" konusuna kadar gelir.

#include<stdio.h>

union number
{
int x;
double y;
};

/*
Bir birlik üzerinde gerçekleştirilebilecek işlemler
1) aynı tip bir birlik'ın bir başka birlik'e atanması,
2) birlik değişkeninin adresinin alınması 
3) yapı üye operatör kullanma ve yapı işaretçi operatörü ile birlik üyelerine erişim.


!!! Birlik == ve != operatörü ile yapıların karşılaştırılmadığı gibi aynı sebeplerden dolayı karşılaştırılmaz.
*/
union number value0 = {1}; // x'e atandı ,y'ye 0 atandı.

int main(void)
{
    printf("%d\n%lf",value0.x,value0.y);
    
    union number value; // birlik değişkeni tanımlama

    value.x = 100; // birlik'in içerisine bir integer kayma
    printf("%s\n%s\n%s\n%d\n\n%s\n%f\n\n\n",
    "Put 100 in the integer member",
    "and print both members.",
    "int:", value.x,
    "double:", value.y );

    value.y = 100.0; // aynı birlik'e double değer atama
    printf("%s\n%s\n%s\n %d\n\n%s\n %f\n",
    "Put 100.0 in the floating member",
    "and print both members.",
    "int:", value.x,
    "double:", value.y);

}