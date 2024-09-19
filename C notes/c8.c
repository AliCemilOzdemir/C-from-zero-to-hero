#include<stdio.h>

int main(void) {
// DEĞİŞKEN ATAMA !
unsigned int x,y;

// Döngüler :
// 1) sayaç kontrollü döngü
// 2) sonlandırma kontrollü döngü
//------------------------------------------------------------------------------
/*
while(koşul){

}
ifadesiyle hem sayaç kontrollü hem de sonlandırma kontrollü döngü yapılabilir.
*/
//------------------------------------------------------------------------------
/*
for ( tanımlama1,tanımlama2...; koşul1,koşul2...; artırma/azaltma){

}
ifadesiyle sayaç kontrollü döngü yapılır.
*/
//------------------------------------------------------------------------------
/*
do{

}while(koşul);

ifadesiyle hem sayaç kontrollü hem de sonlandırma kontrollü döngü yapılabilir.
*/

// do...while ile while'ın farkı do...while'da önce işlemler yapılır sonra koşula bakılır.
// while'da ise önce koşula bakılır sonra işlemler yapılır.

// break ifadesi ,yürütme şemasında mevcut komuttan çıkıp bir sonraki komutu yürütür.
// continue ifadesi ,yürütme şemasında mevcut komutun bir sonraki eylemini yürütür.

// while ve do...while yapılarında continue'den hemen sonra döngü devam koşulu test edilirken,
// for yapısında continue'den sonra artırma/azaltma ifadesi yürütülür(ifade3) ardından test yapılır.

// (MANTIKSAL VE) ve (MANTIKSAL VEYA) ifadeleri "kısa devre yapılma" özelliği ile yapılmışlardır.
// Yani a==b && c==d ifadesinde a==b==0 ise ifadeye diğer koşula bakılmadan direkt 0 değeri verilir.
// a==b || c==d ifadesinde a==b==1 ise ifadeye direkt 1 değeri verilir.
// Bu iki ifade soldan sağa yürütülür .
// && operatöründe yanlış olması en olası ifadeyi en sola koymak performans artımı sağlar. 
// || operatöründe doğru olması en olası ifadeyi en sola koymak performans artımı sağlar.

/*

İŞLEM ÖNCELİĞİ

OPERATÖR                         YÖN              TÜR
-----------------------------------------------------------------
++ , -- (sonradan)              sağdan sola      son ek
+,-,!,++ , -- (önceden)         sağdan sola      tekil

* , / , %                       soldan sağa      çarpımsal
+ , -                           soldan sağa      toplamsal
< , <= , > , >=                 soldan sağa      ilişkisel
== , !=                         soldan sağa      eşitlik

&&                              soldan sağa      mantıksal VE
||                              soldan sağa      mantıksal VEYA

?:                              sağdan sola      koşullu
= , += , -= ,*= , /= , %=       sağdan sola      atama
,                               soldan sağa      virgül
*/

// eşitlik işlemi  == 
// atama işlemi  =

// a=7 doğru ,7=a yanlış birer kullanım örnekleridir.
// bir atama işleminde(örnek x=5) soldaki değer(x- değişken) left value=lvalue olarak adlandırılır.
// sabit(örneğimizde 5) ise right value=rvalue olarak adlandırılır. 
// lvalue'lar rvalue olabilir ancak tersi olamaz .
// koşul kullanırken sabiti sol tarafa yazmak(örnek 7==t) ,eşitlik işlemi yerine atama işlemi
// kullanıldığı durumlarda bizi koruyacaktır .Çünkü 7=t yazarsanız hata alırsınız.BAŞARILI!

x==5;


    return 0;
}