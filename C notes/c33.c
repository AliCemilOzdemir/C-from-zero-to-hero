// c33.c 02.08.2024 @alicemilozdemir
// syf 252 "2-boyutlu dizi islemleri" konusundan
// syf 256 "6.10 : Degisken Uzunluklu Diziler" konusuna kadar gelir.

// iki boyutlu dizi islemleri

// Onislemci Talimatlari
#include<stdio.h>
#define STUDENTS 3
#define EXAMS 4

// Fonk Bildirimleri
int minimum(int grades[][EXAMS], size_t pupils ,size_t tests); // bir ogrencinin en dusuk notu
int maximum(int grades[][EXAMS], size_t pupils ,size_t tests); // bir ogrencinin en yuksek notu
double average(const int setOfGrades[] ,size_t tests); // bir ogrencinin not ortalamasi
void printArray(int grades[][EXAMS], size_t pupils ,size_t tests); // dizinin yazdirilmasi

//pupils = STUDENTS , tests = EXAMS


// main fonk baslangici
int main()
{
    size_t student; // ogrenci sayaci
    
    // 3 ogrencinin notlarina baslangic degeri atanmasi
    int studentGrades[STUDENTS][EXAMS] = 
    {   {77 ,68 ,86 ,73 },
        {96 ,87 ,89 ,78 },
        {70 ,90 ,86 ,81 }  };

    // studentGrades dizisinin ekrana yazdirilmasi
    puts("Dizi:");
    printArray(studentGrades,STUDENTS,EXAMS);
    
    // en yuksek en dusuk notlarin yazdirilmasi
    printf("\n\nEn dusuk not: %d\nEn yuksek not: %d\n",
            minimum(studentGrades,STUDENTS,EXAMS),
            maximum(studentGrades,STUDENTS,EXAMS));

    // ogrencilerin not ortalamalarinin yazdirilmasi :
    for (student = 0; student < STUDENTS; student++)
    {
        printf("%u. ogrencinin not ortalamasi : %.2f",
                student+1,
                average(studentGrades[student],EXAMS));
        puts("");
    }// for sonu

}// main fonk sonu.


//minimum fonk. baslangici
int minimum(int grades[][EXAMS], size_t pupils ,size_t tests)
{
    size_t i; // sayac1
    size_t j; // sayac2
    int lowGrade = 100; // bu degisken yapilan karsilastirma ve atamalar sonunda en dusuk notu tutar.

    // dongu1
    for (i = 0; i < STUDENTS; i++)
    {
        // dongu2
        for (j = 0; j < EXAMS; j++)
        {
            // if baslangici
            if(lowGrade > grades[i][j])
            {
                lowGrade = grades[i][j];
            }// if sonu.

        }// dongu2 sonu.

    }// dongu1 sonu.
    return lowGrade;
} // minimum fonk sonu.


// maximum fonk. baslangici
int maximum(int grades[][EXAMS], size_t pupils ,size_t tests)
{
    size_t i; // sayac1
    size_t j; // sayac2
    int highGrade = 0; // bu degisken yapilan karsilastirma ve atamalar sonunda en dusuk notu tutar.

    // dongu1
    for (i = 0; i < STUDENTS; i++)
    {
        // dongu2
        for (j = 0; j < EXAMS; j++)
        {
            // if baslangici
            if(highGrade < grades[i][j])
            {
                highGrade = grades[i][j];
            }// if sonu.

        }// dongu2 sonu.

    }// dongu1 sonu.

    return highGrade;
} // maximum fonk sonu.

// average fonk baslangici
double average(const int setOfGrades[] ,size_t tests)
{
    // degisken atamalari
    double sum = 0;

    // for baslangici
    for (size_t i = 0; i < tests; i++)
    {
        sum += setOfGrades[i];
    } // for sonu.

    return sum/tests;
} //average fonk sonu.


void printArray(int grades[][EXAMS], size_t pupils ,size_t tests)
{
    size_t i; // ogrenci sayaci
    size_t j; // not sayaci

    // sutun basliklarinin yazdirilmasi
    printf("%17s%s"," ","[0]  [1]  [2]  [3]");

    // notlarin cizelge biciminde yazdirilmasi
    for (i = 0; i < pupils; i++)
    {
        // satir etiketlerinin yazdirilmasi
        printf("\nstudentGrades[%d] ",i);

        // bir ogrencinin notlarinin yazdirilmasi
        for (j = 0; j < tests; j++)
        {
                printf("%-5d",grades[i][j]);
        } // icteki dongu sonu
    } // distaki dongu sonu
}