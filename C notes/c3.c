#include<stdio.h>

int main(void){

printf("%3.0f \n",17.5/5);

//0'a bölmek sonlandırıcı bir hatadır.
/*
İşlem önceliği üstünlük sıralaması:
1- ()
2- *,/,%
3- +,-
4- =

En içte olan parantezle başlanır. Bir üstünlük durumu yoksa soldan sağa gidilir.
(yanyana olan parantezler'de soldan sağa gidilir ;yanyana *,/,%, ifadeleri vs. durumlarda soldan sağa gidilir.)

*/

// Yürütülebilir ifadeler ya eylem yaparlar( (+,*,/,-,%) ,include ,int main ,printf ,scanf , return ve her türlü döngü) 
// ya da karar verirler(if else).
// gövde ifadesi yürütülse de yürütülmese de if ifadesi tamamlandıktan sonra yürütme,if ifadesinden sonraki ifade ile devam eder.

printf("%d",1==0);

//ilişkisel işlemlerin hepsi aynı öncelik seviyesine sahiptir ve soldan sağa işlenir.
//eşitlik işlemi ilişkisel işlemlerden daha düşük önceliğe sahip,soldan sağa işlenir
// önce ilişkisel ,sonra eşitlik işlemleri.
// eşitlik işlemleri : == ,!=
// ilişkisel işlemler : geri kalan karşılaştırma işlemleri!
// 1==2>3==0

printf("\n%d",1==1==2>3==0==1);// WOHOOOOOO

// == <= != ifadelerindeki iki karakter birbirinden ayrılırsa(= = ,< = ,! =) söz dizim hatası meydana gelir.

int num1,num2; //değişkenleri tanımladık.

printf("\nEnter two integers ,and i will tell you\n");
printf("the relationship they satisfy: \n");

scanf("%d%d",&num1,&num2);

if (num1 ==num2) 
    printf("They are equal.");

// if'ten sonra yürütülecek ifade bir adetse ,küme parantezi kullanmaya gerek yoktur.
if (num1 >num2) 
    printf("the first is bigger");

if (num1 <num2) 
    printf("the second is bigger");

// izin verilmesine rağmen ,programın bir satırında birden fazla kod olmamalı
// atama işlemi(=) dışındaki bütün işlemler soldan sağa işler , = atama işlemi sağdan sola işler.

// ÖNCELİK SIRASI
// -azalan şekilde
// ()              soldan sağa
// * , / , %       soldan sağa
// + , -           soldan sağa
// < , > , <= ,>=  soldan sağa
// == , !=         soldan sağa
// =               sağdan sola  !dikkat 


//anahtar kelimeler kimlik olarak kullanılamaz -int,if,else,void,return
//akış kontrolü ifadelerin yürütülme sıralarını belirlememizi sağlar.

//GÜVENLİ KODLAMA UYARISI
// tek argümanlı printf lerden sakının.
// onun yerine puts kullanın.puts printf'ten farklı olarak karakter dizisi sonuna bir \n ekler.
// eğer \n eklenmesini istemiyorsanız puts'u kullanmayın ,onun yerine iki argümanlı printf kullanın :
// printf("%s","merhaba evlat!");


// /'ye çıkış karakteri denir ,yanındaki karakter ile bir çıkış dizini oluşturur.

int x;
printf("\nx :%d\n&x :%d",x,&x);
    
    return 0;
}//