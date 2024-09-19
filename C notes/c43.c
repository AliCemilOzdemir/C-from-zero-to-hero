// c43.c 06.08.2024 @alicemilozdemir
// syf 310 "Fonksiyonlara işaret eden işaretçiler" konusundan
// syf 313 "Menü seçmelibir sistem oluşturmak için fonksiyon işaretçileri kullanmak" konusuna kadar gelir.

// bir fonksiyon işaretçisi fonksiyonun bellekteki adresini içerir
// bir fonksiyon adı gerçekte fonksiyonun görevini gerçekleştiren kodun bellekteki başlangıç adresidir.
// fonksiyonlara işaret eden işaretçiler fonksiyonlara aktarilabilir ,fonksiyonlardan döndürülebilir ,dizilerde tutulabilir
// ve diğer fonksiyon işaretçilerine atanabilir.

// Onislemci Talimatlari
#include<stdio.h>
#define SIZE 10

// fonk bildirimleri
void bubbleSort(int * const array ,size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void)
{
    int a[SIZE] = {2,4,6,8,10,12,89,68,45,37};
    size_t i; // sayac
    int order;

    printf("%s","Enter 1 to sort in ascending order\n""Enter 2 to sort in descending order: ");
    scanf("%d",&order);

    puts("Data items in original order :");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d",a[i]);
    }
    
    // diziyi sırala
    if (order == 1) 
    {
        bubbleSort(a,SIZE,ascending);

        puts("\nData items in ascending order :");
    } // if sonu

    if (order == 2) 
    {
        bubbleSort(a,SIZE,descending);

        puts("\nData items in descending order :");
    } // if sonu


    for (i = 0; i < SIZE; i++)
    {
        printf("%4d",a[i]);
    }// for sonu

    puts("");
}// main sonu

void bubbleSort(int * const array ,size_t size, int (*compare)(int a, int b))
{
    // fonk. bildirimi
    void swap(int *element1Ptr,int *element2Ptr);

    unsigned int pass;
    size_t j;

    for ( pass = 0; pass < SIZE-1; pass++)
    {
        for (j = 0; j < SIZE-1; j++)
        {
            if((*compare)(array[j],array[j+1]))
            {
                swap(&array[j],&array[j+1]);
            }// if sonu

        }// for2 sonu
        
    } // for1 sonu
    
} // bubbleSort sonu

void swap(int *element1Ptr,int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

int ascending(int a, int b)
{
    return b<a;
}

int descending(int a, int b)
{
    return b>a;
}

// fonksiyon işaretçisi için int (*compare)(int a, int b) kullandık .*compare etrafındaki parantezler fonksiyon işaretçisi için gereklidir .
// aksi takdirde int *compare(int a, int b) ifadesi 2 tamsayı alan ve bir işaretçi döndüren bir fonksiyon tanımlaması olacaktır.
// bu bubbleSort'un fonk bildiriminde int (*)(int ,int) şeklinde bir bildirim de yapabilirdik ,ancak dokümantsayon için öyle yapmıyoruz.
// değişkenin değerine erişmek için *(içerik operatörü) ile referanstan ayırma(dereference) yaptığımız gibi ,
// fonksiyonu kullanmak için de bir fonksiyon işaretçisi referanstan ayrılabilir.
// bubbleSort'un if ifadesi şu şekilde de kullanılabilir :if( compare(array[j] , array[j+1]) ) 