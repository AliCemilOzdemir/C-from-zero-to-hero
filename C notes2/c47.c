// c47.c 06.08.2024 @alicemilozdemir
// syf 346 "8.5 Standart Giriş Çıkış Kütüphanesi Fonksiyonları" konusundan
// syf 350 "Karakter dizini işleme kütüphanesinde bulunan
// karakter dizini konusunda işlem yapan fonksiyonlar" konusuna kadar gelir.

/*
FONKSİYON PROTOTİPİ    |                 FONKSİYON TANIMI
-------------------------------------------------------------------------------------------------
int getchar(void);     |   standart girişteki bir sonraki karakteri okur ve 
                       |   tamsayı olarak geri döndürür
-------------------------------------------------------------------------------------------------
int *fgets(char *s,    |newline veya EOF karaktere ulaşana ya da n-1 baytlık veri okuyana kadar   
            int n,     |s dizisinin içine sırası gelen karakterleri okur.Dizi sonunu gösteren null
        FILE *stream)  |karakter ,dizinin bitimine eklenir .Fonk. s dizinine kaydettiği karakter
                       | dizinini döndürür.
-------------------------------------------------------------------------------------------------
int putchar(int c);    |c içine kaydedilmiş karakteri ekrana yazar ve sonucu tamsayi olarak 
                       |dondurur.    
-------------------------------------------------------------------------------------------------
int                    |sonunda newline karakteri ile birlikte s karakter dizinini ekrana yazar.
puts(const char *s);   |okuma başarılıysa sıfırdan farklı bir karakter ,aksi halde EOF döndürür
-------------------------------------------------------------------------------------------------
int sprintf(char*s,    |Bu fonksiyon printf ile aynı görevi yapar ancak burda çıktı ekrana yazdır-   
   const char *format, |ılmak yerine s dizisi içinde saklanır. Bu işlem hatasız gerçekleşirse
        ...     )      |s karakter dizisinin karakter sayısı döndürülür,aksi halde EOF döndürülür
-------------------------------------------------------------------------------------------------
int sscanf(char*s,     |Bu fonksiyon scanf ile aynı görevi yapar ancak burda okuma klavyeden değil   
   const char *format, |s dizisinden yapilir. Bu işlem hatasız gerçekleşirse okunan harf sayısı olan
        ...     )      |s karakter dizisinin karakter sayısı döndürülür,aksi halde EOF döndürülür
-------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#define SIZE 80

void tersAl(const char * const sentence);

int main(void)
{
    // fgets ve putchar örneği
    char sentence0[SIZE];
    
    printf("Lutfen tersi alinacak bir cumle giriniz :");
    fgets(sentence0,SIZE,stdin);

    printf("Tersi alinmis cumleniz : ");
    tersAl(sentence0);

    // getchar örneği
    int c;
    char sentence[SIZE];
    int i = 0;

    puts("Enter a line of text :");

    while(i<SIZE-1 && (c = getchar()) != '\n')
    {
        sentence[i++] = c;
    }
    sentence[i] = '\0';

    puts("\nThe line entered was :");
    puts(sentence);

    // sprintf örneği
    char s[SIZE];
    int x;
    double y;

    puts("Enter an integer and a double :");
    scanf("%d%lf",&x,&y);

    sprintf(s,"integer:%6d\ndouble:%8.2f",x,y);

    printf("%s\n%s\n","The formatted output stored in array s is :",s);

}// main sonu

void tersAl(const char * const sentence)
{
    if('\0' == sentence[0])
    {
        return;
    }
    else {
        tersAl(&sentence[1]);
        putchar(sentence[0]);
    }
}