// c31.c 02.08.2024 @alicemilozdemir
// syf 245 "Bir Dizinin İkili Aranması" konusundan
// syf 249 "Çok Boyutlu Diziler" konusuna kadar gelir.

//Bir Dizinin İkili Aranması
// Onislemci Talimatlari
#include<stdio.h>
#define SIZE 15

// fonksiyon bildirimleri
size_t binarySearch(const int b[],int searchKey,size_t low,size_t high);
    // dizi icinde ikili aramanin gerceklestirilmesi
void printHeader(void);
    // cikti icin baslik yazdirilmasi
void printRow(const int b[],size_t mid,size_t low,size_t high);
    //bir satir cikti ile islem goren dizi parcasinin yazdirilmasi


// main fonksiyonu baslangici
int main(void) 
{
    int a[SIZE]; // a dizisinin olusturulmasi
    size_t i; // a dizisindeki elemanlara baslangic degeri atayan sayac
    int key; // a dizisindeki degerin konumunu belirten degisken
    size_t result; // anahtarin konumunu veya -1 tutan degisken

    // verilerin olusturulmasi
    for (i = 0; i < SIZE; i++)
    {
        a[i] = 2 * i;
    }// for sonu
    
    printf("%s", "0-28 arasi rakam giriniz: ");
    scanf("%d",&key);
    
    printHeader();

    // a dizisinde anahtarin aranmasi
    result = binarySearch(a,key,0,SIZE-1);

    if(result != -1)
    {
        printf("%d degeri a dizisinin %d. elemanidir.\n",key,result);
    }// if sonu

    // element dizide yoksa 
    else 
    {
        puts("girdiginiz anahtar deger dizide bulunmamaktadir.");
    }// else sonu

}// main sonu

// binarySearch fonk. baslangici   -     deger        indis       indis
size_t binarySearch(const int b[],int searchKey,size_t low,size_t high)
{                       // - array
    int middle; // dizinin orta elemanini tutan degisken

    // dusuk indisin yuksek indisten buyuk olmasina kadar devam eden dongu
    while(low<= high) 
    {
        // aranacak altdizinin orta elemaninin tespit edilmesi
        middle = (low + high) / 2;

        // dongu sirasinda kullanilan alt dizinin goruntulenmesi
        printRow(b,low,middle,high);

        // orta elemanla anahtar uyusursa ,orta elemanin dondurulmesi
        if(searchKey ==b[middle]) 
        {
            return middle;
        }// if sonu.
        
        else if(searchKey < b[middle]) // aranan eleman dizinin yarisinin kucuk olan kisminda
        {
            high = middle - 1;
        }// if sonu.

        else // aranan eleman dizinin yarisinin buyuk olan kisminda
        {
            low = middle + 1;
        }// else sonu

    }//while sonu.
    
    return -1; // eleman bulunamazsa
} //binarySearch fonk. sonu.

// printHeader fonk. baslangici
void printHeader(void)
{
    unsigned int i; // sayac
    puts("Indisler");

    //sutun basinin ciktisi
    for(i=0; i<SIZE; ++i)
    {
        printf("%3u",i);
    }// for sonu

    puts(""); // ciktida yeni satir yazdirilmasi

    // '-' yazdirilmasi
    for(i=1; i <= 4*SIZE; ++i)
    {
        printf("%s","-");
    }// for sonu

    puts("");
} // printHeader fonk. sonu


// printRow fonk. baslangici
void printRow(const int b[],size_t low,size_t mid,size_t high)
{
    size_t i; // b dizisinde dolasmak icin sayac.

    // dizi icin olusturulan dongu
    for (i = 0; i < SIZE; i++)
    {
        if(i < low || i > high)
        {
            printf("%s"," ");
        } // if sonu
        else if(i == mid) 
        {
            printf("%3d*",b[i]);
        } // else-if sonu
        else
        {
            printf("%3d",b[i]);
        } // else sonu

    }// dongu sonu
    puts("");
} // printRow fonk. sonu.