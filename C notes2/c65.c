//      12.08.2024 @alicemilozdemir
// syf 442 "C'de dosya işleme" konusundan
// syf 448 "Sıralı Erişim Dosyasından Veri Okuma" konusuna kadar gelir.

// Sıralı erişim Dosyası Oluşturma
#include<stdio.h>

int main(void)
{
    unsigned int hesap;
    char ad[30];
    double balence;

    FILE *cfPtr; // clients.dat dosya işaretçisi = client file Ptr

    // fopen dosyayı açar .Dosya oluşturulamıyorsa NULL değer döndürülür
    if( (cfPtr = fopen("clients.dat","w")) == NULL )
    {
        puts("dosya acilamadi");
    }

    else
    {
        puts("Hesap ,ad ve bakiye girin.");
        puts("Giris islemini sonlandirmak icin EOF girin");
        printf("%s","?");
    
        scanf("%d%29s%lf",&hesap,ad,&balence);
    
        while(!feof(stdin)) // feof'in argümanı eof algılayıcısı için kontrol edilen dosyanın işaretçisidir.
        // eof std'in tarafından girilirse fonksiyon True dondurur ,aksi takdirde False dondurur.
        {
            fprintf(cfPtr,"%d %s %.2f\n",hesap,ad,balence);
            printf("%s","?");
    
            scanf("%d%29s%lf",&hesap,ad,&balence);
        } // while sonu
    
        fclose(cfPtr);
    }

}
/*
r			var olan bir dosyayı Okumak için açın.
w			yazmak için bir dosya oluşturun. Dosya zaten varsa, var olan içerik silinir.
a			ekleme: açmak veya dosyanın sonuna yazma için bir dosya oluşturmak.
r+			güncelleme (okuma ve yazma) için var olan bir dosyayı açın.
W+			güncelleme için bir dosya oluşturun. Dosya zaten varsa, var olan içerik silinir.
a+			ekleme: açmak veya güncelleme için bir dosya oluşturmak; yazı dosyanın sonunda yapılır.
rb			ikili modda okumak için varolan bir dosyayı açın.
wb			Ikili modunda yazmak için bir dosya oluşturun.Dosya zaten varsa, güncel içeriği atın.
ab			ekleme: açmak veya ikili modda dosyanın sonuna yazmak için bir dosya oluşturun.
rb+			ikili modunda güncelleme (okuma ve yazma) için varolan bir dosyayı açın.
wb+			ikili modunda güncelleme için bir dosya oluşturun.Dosya zaten varsa, var olan içerik silinir.
ab+			ekleme: açma veya ikili modunda güncelleme için bir dosya oluşturun; yazılma dos-
			yanın sonunda yapılır.
*/
/*
"r +" modu okuma ve yazma
için var olan bir dosyayı açar. "w +" modu okuma ve yazma için bir dosya oluşturur.
Kayıtlı bir dosya "w +" modunda acılınca iceriği silinir. "a+" modu, dosyavı vazmak ve
okumak için açar-bütün kayıtlar dosyanın sonuna yapılır. Dosya yoksa da oluşturu-
lur.
*/
/*
r+ var olmayan bir dosyayı oluşturamaz
w+ ve a+ oluşturabilir.
*/