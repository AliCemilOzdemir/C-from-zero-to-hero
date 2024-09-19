// c14.c 31.07.2024 @alicemilozdemir
// syf 179 '5.11 Örnek: Bir Şans Oyunu' konusundaki benim çözümümü gösterir

// önişlemci talimatlari 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// main fonk. baslangici
int main(void) {
    // bir program içinde rand fonksiyonu her kullanıldığında sözde rastgele bir çıktı verir.(kod 1 kere yürütülüyor ancak rand birkaç kez kullanılıyor)
    // ancak aynı program yeniden yürütüldüğünde alınan değerler önceki çalıştırmayla tamamen aynıdır.(kod tekrar yürütüldüğünde)
    printf("%u\n",rand()); // kodu her çalıştırdığında 41 çıktısını alırsın.
    printf("%u\n",rand()); // kodu her çalıştırdığında 18467 çıktısını alırsın.
    // for başlangıcı
    for(int i = 1; i<5; i++) {
        printf("%u\t",rand());
    }// for sonu


// 5.11 Örnek: Bir Şans Oyunu -BARBUT
/* iki kere zar atılacak
bunların toplamı 7 veya 11 ise oyuncu direkt kazanır.
bunların toplamı 2,3 veya 12 ise barbut olur ve oyuncu kaybeder.
4,5,6,8,9,10 yaparsa tekrardan aynısını yapana kadar atması gerekir ve bu süreçte 7 atarsa kaybeder.
*/
/*
2 zar at ve bunları topla
ilk atışta
1)toplam 7 veya 11 ise oyun biter ve oyuncu kazanır
2)toplam 2,3 veya 12 ise oyun biter ve oyuncu kaybeder

3)toplam 4,5,6,8,9,10 ise oyun devam eder.
Bu sefer:
1) oyuncu 7 atarsa döngü biter.
2) 1 olmazsa ve oyuncu kendi puanını atarsa oyunu kazanır 

*/
    char enterBas;
    int firstPoint,recentPoint;

    printf("\n\n%s\n","--BARBUT--");
    
    puts("zarlari atmak icin ENTER'a basiniz...");
    scanf("%c",&enterBas);
    
    srand(time(NULL));

    firstPoint = (rand() % 6) + (rand() % 6) + 2;
    printf("Puaniniz : %d\n",firstPoint);
    
    if(firstPoint == 7 || firstPoint == 11) {
        puts("Kazandiniz!");
    }
    
    else if(firstPoint == 2 || firstPoint == 3 || firstPoint == 12) {
        puts("Kaybettiniz!");
    }
    
    else {
        puts("Oyun devam ediyor...");
        do{
            puts("zarlari atmak icin ENTER'a basiniz...");
            scanf("%c",&enterBas);
            
            recentPoint = (rand() % 6) + (rand() % 6) + 2;
            
            if(recentPoint == firstPoint) {
                printf("\nPuaniniz : %d\n",recentPoint);
                puts("Kazandiniz!");
                break;
            }
            else if(recentPoint == 7) {
                printf("\nPuaniniz : %d\n",recentPoint);
                puts("Kaybettiniz!");
                break;
            }
            else {
                printf("Puaniniz : %d\n",recentPoint);
                puts("Oyun devam ediyor...");
            }

        }while(recentPoint != 7);

    }



    return 0;
}// main fonk sonu.