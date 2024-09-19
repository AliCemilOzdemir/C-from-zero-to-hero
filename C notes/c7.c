#include<stdio.h>
#include<limits.h>

int main(void) {

// değişken tanımlamaları
unsigned int sayac; // 1'den 10'a kadar olan sayıları yazmak için.
unsigned int sayi1,sayi2; // 2'den 100'e kadar olan çift tamsayıları toplamak için.
    // bileşik faiz uygulaması için
unsigned int yil;
float faiz,toplam_para;

// İnteger değişkenlerin max değerleri
printf("%d",INT_MAX);
printf("%d",INT_MIN);

// KOŞULLU İFADE
5==6 ? printf("\nakillisin") : printf("\nsalaksin");

// for ifadesi ile sayaç kontrollü tekrarlama yapılır.
for(sayac = 0; sayac <=10; sayac++) {
    printf("\n%u",sayac);
}// eğer sayac döngüde tanımlanmışsa ,döngü bittikten sonra "sayac" değişkeni silinir.Bu durumda silinmez

printf("\nSayacin son degeri:%5.u",sayac);

// 2'den 100'e kadar çift tamsayıları toplama
// bütün bu işi böylece yapabilsek bile bu ,program okunabilirliğini güçleştirir.

for(sayi2 = 0 , sayi1 = 2; sayi1<=100; sayi2 += sayi1,sayi1+=2);    

printf("\n2'den 100'e kadar olan cift tamsayilarin toplami :%5.u",sayi2);

// bileşik faiz hesaplamasi -%5 faiz ,1000$ ,10 yil .Süreç sonu bankada ne kadar para olur.
toplam_para = 1000;
faiz = 0.05;
yil = 10;

for(int sayac = 1; sayac <= yil; sayac++){
    toplam_para *= (1+faiz);
    printf("\n%2.d.yil :%10.2f",sayac,toplam_para);
}

// switch-case ifadesinde default'u sona eklemek adettir ancak sıralama bir zorunluluk değildir.
// default sonda ise break zorunlu değildir.

// SWITCH-CASE UYGULAMASI.
//değişken tanımlama
int grade;
unsigned int aCount = 0;
unsigned int bCount = 0;
unsigned int cCount = 0;
unsigned int dCount = 0;
unsigned int fCount = 0;

puts("\nEnter the letter grades.");
puts("Enter the EOF character to end input.");

while( (grade=getchar()) != EOF ) {
    
    switch (grade)
    {
    
    case 'A':
    case 'a':
        ++aCount;
        break;
    
    case 'B':
    case 'b':
        ++bCount;
        break;
    
    case 'C':
    case 'c':
        ++cCount;
        break;
    
    case 'D':
    case 'd':
        ++dCount;
        break;
    
    case 'F':
    case 'f':
        ++fCount;
        break;
    case '\n':
    case ' ':
    case '\t':
    break;

    default:
        puts("Incorrect letter grade entered.");
        puts("Enter a new grade.");
        break;
    }
}
puts("\nTotals for each letter grade are:");
printf("A : %u\n",aCount);
printf("B : %u\n",bCount);
printf("C : %u\n",cCount);
printf("D : %u\n",dCount);
printf("F : %u\n",fCount);

    return 0;
}