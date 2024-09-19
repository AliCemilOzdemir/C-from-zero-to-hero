// c30.c 02.08.2024 @alicemilozdemir
// syf 244 "Bir Dizinin Doğrusal Aranması" konusundan
// syf 245 "Bir Dizinin İkili Aranması" konusuna kadar gelir.

// Dizinin Doğrusal Aranması
// Önişlemci Talimatları
#include<stdio.h>
#define SIZE 100

// fonksiyon bildirimi
size_t linearSearch(const int array[], int key, size_t size);

// main fonksiyonu baslangici
int main(void) 
{
    int a[SIZE]; //a dizisinin tanimlanmasi
    size_t x; // a dizisinin sayaci.
    int searchKey; // aranacak sayi.
    size_t element; // anahtarin konumunu veya -1'i tutacak degisken.

    // veri uretme
    for(x=0; x<SIZE; x++)
    {
        a[x] = x*2;
    } // for sonu

    // aranacak verinin alinmasi 
    puts("Tamsayi arama anahtarini giriniz :");
    scanf("%d",&searchKey);

    // a dizisinin anahtar aranma sonucunu tutacak element deigskeninin degerini almasi
    element = linearSearch(a,searchKey,SIZE);

    // element dizide varsa
    if(element != -1)
    {
        printf("%d degeri a dizisinin %d. elemanidir.\n",searchKey,element);
    }// if sonu

    // element dizide yoksa 
    else 
    {
        puts("girdiginiz anahtar deger dizide bulunmamaktadir.");
    }// else sonu

}// main sonu.

// linearSearch fonk. baslangici
size_t linearSearch(const int array[], int key, size_t size)
{
    size_t n;//sayac

    //dizi icinde dongu ile dolasilmasl
    for(n=0; n<size; n++) 
    {
        if(array[n] == key)
        return n; // anahtar bulunursa indis donduruluyor.
    }
    return -1; // anahtar bulanamazsa

}// linearSearch fonk. sonu.