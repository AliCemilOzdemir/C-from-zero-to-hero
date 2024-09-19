// c34.c 02.08.2024 @alicemilozdemir
// syf 256 "6.10 : Degisken Uzunluklu Diziler" konusundan
// syf 259 "Güvenli C programlama" konusuna kadar gelir.
// bir sonraki bolum 7.Bolum - isaretciler

// C99 'da degiken uzunluklu dizileri kullanilmasi
#include<stdio.h>

// fonk. bildirim
void print1DArray(int arr[],int size );
void print2DArray(int row, int col,int arr[row][col]);

// main fonk. baslangici
int main(void)
{
    int arraySize; // 1 boyutlu dizinin uzunlugu
    int row1,row2,col1,col2; // 2 boyutlu dizinin sutun ve satirlari

    printf("%s","Tek boyutlu bir dizi uzunlugu giriniz: ");
    scanf("%d",&arraySize);

    printf("%s","Iki boyutlu bir dizi icin satir ve sutun uzunlugu giriniz: ");
    scanf("%d%d",&row1,&col1);

    printf("%s","Iki boyutlu baska bir dizi icin satir ve sutun uzunlugu giriniz: ");
    scanf("%d%d",&row2,&col2);

    int array[arraySize];
    int array2D1[row1][col1];
    int array2D2[row2][col2];

    // degisken uzunluklu dizilerde sizeof operatorunun test edilmesi
    printf("\nsizeof ile tek boyut array boyutu %d byte.\n",
            sizeof(array)); // bir tam sayi 4byte tır.

    // tek boyutlu diziye eleman atanması
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = i * i;
    }// for sonu

    // 2 boyutlu diziye eleman atanmasi
    for (size_t i = 0; i < row1; i++)
    {
        for (size_t j = 0; j < col1; j++)
        {
            array2D1[i][j] = i + j;
        } // for2 sonu
    } // for1 sonu
    
    
    // 2 boyutlu diger diziye eleman atanmasi
    for (size_t i = 0; i < row2; i++)
    {
        for (size_t j = 0; j < col2; j++)
        {
            array2D2[i][j] = i + j;
        } // for2 sonu
    } // for1 sonu


    puts("Tek boyutlu dizi :");
    print1DArray(array,arraySize);

    puts("2 boyutlu ilk dizi :");
    print2DArray(row1,col1,array2D1);
    
    puts("2 boyutlu ikinci dizi :");
    print2DArray(row2,col2,array2D2);

} // main sonu

// print1DArray fonk baslangici
void print1DArray(int arr[],int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("array[%u] = %d\n",i,arr[i]);
    }
} // print1DArray fonk sonu


// print2DArray fonk baslangici
void print2DArray(int row, int col,int arr[row][col])
{
    // for1 basi
    for (size_t i = 0; i < row; i++)
    {
        // for2 basi
        for (size_t j = 0; j < col; j++)
        {
            printf("array[%u][%u] = %d\n",row,col,arr[i][j]);
        } // for2 sonu
    } // for1 sonu
} // print2DArray fonk sonu.