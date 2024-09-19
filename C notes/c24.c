// c24.c 02.08.2024 @alicemilozdemir
// syf 229 'Karakter dizinlerinin karakter dizileri ile depolanması ve işlenmesi' konusundan
// syf 230 'Statik ve Otomatik Yerel Diziler' konusuna kadar gelir.

#include<stdio.h>
#define BOYUT 20

int main(void)
{
    char string1[BOYUT];
    char string2[] = "string literal";
    size_t i; // sayaç

    puts("Karakter dizinini giriniz(en fazla 19 karakter):");
    scanf("%19s",string1);

    printf("string1 : %s\nstring2 : %s\nstring1'in karakterler arasi bosluk ile yazdirilmasi :\n",
    string1,string2);
    for(i=0; i<BOYUT && string1[i] != NULL; ++i){
        printf("%c ",string1[i] );
    }// döngü sonu
    printf("%s",string1);
    puts("\n");

    char dizi[6];
    scanf("%s",dizi);
    printf("\n%s",dizi);
}

// karakter dizileri
// char string1[] = "first";       ya da       char string1[] = {"f","i","r","s","t","\0"};
// "first" kelimesi 5 karakter ve en sonda yer alan dizin sonlandırma karakteri null'dan oluşmaktadır(6 elemanlı)
// null karakterinin karakter sabitinde temsil biçimi "\0"'dır.

// scanf ile karakter dizisi alımı :
// scanf boşluk ,tab ,yeni satır ve ya dosya sonu karakterini görene kadar okumaya devam eder ,sonra durur.

// char string2[20]; // dizisi 19 karakter ve sonlandırma karakterinden oluşur .Yani bu dizi 19 karakter saklayabilir
// scanf("%19s",string2) ifadesi klavyeden girilen karakter dizinini string2 içine atmaktadır.
// üstteki scanf ile ,girilen 19 harften fazlası belleğe alınmaz ve string2'de tutulmaz .İlk 19 harf tutulur.
// printf bir diziyi yazarken "\0" = null karakterini görünceye kadar yazmaya devam eder.
