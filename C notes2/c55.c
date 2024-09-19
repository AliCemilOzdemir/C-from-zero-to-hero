// c55.c 07.08.2024 @alicemilozdemir
// syf 406 "C yapıları ,Birlikler ,Bit işleme ve Numaralandırmalar" konusundan
// syf 409 "Yapı Üyelerine Erişim" konusuna kadar gelir.

#include<stdio.h>


// Yapı Tanımı
// card kelimesi yapı tanımına verilen yapı etiketidir.
struct card
{
    char *face;
    char *suit;
}acard,deck[52],*cardPtr;// Her bir yapı tanımı noktalı virgül ile bitmelidir.
/*acard struct card veri türünde bir değişken
deck[52] struct card veri türünde 52 elemanlı bir dizi
*cardPtr struct card veri türünde bir işaretçi*/


struct employee2{
    char firstName[20];
    char lastName[20];
    unsigned int age;
    char gender;
    double hourlySalary;
    // struct employee2 person;             BU BIR HATADIR!
    struct employee2 *ePtr;
};

int main(void)
{
/*
· Takma İsimler (typedefs) - Önceden tanımlanmış veri türleri için takma
isimler oluşturmak
· Birlikler (Un ions) - Yapılar gibi türetilmiş veri tipleridir. Fakat aynı depolama
alanını paylaşan üyeler ile türetilmiş veri türleridir.
· Bitsel Operatörler - Bütün işlenen bitlerin işlenmesi için
· Bit Alanları - Yapıların ya da birliklerin işaretsiz tam sayı ya da tam sayı üyele-
rinde, sıkışık bilgi paketleri yardımıyla üyelerin saklandığı bit sayısını belirle-
mek için
. Numaralandırmalar (Enumerations) - Tanımlayıcılar ile temsil edilen tam
sayı sabitleri kümesidir.
*/

// yapının üyeleri temel veri tipi değişkenleri ,diziler ve diğer yapılardır.

// özüne yönelik yapılar :Bu yapı türü kendisine işaret eden bir işaretçi içerir. 
// yapının içinde kendi örneğini tanımlamak bir hatadır ancak kendisine işaret eden bir işaretçi içerebilir.
// Yapı tanımlamaları bellekte herhangi bir yer kaplamaz ,her tanım değişkenleri tanımlamak için yeni bir veri türü oluşturur.
// Yapı tanımlaması:
struct card deck[52],*cardPtr; 
/*acard struct card veri türünde bir değişken
deck[52] struct card veri türünde 52 elemanlı bir dizi
*cardPtr struct card veri türünde bir işaretçi*/
// yapı etiket ismi isteğe bağlıdır ancak bildirilmesi daha sonra çağrılabilir olmasını sağlar


/*Yapılar üzerinde gerçekleştirilebilen, geçerli işlemler sadece aşağıdakilerdir:
· Aynı tür yapı değişkenlerine yapı değişkenleri atama
· Bir yapı değişkeninin adresini (&) alma
· Bir yapı değişkeninin üyelerine erişme (bkz. Bölüm 10.4)
· Bir yapı değişkeninin boyutunu belirlemek için sizeof operatörü kullanmak*/

// yapıları her zaman == ya da != ile karşılaştırmak doğru değildir.
struct card acard = {"Three","Hearts"}; // *face ve *suits değişkenlerine değerler atanıyor.
// listede yapının değişken sayısından daha az atama yapılmışsa ,atama yapılmayan değişkenlere türlerine göre 0 ya da NULL atanır.


// Yapı üyelerine erişim için 2 operatör kullanılır : 
// 1) nokta operatörü -yapı üyesi operatörü(.) 
// 2) yapı işaretçisi operatörü -ok operatörü(->)

// yapı üyesi operatörü doğrudan yapının değişken ismiyle yapı üyesine erişir.
printf("%s\n",acard.suit); // Hearts
// yapı işaretçisi operatörü yapıda bir işaretçi üzerinden bir yapı üyesine erişir.
printf("%s",cardPtr->suit); // Hearts

}