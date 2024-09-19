// c18.c 01.08.2024 @alicemilozdemir
// syf 188 "5.14 : Özyineleme" konusundan
// syf 197 "Özet" konusuna kadar gelir

// önişlemci talimatları
# include<stdio.h>

unsigned long long int factorial(unsigned int number);
unsigned long long int fibonacci(unsigned int term);

// main başlangıcı
int main(void)
{
    // sayaç tanımlandı.
    unsigned int i,j;
    // 0'dan 20'ye 21 değerin faktöriyellerini yazdır.
    for(i=0; i<=20; i++) {
        printf("%u! = %llu\n",i,factorial(i));
    }// for sonu.
    puts("");
    for(j=0; j<=30; j++){
        printf("%llu ,",fibonacci(j));
    }

} // main sonu.

// factorial fonksiyonunun özyinelemeli tanımı
unsigned long long int factorial(unsigned int number)
{
    // temel durum
    if(number<=1) 
        return 1;

    else
        return number*factorial(number-1);

}

// fibonacci fonk başlangıcı
unsigned long long int fibonacci(unsigned int term) {
    //0,1,1,2,3,5,8,13,21
    switch (term)
    {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        
        default:
            return fibonacci(term-1)+fibonacci(term-2);
            break;
    }
}// fibonacci fonk sonu

// "&&"" ,"||"" ,"?:"" ve "","" işlemleri soldan sağa yapılırlar ve bu işlemler dışında diğer işlemler farklı
// derleyicilerde farklı çalışabilir .Bunun nedeni optimizasyondur.

// özyineleme fonksiyonu defalarca çağırır ve her fonksiyon kendi yerel alanında değişkenler içerdiğinde bu,
// bellek kullanımı ve hız açısından oldukça maliyetli olur.
// özyineleme bazı problem çözümlerinde doğal bir yaklaşımdır ve problemin anlaşılmasını kolaylaştırır.
// bundan dolayı kullanılır.

// modüler programlama iyi yazılım mühendisliği uygulamasıdır .Ancak sürekli fonksiyon çağrıları bellek ve işlemci maliyetini
// artıracağı için performansı azaltır(performans = yüksek başarım) .Performans sistemlerinde tek parça kodlar daha yüksek başarım ile çalışırlar.
// oyun programlama ,gömülü sistemler ,gerçek zamanlı sistemler ,işletim sistemleri konularında
// performansın önemi artar!

