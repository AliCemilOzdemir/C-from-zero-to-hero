// c6.c 21.07.2024
// @alicemilozdemir
// syf 118 "ondalık sayıları biçimlendirme" konusundan
// syf x "y" konusuna kadarki notlarımı içerir
#include<stdio.h>

int main(void) {
// %f = %.6f
// %x.5f ifadesinde x yazilacak sayinin kaç karakterlik alana yazılacağını belirtir.
// örneğin printf("%6.2f\n",3.344); ifadesinin sonucu "  3.34"'tür. Sayının en sağda kaldığına dikkat edin

printf("%6.2f\n",3.344);
printf("%.1f",3.355);
// üstte kullanılan 2 ve 1 değerlerine kesinlik değerleri denir.
// kesinlik değerleri printf'te kullanılır ancak scanf'te kullanmak bir hatadır.
float y = (float)10/3;
printf("\ny : %f",y);
// ondalık sayıların bilgisayarda kesin olarak tutulduğunu düşünmek yanlıştır.
// bilgisayarda yalnızca yaklaşık değerler olarak tutulabilirler.

// syf 119'daki örneğin çözümü
int result;
int passed = 0;
int notpassed = 0;
int studentCount = 10;
int firststudentCount = studentCount+1;

while(studentCount > 0) {
    printf("\nEnter %d. result : ",firststudentCount-studentCount);
    scanf("%d",&result);
    if(result != 1 && result != 2) {
        printf("Please enter 1 if passed ,else enter 2.");
    }
    else {
        if(result == 1) {
            passed++;
        }
        else{
            notpassed++;
        }
        studentCount --;
    }
}

printf("\nPassed : %d\nNot passed : %d\n",passed,notpassed);

if(passed >= 8) {
    printf("\nBonus to instructor !");
}

// atama işlemleri : += , -= , *= , /= , %=
int x = 598 ; 
printf("%d",x);

x+=2;
printf("\n x+=2 ,x : %d",x);

x*=3;
printf("\n x*=3 ,x : %d",x);

x/=10;
printf("\n x/=10 ,x : %d",x);

x-=40;
printf("\n x-=40 ,x : %d",x);

x/=17;
printf("\n x/=17 ,x : %d",x);

// önceden ve sonradan artırma/azaltma
int ace = 19;
printf("\nace++ %d\n",ace++); // bu işlem ile ace 1 artti ancak printf yazdırdıktan sonra 1 arttı.
printf("++ace %d\n",++ace); // bu işlem ile ace 1 artti, printf yazdırdıktan önce 1 arttı.
printf("ace-- %d\n",ace--);
printf("--ace %d\n",--ace);
printf("ace %d\n",ace);
ace++; //bunu böyle yapmak ile sonradan yapmak arasında bir fark yoktur.
printf("ace++ %d\n",ace);
++ace;
printf("++ace %d\n",ace);

// önceden artırma/azaltma ve sonradan artırma/azaltma ancak değişken başka büyük bir ifadenin içerisinde kullanıldı-
// ğı zaman önemli olur .Onun haricinde aynı etkiye sahiptir.

// bir artırma/azaltma işlemini bir değişken(x++) yerine bir ifadede((x-4)++) kullanmak bir hatadır.

/*

İŞLEM ÖNCELİĞİ

İŞLEM                           YÖN              TÜR
-----------------------------------------------------------------
++ , -- (sonradan)              sağdan sola      son ek
++ , -- (önceden)               sağdan sola      tekil

* , / , %                       soldan sağa      çarpımsal
+ , -                           soldan sağa      toplamsal
< , <= , > , >=                 soldan sağa      ilişkisel
== , !=                         soldan sağa      eşitlik

?:                              sağdan sola      koşullu
= , += , -= ,*= , /= , %=       sağdan sola      atama


*/

    return 0;
}