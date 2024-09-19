// c39.c 05.08.2024 @alicemilozdemir
// syf 295 "sizeof Operatörü" konusundan
// syf 299 "İşaretçiler ve Diziler Arasındaki İlişki" konusuna kadar gelir.

// sizeof Operatörü
    // C ,bir dizinin bayt olarak(ya da baska bir veri turunde) boyutunu belirlemek için özel tanımlı
    // tekli sizeof operatörünü sunar.
    // sizeof operatörü bir dizinin adına uygulandığı zaman dizideki toplam bayt sayısını size_t
    // türünde döndürür.
    // sizeof operatörü aşağıdakilere uygulanabilir :
    //    1) değişken adı ,
    //    2) tür,
    //    3) herhangi bir değer

#include<stdio.h>
#define SIZE 10

size_t getSize(float *ptr);

int main(void)
{
    float array[SIZE];
    
    printf("the number of bytes in the array is %u"
        "\nThe number of bytes returned by getSize is %u\n",
        sizeof(array),getSize(array));

    int x = 5;
    int y = 6;
    int *xPtr = &x;
    int *yPtr = &y;
    printf("\n\n%d\n%d\n%d",++yPtr,xPtr,xPtr); //işaretçi aritmetiği
    printf("\n%d",*yPtr);

    void *xPtrv = &x;
    //printf("%d",*xPtrv); HATAAAA
    
} // main sonu.

size_t getSize(float *ptr)
{

    return sizeof(ptr);
} // getSize sonu.

// sınırlı sayıda aritmetik işlemler işaretçiler ile gerçekleştirilebilir.
// ++ ,--  (işaretçi + ,+= ,- ,-= tamsayı) (işaretçi - işaretçi)(sadece ikisi de aynı dizideyse anlamlı)
// işaretçi aritmetiğinde artımlar ve azaltımlar belleksel olur.
// örneğin int *x = &v[0] = 3000 ve int *y= &v[2] = 3008 olmak uzere x-y = 2'dir çünkü bellek farkı bu kadardır.
// her ikisi de aynı türde ise bir işaretçi bir diğerine atanabilir.
// void işaretçi(void *x) her işaretçi türünü temsil edebilir.
// void işaretçi her işaretçiye atanabilir(uygun sartlarda) ve her işaretçi void işaretçiye atanabilir
// void işaretçi dereferans(degerini cikarma) edilemez(HATADIR)
// bir tipin işaretçisini diğer bir tipin işaretçisine atamak HATADIR(void hariç)
// işaretçiler eşitlik operatörleri ya da ilişkisel operatörler ile karşılaştırılabilirler.Bunun popüler iki uygulaması
    // Aynı dizideki iki elemanın indislerinin karşılaştırılması.
    // Bir pointer'ın NULL olup olmadığına karar verilmesi.

