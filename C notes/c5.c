// c5.c 14.07.2024
// @alicemilozdemir
// syf 109 "3.7 while tekrarlama ifadesi" konusundan
// syf 118 "ondalık sayıları biçimlendirme" konusuna kadarki notlarımı içerir
# include<stdio.h>
int main(void) {

// 3'un 100'den buyuk en kucuk kuvvetini hesaplayan program:
/*int x = 1;
while(3*x <100 ){
    x = 3*x;
}
printf("3'un 100'den buyuk en kucuk kuvveti : %d",3*x);*/


//Sayaç Kontrollü tekrarlama ile sınıf ortalama hesaplayıcısı.
/*int toplam = 0;
int sinifOrt,girdi; //değer verilmemiş değişkenler ,bu değişkenin oldgu hafıza bölgesindeki son değeri alırlar
int ogrenciSayisi = 1;
printf("%s","\n\nOgrenci notlarinin ortalamalarini hesaplayalim.\n");
while(ogrenciSayisi <=10 ){
    printf("\n%d. ogrencinin notunu girin :  ",ogrenciSayisi);
    scanf("%d",&girdi);
    toplam += girdi;
    ogrenciSayisi++;
}
sinifOrt = toplam / 10;
printf("\nNot ortalamasi :  %d",sinifOrt);*/

// sonlandırma kontrollü tekrarlama -belirsiz tekrarlama 
int toplam,girdi,ogrenciSayisi;
float notOrt;

toplam = 0;
ogrenciSayisi = 0;

while (girdi != -1) {
    printf("cikmak icin -1'i tuslayiniz ,devam etmek icin %d. ogrencinin notunu giriniz : ",ogrenciSayisi+1);
    scanf("%d",&girdi);
    if (girdi < 0 && girdi !=-1) {
    printf("%s","HATA:Ogrenci notu negatif olamaz!\n");
    }
    else {
    ogrenciSayisi += 1;
    toplam += girdi;
    }
}
ogrenciSayisi--;
toplam ++;
if (ogrenciSayisi == 0){
printf("%s","HATA : henuz hic bir kod girilmemistir...Lutfen programi yeniden baslatin ve uygun degerler girin!\n");
}
else {
notOrt = (float)toplam / ogrenciSayisi;
/*(float)toplam ifadesi dogrudan bir tür dönüşümü işlemidir.C programalama dili
yalnızca aynı tür terimler arasında aritmetik işlemler gerçekleştirir.Ancak elimizdeki 
ogrenciSayisi değişkeni int değeriyken (float)toplam float değerindedir.Bu problemi
çözmek için derleyici dolaylı bir dönüşüm yapar ve ogrenciSayisi değişkeninin veri türü
float olan bir kopyasını oluşturur.Böylece bölme işlemi gerçekleşir .Tür dönüşümü işlemleri
geçici işlemlerdir ve hem toplam değişkeninin hem de ogrenciSayisi değişkeninin türleri DEĞİŞTİRİLMEZ.*/
printf("\n\n%d sinif mevcutlu sinifinizin not ortalamasi :  %.2f",ogrenciSayisi,notOrt);
}    
// tür donusturme islemi soyle yapilir : degisken = (tür)degisken ,tür donusturme islemi tekil bir işlemdir.
// tür donusturme islemi sağdan sola doğru yapılır.
// tekil işlemler : tür dönüştürme işlemi ve tekil+ ile tekil- işlemleri ,bu 3 işlem aynı öncelik sırasına sahiptir.
// tekil+ = +7   tekil- = -4
// tekil işlemler *,/,% işlemlerinden daha yüksek öncelik seviyesine sahiptir.
    return 0;
}
// 
