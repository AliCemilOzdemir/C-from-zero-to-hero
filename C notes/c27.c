// c27.c 02.08.2024 @alicemilozdemir
// syf 235 'const anahtar sözcüğünün dizi parametreleri ile kullanımı' konusundan
// syf 236 "Dizilerin Sıralanması" konusuna kadar gelir.

// C dilinde const tip belirteci kullanılarak dizinin değerlerinin fonk. ile değiştirilmesi önlenir
#include<stdio.h>

void tryToModifyArray(const int b[]);

int main(void) 
{
    int a[] ={10,20,30}; 

    tryToModifyArray(a);

    printf("%d  %d  %d",a[0],a[1],a[2]);

}

void tryToModifyArray(const int b[]) 
{
    b[0]+=1;
    b[1]+=1;
    b[2]+=1;
}// bu kod hata verecektir cunku const değiştirilemez.

// const'lar fonksiyona konulmalidir ,degiskene degil!