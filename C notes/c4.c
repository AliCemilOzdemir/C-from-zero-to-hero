# include <stdio.h> // bu şekilde boşluklu yazmanin bir problemi yoktur.
int main(void) {

// programda ifadelerin hangi sırada yürütüleceğini belirlemeye PROGRAM KONTROLÜ denir.

//SÖZDE KOD algoritma geliştirmenize yardımcı olan yapay ve gayri resmi bir dildir.
// sözde kod sadece eylem ifadelerini içerir(Yürütülebilir ifadeler) .Ancak tanım ifadeleri
// yürütülebilir ifadeler değildirler .tanımlama ifadeleri kod çalıştığında bir eyleme neden olmazlar.
// hesaplama ,giriş ,çıkış ,karşılaştırma ise eyleme neden olur.
// Bundan dolayı ,sözde koda başlamadan önce tanımlamalar yapılmalı ,kısaca açıklamaları da yapılmalı.


// normalde bir programdaki ifadeler yazıldığı sırada arka arkaya yürütülür.buna SIRALI YÜRÜTME denir.
// Ancak KONTROL YAPILARI bu sıralamayı değiştirmenize olanak tanır .Buna KONTROLÜN AKTARIMI denir.

//Bohm ve Jacopini'nin çalışması bize gösterdi ki TÜM PROGRAMLAR
// 1- SIRALI YAPI - kodların sıralı şekilde okunması
// 2- SEÇİM YAPISI - if ve else tarzı ifadeler ile seçim yapılması
// 3- TEKRARLAMA YAPISI - while ,for ,do while gibi döngüler ile tekrarlanma
// isimli 3 kontrol yapısı ile yazılabilir.

//AKIŞ DİYAGRAMI bir algoritmanın yahut bir kısım algoritmanın grafiksel gösterimidir.
// Hesaplama yahut herhangi bir giriş-çıkış için EYLEM SEMBOLÜ olarak isimlendirilen DİKDÖRTGEN kullanılır.
// BAŞLANGIÇTA ve SONDA ELİPS kullanılır.
//Eğer program YARIDA KESİLDİYSE başlangıçta ve sonda ○ tarzı bir ÇEMBER kullanılır.
// if else ifadelerinde KARAR SEMBOLÜ EŞKENAR DÖRTGEN kullanılır.


//C'de seçim ifadeleri 3 tanedir
// if - tek seçim
// if else - çift seçim
// switch - çoklu seçim ifadesi

int grade = 85;
// bir karar herhangi bir ifade üzerine kurulabilir ,
// eğer ifade sıfır olursa yanlış muamelesi görür,aksi halde doğru

// if - kontrol ifadesi 1
if(grade >= 60) {
    printf("Passed!\n");
}

// if - else
if (grade < 85) {
    puts("Takdir alamadiniz...");
}
else {
    puts("Takdir aldiniz...");
}

// Koşullu ifade
// koşul ? eylem1 : eylem2      eylem1 koşul doğruysa yapılır ,eylem2 yanlışsa.
grade >= 60 ? puts("helal") : puts("haram");

// Kümelenmiş if else ifadeleri :

if (grade>90) {
    puts("note : A");
}

else {
    
    if (grade>80) {
        puts("note : B");
    }

    else{
        
        if (grade>70) {
            puts("note : C");
        }
        
        else {
            
            if (grade>60) {
                puts("note : C");
            }
            else {
                puts("KALDI!");
            }        
        }
    }
}

// bu yapı yerine else if yapısı tercih edilir .Kullanımı python daki elif gibidir.


//C'de tekrarlama ifadeleri 3 tanedir
// while
// do..while
// for

/*
HEPSİ BUDUR .C YALNIZCA 7 KONTROL İFADESİNE SAHİPTİR .SIRA ,3 TÜR SEÇİM ,3 TÜR TEKRARLAMA
HER C PROGRAMI ALGORİTMAYA UYGUN ŞEKİLDE YALNIZCA VE YALNIZCA BU 7 KONTROL İFADESİNİN
BİRLEŞİMİNDEN OLUŞUR.

KONTROL İFADELERİNİ BİRLEŞTİRMENİN YALNIZCA TEK BİR YOLU VARDIR : KONTROL İFADESİ KÜMELEME
KONTROL İFADELERİ BİRBİRİNE YALNIZCA 2 ŞEKİLDE BAĞLANABİLİRLER(A-B ,B-A ŞEKLİNDE)
TÜM BUNLAR BASİTLİĞİN ÖZÜDÜR.
*/




    return 0;
}