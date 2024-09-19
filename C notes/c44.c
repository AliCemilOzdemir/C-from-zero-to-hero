// c44.c 06.08.2024 @alicemilozdemir
// syf 313 "Menü seçmelibir sistem oluşturmak için fonksiyon işaretçileri kullanmak" konusundan
// syf 335 "C dilinde karakterler ve karakter dizinler" konusuna kadar gelir.

#include<stdio.h>

void function1(int a);
void function2(int b);
void function3(int c);


int main(void)
{  
    // her biri int deger alan ve void 3 fonksiyona işaret eden işaretçi dizisinin yüklenmesi
    void (*f[3])(int) = {function1,function2,function3};
    size_t choice;

    do
    {
    printf("%s","Enter a number between 0 and 2 ,3 to end :");
    scanf("%u",&choice);
    
    (*f[choice])(choice); // choice 'ıncı *f elemanına choice degerini vererek eris.
    }while(choice >= 0 && choice <3);

    puts("Program execution completed.");

}

void function1(int a) 
{
    printf("You entered %d so function1 was called \n\n",a);
}

void function2(int b) 
{
    printf("You entered %d so function2 was called \n\n",b);
}

void function3(int c) 
{
    printf("You entered %d so function3 was called \n\n",c);
}