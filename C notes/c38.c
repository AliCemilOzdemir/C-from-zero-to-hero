// c38.c 05.08.2024 @alicemilozdemir
// syf 291 "7.6 Referans ile Aktarım Kullanan Kabarcık Sıralama" konusundan
// syf 295 "sizeof Operatörü" konusuna kadar gelir.

// Referans Aktarımı Kullanan Bubble Sort

// Onislemci Talimatlari
#include<stdio.h>
#define SIZE 10

// fonk bildirimleri
void bubbleSort(int * const array ,size_t size);


int main(void)
{
    int a[SIZE] = {2,4,6,8,10,12,89,68,45,37};
    size_t i; // sayac

    puts("Data items in original order :");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d",a[i]);
    }
    
    // diziyi sırala
    bubbleSort(a,SIZE);

    puts("\nData items in ascending order :");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d",a[i]);
    }

    puts("");
}// main sonu

void bubbleSort(int * const array ,size_t size)
{
    // fonk. bildirimi
    void swap(int *element1Ptr,int *element2Ptr);

    unsigned int pass;
    size_t j;

    for ( pass = 0; pass < SIZE-1; pass++)
    {
        for (j = 0; j < SIZE-1; j++)
        {
            if(array[j]>array[j+1])
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