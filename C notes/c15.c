// c15.c 31.07.2024 @alicemilozdemir
// syf 179 '5.11 Örnek: Bir Şans Oyunu' konusundaki kitabın çözümünü gösterir.
// syf 182 "5.12 : Bellek Sınıfları" konusuna kadar gelir

// önişlemci talimatları
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// oyun durumunu temsil eden sabitleri listeleme
enum Status {CONTINUE, WON, LOST};

// fonksiyon bildirimi
int rollDice( void );

// main fonksiyonu program yürütmesine başlar
int main() 
{
    // fonksiyon tanımlamaları
    int sum; // atilan zar toplami.
    int myPoint; // kazanmak için oyuncu bu puanı yapmak zorunda

    enum Status gameStatus;// CONTINUE, WON VEYA LOST İÇEREBİLİR.
    //şimdi saati kullanarak rastgele sayı üreticisini rastgele hale getirelim.
    srand(time(NULL));

    sum = rollDice(); // zarların ilk atışı

    //zarlarin toplamına bakarak oyun durumunu belirle - switch
    switch (sum)
    {

        // ilk atışta kazan
        case 7: // 7 kazanır
        case 11: // 11 kazanır
            gameStatus = WON; // oyun kazanıldı.
            break;
        
        // ilk atışta kaybet
        case 2: // 2 kaybeder
        case 3: // 3 kaybeder
        case 12: // 12 kaybeder
            gameStatus = LOST; // oyun kaybedildi.
            break;

        default:
            gameStatus = CONTINUE; // oyuncu atış yapmaya devam eder.
            myPoint = sum; 
            printf("Point is %d\n",myPoint); // puanı bildir.
            break; // isteğe bağlı
    }// switch sonu.

    // oyun devam ediyorsa
    while (CONTINUE == gameStatus)//oyuncu atış yapmaya devam etmeli.
    {
        sum = rollDice(); // zarları tekrar at.

        // oyunun durumunu belirle
        if(sum == myPoint) { // aynı puanı getirerek kazandı.
            gameStatus = WON; // kazandı!
        }// if sonu
        else if(7 == sum) {//7 atarak kaybeder.
            gameStatus = LOST;
        }// else if sonu.
    }// while sonu
    
    // galibiyet ve mağlubiyet mesajını göster.
    
    if(gameStatus == WON) {
        puts("Player wins");
    }// if sonu

    else {
        puts("Player loses");
    }// else sonu

    return 0;
} // main sonu

// zarları at, toplamı hesapla ve sonuçları göster.
int rollDice(void) {
    int dice1; // ilk zar
    int dice2; // ikinci zar
    int workSum; // zarlarin toplami

    //dice1 ve dice2 değerlerini rastgele seç ve toplamı workSum'a aktar.
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    workSum = dice1 + dice2;

    printf("Player rolled %d + %d = %d\n",dice1,dice2,workSum);// atışın sonuçlarını döndür.

    return workSum; // zarların toplamını gönder.
} // rollDice fonksiyonu sonu.


// Notlar
/*
enum anahtar kelimesi ile başlayan bir listeleme kimlikler tarafından temsil edilen sabit sayılar kümesidir.
enum sabitleri bazen SEMBOLİK SABİT olarak adlandırılır.
Bir enum'daki değerler 0'dan başlar ve 1'er 1'er artar.
enumdaki her kimliğe bir değer atamak da mümkündür (enum Status {CONTINUE=10, WON, LOST};) 
    enum şöyle işler : bizim değer atadıklarımızın solundakilere 0'dan başlar ve 1'er artar.Ta ki değer
    atadığımız enum sabitine gelene kadar.Ardından değer atadığımız sabitten sonraki sabitler de eğer değer
    atanmamışlarsa bizim değer atadığımızdan itibaren 1'er artarak devam ederler.
    Değer atadıysak üstteki süreç aynen devam eder.

bir kimlik tektir ancak değeri kopyalanabilir.

Tanımlandıktan sonra bir enum sabitine değer atamak bir söz dizim hatasıdır.
enum sabitlerinin isimlerinde büyük harfler kullanılması iyi programlama uygulamasıdır.
*/