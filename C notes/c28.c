// c28.c 02.08.2024 @alicemilozdemir
// syf 236 "Dizilerin Sıralanması" konusundan
// syf 239 "Örnek Olay Çalışması :Dizileri kullanarak Ortalama,Mod ve Orta Değeri Bulunması" konusuna kadar gelir.

#include<stdio.h>
#define SIZE 10

int main(void)
{

    int a[SIZE]={2,4,6,8,10,12,89,68,45,37};
    int pass;
    size_t i;
    int hold;

    puts("orijinal siradaki veriler :");
    for(i=0; i<SIZE; ++i) 
    {
        printf("%-4d",a[i]);
    }

    for(pass=1; pass<SIZE; pass++) 
    {
        for(i=0; i<SIZE-1; i++) 
        {
            if(a[i]>a[i+1])
            {
                hold = a[i+1];
                a[i+1] = a[i];
                a[i] = hold;
            }
        }
    }

    puts("\n\nElemanlarin artan sirada siralanmasi :");

    for(i=0; i<SIZE; ++i) 
    {
        printf("%-4d",a[i]);
    }
    puts("");
}