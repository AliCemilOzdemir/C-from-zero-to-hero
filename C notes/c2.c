// c2.c  10.07.2024
// Sum Program
//etkileşimli hesaplama kullanıcıdan veri alınarak yapılan hesaplamadır

# include<stdio.h>
int main(void) {

/*
C'de bir değişken ismi herhangi bir geçerli kimliktir.
Bir kimlik :
- bir sayı ile başlamayan
- harf,sayı ve alt çizgiden oluşan bir  karakter dizisidir.

! C, büyük küçük harf duyarlıdır. A1 ve a1 farklı kimliklerdir.
! Oluşturduğunuz kimliklerin derleyici tarafından oluşturulan kimlikler ve
  standart kütüphane kimlikleri ile çakışmasını önlemek için
  "_" ile başlayan değişken isimleri(kimlikler) kullanmaktan kaçının.
 
*/
int integer1; // first integer
int integer2; // second one
int sum; // the sum of the aboves

printf("i1  %d\n",integer1);
printf("i2  %d\n",integer2);
printf("sum  %d\n",sum);

printf("Enter first integer\n");
scanf("%d",&integer1);    
// %d = biçim kontrol karakter katarı = çevrim belirteci
// '%' bir çevrim belirteci başlatan özel karakterdir
// '&' a adres işlemi denir.&integer1 -> integer1'ın hafızadaki adresi.


printf("Enter second integer\n");
scanf("%d",&integer2);
//her değişkenin bir İSMİ, bir TÜRÜ ve bir DEĞERİ vardır.

sum = integer1 + integer2;

printf("Sum is %d",sum);

printf("\ni1  %d",&integer1);
printf("\ni2  %d",&integer2);
printf("\nsum  %d",&sum);
// Hafıza konumuna ne zaman bir değer yerleştirilse ,değer konumun önceki değerinin yerine geçer.Bu işleme yok edici işlem denir.
// Hafıza konumundan bir değer okunduğunda bu işlem yok edici olmayan bir işlemdir.
// Aritmetik işlemlerin hepsi ikili işlemlerdir.


    return 0;
}
/*
toplama +
çıkarma -
çarpma  *
bölme   /
kalan   %
*/

// Tam sayı bölme tam sayı bir sonuç verir.