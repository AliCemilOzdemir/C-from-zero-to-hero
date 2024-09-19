//      12.08.2024 @alicemilozdemir
// syf 448 "Sıralı Erişim Dosyasından Veri Okuma" konusundan
// syf x "y" konusuna kadar gelir.

#include<stdio.h>

int main(void)
{
    int hesapNo;
    char isim[30];
    double ucret;

    FILE *cfPtr; // client file pointer.

    if( (cfPtr = fopen("clients.dat","r")) == NULL )
    {
        puts("Dosya acarken hata meydana geldi...");
    }

    else
    {
        printf("%-15s%-29s%-10s\n","Hesap no","isim","Ucret");
        printf("------------------------------------------------------\n");

        while(!feof(cfPtr))
        {
            fscanf(cfPtr,"%d%29s%lf",&hesapNo,isim,&ucret);
            printf("%-15d %-29s %-10.2f\n",hesapNo,isim,ucret);
        }
        fclose(cfPtr);
    }
}
// rewind ifadesi dosyayı okuyan imlecin konumunu yeniden dosya başına getirir