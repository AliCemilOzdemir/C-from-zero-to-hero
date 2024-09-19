// c32.c 02.08.2024 @alicemilozdemir
// syf 249 "Çok Boyutlu Diziler" konusundan
// syf 252 "2-boyutlu dizi islemleri" konusuna kadar gelir.

// çok boyutlu diziler a[x][y] olarak kullanılır . a[x,y] -> HATA

#include <stdio.h>

void printArray(int a[][3]);

int main() 
{
int b[2][2] = {{1,2},{3,4}}; //deger atama
// yeteri kadar baslangic degeri yoksa 0(sıfır) atanır.
int c[2][2] = {{1},{2,3}};

printf("c[0][1] : %d",c[0][1]); // bu deger 0'a esittir cunku atama yapilmamistir.

int array1[2][3] = {{1,2,3},{4,5,6}};
int array2[2][3] = {1,2,3,4,5}; // bu iki boyutlu olacak sekilde parcalaniyor
int array3[2][3] = {{1,2},{4}};

puts("\narray1'in gosterimi");
printArray(array1);

puts("array2'in gosterimi");
printArray(array2);

puts("array3'in gosterimi");
printArray(array3);
}

void printArray(int a[][3]) 
{
    size_t i,j;

    for(i=0; i<=1; ++i) 
    {
        for(j=0; j<=2; ++j)
        {
            printf("%d ",a[i][j]);
        }
        puts("");
    }
}
// tek indisli dizi parametre alındığında dizi parantezlerinin içi[] 
// fonk. parametre kısmında boş bırakılmalıdır
// çok indisli dizilerde ilk indis boş bırakılır gerisi yazılır.
// tüm dizi elemanları indis sayılarına bakılmaksızın bellekte ardışık depolanmaktadır.
