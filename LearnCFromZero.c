
//ESCAPE SEQUENCES

/*
\a	Alarm or Beep
\b	Backspace
\f	Form Feed
\n	New Line
\r	Carriage Return
\t	Tab (Horizontal)
\v	Vertical Tab
\\	Backslash
\'	Single Quote
\"	Double Quote
\?	Question Mark
\nnn	octal number
\xhh	hexadecimal number
\0	Null
*/


// DETAILS

// %f/d/c/s vb den once % konacaksa 3 tane % kullanilir.
// ex : %%%d , 5 -> %5 (output)


//DATA TYPES

/*

short int 
 	2 
 	-32,768 to 32,767 
 	%hd 
 
unsigned short int 
 	2 
 	0 to 65,535 
 	%hu 
 
unsigned int 
 	4 
 	0 to 4,294,967,295 
 	%u 
 
int 
 	4 
 	-2,147,483,648 to 2,147,483,647 
 	%d 
 
long int 
 	4 
 	-2,147,483,648 to 2,147,483,647 
 	%ld 
 
unsigned long int 
 	4 
 	0 to 4,294,967,295 
 	%lu 
 
long long int 
 	8 
 	-(2^63) to (2^63)-1 
 	%lld 
 
unsigned long long int 
 	8 
 	0 to 18,446,744,073,709,551,615 
 	%llu 
 
signed char 
 	1 
 	-128 to 127 
 	%c 
 
unsigned char 
 	1 
 	0 to 255 
 	%c 
 
float 
 	4 
 	1.2E-38 to 3.4E+38	%f 
 
double 
 	8 
 	1.7E-308 to 1.7E+308	%lf 
 
long double 
 	16 
 	3.4E-4932 to 1.1E+4932	%Lf 
 


*/


	//function without parameter with void term.
	/*
	void write_name() {
		printf("Ali Cemil");
	}
	*/
	
	//function with parameters
	/*
	void SayHello(char name[],char place[],int AccomodationTime) { // BUNLAR PARAMETRELERDIR
		printf("Merhaba %s \n",name);
		printf("%s Konaklama yerimize hos geldiniz...\n",place);
		printf("Burada Konaklama sureniz %d gundur\n",AccomodationTime);		
		printf("Iyi istirahatler...\n");
	}
	*/
	
	//TERNARY OPERATORLU FONK.
	/*int FindOlderPerson(int year1,int year2){
		if(year1 != year2){
			return (year1>year2) ? year2:year1 ;
		}
		else {
			return 0;
		}
	}
	*/
	
//void SayHello(char[],char[]); FONK PROTOTIP BELIRT
	//ESCAPE OPERATORS
	/*
	float y = 6.87 ;
	printf("aradiginiz deger :%%%6.2f\n",5.67);
	
	printf("merhaba\\n");
	
	printf("%10.2f\n",y);//soldan on bos birak ve floatun noktadan sonraki 2 degerini goster.
	
	printf("%-10.2fadjadjaj\n",y);//sagdan on bosluk ve (...)
	
	const int x = 7; //demek ki x=7 degistirilemez.
	printf("%d\n",x);
	
	printf("%.3f",(float)10/6); //float sonucu almak icin
	
	int mod = 10 % 8 ;
	printf("\n%d",mod);
	
	int art = 7;
	int azal = 7 ;
	art++;
	azal--;
	printf("\nartti:%d\nazaldi:%d",art,azal);
	*/
	
	//ASSIGNMENT OPERATORS
	/*
	int AO=5;//assignment operator
	printf("\nAO=%d",AO);
	AO += 1 ;
	AO -= 2 ;
	AO *= 3 ;
	AO /= 6 ;
	AO %= 2 ;
	printf("\nASSIGNMENT OPERATOR MADE AO = %d",AO);
	*/
	
	//AO = 0 !
	/*
	1)AO = 6
	2)AO = 4
	3)AO = 12
	4)AO = 2
	5)AO= 0
	*/ 
	
	//INPUT FONKSIYONLARI
	/*
	char name[25];
	int age ;
	printf("\nAdin ne:");
	fgets(name,25,stdin);
	name[strlen(name)-1]='\0';
	printf("\nkac yasindasin:");
	scanf("%d",&age);
	printf("\nMerhaba %s hos geldin... %d yasindasin",name,age);
	*/
	
	//DOUBLE karekok,kuvvet,mutlakdeger,log,trigonometri
	/*
	double A=sqrt(16);
	double B=pow(16,2);
	double C=fabs(-16); // mutlak deger
	double D=log(5);
	const double PI =3.14159265359;
	double E=sin(PI/4);//radyan cinsinden degerler fonk icine yazilir
	double F=cos(PI*2);//radyan cinsinden degerler fonk icine yazilir
	double G=tan(PI);//radyan cinsinden degerler fonk icine yazilir
	*/
	
	//INT yuvarlama,yukari,asagi
	/*
	int H=round(2.7);
	int I=ceil(2.8);
	int J=floor(2.8);
	printf("\n%lf-%lf-%lf-%lf-%lf-%lf-%lf-%d-%d-%d-",A,B,C,D,E,F,G,H,I,J);
	*/
	
	// COS TEOREM
	/*
	double A,B,C,ANGLE; 
	const double PI = 3.14159265359;
	printf("\tCOS THEOREM \n\n");
	printf("Ilk kenari giriniz :");
	scanf("%lf",&A);
	printf("Ikinci kenari giriniz:");
	scanf("%lf",&B);
	printf("Aradaki aciyi giriniz(derece):");
	scanf("%lf",&ANGLE);
	double PIANGLE=ANGLE/180*PI;
	double COS=cos(PIANGLE);
	double Csquare=A*A+B*B-2*A*B*COS;
	C=sqrt(Csquare);
	printf("%lf",C);
	*/
	
	// if  else-if  else  ifadelerinde once if sonra teker teker else-ifler en son else kontrol edlilir.
	
	//SWITCH-CASE
	/*
	int grade;
	printf("Notunuzu giriniz(0-100):");
	scanf("%d",&grade);
	switch(grade){
		
		case 100:
			printf("basarili");
			
			break;
			
		
		default :
			printf("daha cok calis yarak");
			
			break;
		
	}
	*/
	
	//tolower fonksiyonu
	/*
	char a = tolower('A');
	printf("%c",a);
	*/
	
	//toupper fonksiyonu
	/*
	char A = toupper('a');
	printf("%c",A);
	*/
	
	// if ve switch-case ile hesap makinesi
	/*
	
	char operator;
	double num1,num2;
	double result;
	printf("\tHesap makinenize hos geldiniz...\nLutfen yapmak istediginiz islemi dogru sekilde yaziniz:\n\'+\'\n\'-\'\n\'*\'\n\'/\'\n:");
	scanf("%c",&operator);
	if(operator =='+' || operator =='-' || operator =='*' || operator =='/'){
		printf("\nLutfen ilk sayiyi giriniz:");
		scanf("%lf",&num1);
		printf("\nLutfen ikinci sayiyi giriniz:");
		scanf("%lf",&num2);
		switch(operator){
			case '+':
				result = num1 + num2 ;
				printf("\n\tSonuc:%8.2lf",result);
				break;				
			case '-':
				result = num1 - num2 ;
				printf("\n\tSonuc:%8.2lf",result);
				break;	
			case '*':
				result = num1 * num2 ;
				printf("\n\tSonuc:%8.2lf",result);
				break;
			case '/':
				result = num1 / num2 ;
				printf("\n\tSonuc:%8.2lf",result);
				break;
			default:
			
				break;	
		}
		
	}
	else {
		printf("\nLutfen programi yeniden calisrtirip gecerli bir operator seciniz...");
	}
	
	*/
	// AND && OPERATOR
	/*
	float temp=9 ;
	bool sun = true ;
	if(temp >=18 && sun && temp<=30){
		printf("Hava durumu gayet iyi gorunuyor...gunesli ve acik");
		
	}
	else if(temp>30){
		printf("Hava sicak");
		
	}
	else if(temp<0) {
		printf("Hava soguk");
		
	}
	else if (temp >=18 && sun==false && temp<=30){
	printf("gunes olmamasina ragmen hava durumu gayet iyi gorunuyor");
		
	}
	else {
		printf("soguk bir hava...gunesli oldugu icin sanslisiniz...");
		
	}
	*/
	
	// OR || OPERATOR
	/*
	bool a=true;
	if(a || false) {
		printf("a true");
	}
	else {
		printf(" a false");
	}
	*/
	
	// NOT ! OPERATOR'S USAGE WITH SWICTH-CASE BLOCKS.
	/*
	bool money = false ;
	switch(!money){ //parasizlik
		case true :
			printf("babadan para al got");
			break;
		default:
			printf("paran var dikkatli harca got");
			break;	
	}
	*/
	//function without parameter with void term.	
	//write_name();  //calls the function..
	
	//PARAMETERS AND ARGUMENTS
	/*
	SayHello("ALI CEMIL","IBB YURT",10); //BUNLAR ARGUMANLARDIR...
	SayHello("Sila Azazi","Alicemilin Kalbi",456452155);
	*/
	
	//TERNARY OPERATOR : BIR DEGERI DONDURURKEN IF-ELSE YERINE KULLANILACAK KISA YOL
	//(kosul) ? dogruysa dondurulecek deger : yanlissa dondurulecek deger.
	
	//Ternary Operator Usage
	//printf("buyuk olaniniz : %d",FindOlderPerson(2004,2005));
	
	//SayHello("Ali","IBB BAGCILAR YURT"); FONK PROTOTIP CAGIR
	
	//while dongusu = kosulu kontrol eder , dogruysa kod blogunu calistirmaya devam eder
	//For dongusu = degisken taninmla.kosul yaz.artir/azalt/bol....
	//do while dongusu = once yap.sonra kosulu kontrol et

	//STRING FONKSIYONLARINI DENEYECEGİZ...
	
	/*  1) strlwr(degisken); string lower
	char kelime[10] = "AbGTqN";
	strlwr(kelime);    "strlwr" fonksiyonu her harfini kucultur degiskenin...
	*FONK ICINE DEGISKEN YAZILIR
	printf("eski form = AbGTqN\nYeni form = %s",kelime);
	*/
	/*  2) strupr(degisken); string upper
	char kelime[10] = "AbGTqN";
	strupr(kelime);    "strupr" fonksiyonu her harfini buyutur degiskenin...
	printf("eski form = AbGTqN\nYeni form = %s",kelime);
	*/
	/*  3) strcat(ad1,ad2); string concentration
	char ad1[4]="Ali";
	char ad2[6]="Cemil";
	strcat(ad1,ad2);    "strcat" fonksiyonu iki stringi birlestirir.
	int karakter=strlen(ad1);
	printf("birlestirme:%s\nKarakter sayisi %d",ad1,karakter);
	*/
	/*  4) strncat(ad1,ad2,sayi); string concentration
	char ad1[4]="Ali";
	char ad2[6]="Cemil";
	strncat(ad1,ad2,3);    "strcat" fonksiyonu ilk stringe ikincisinin belirli sayida karakterini ekler...
	printf("%s yazisi strncat() fonk ile olusturulmustur...",ad1);
	*/
	/*  5) strcpy(ad1,ad2); string copy
	char ad1[4]="Ali";
	char ad2[6]="Cemil";
	strcpy(ad1,ad2);    "strcpy" fonksiyonu ad2'yi ad1'e kopyaladi...
	printf("ilk kelime = \"Ali\" idi strcpy(); ile degistirilmis hali : %s",ad1);
	*/
	/*  6) strncpy(ad1,ad2,sayi) string copy
	char ad1[4]="Ali";
	char ad2[6]="Cemil";
	strncpy(ad1,ad2,2);    "strncpy" fonksiyonu ilk iki ad2 karakterini ad1 in ilk iki karakteri yapiyor...digerlerine diger karakterlere dokunmuyor...
	printf("ilk hali : \"Ali\" strncpy(ad1,ad2,2) fonk etkisi: %s",ad1);
	*/
	/*  7) strset(ad1,'karakter'); string set
	char ad1[4]="Ali";
	strset(ad1,'?'); //ad1'in her karakteri '?' yapildi...
	printf("ilk:Ali strset() etkisi:%s",ad1);	
	*/
	/*  8) strnset(ad1,'karakter',sayi); string set
	char ad1[10]="AliCemil";
	strnset(ad1,'*',4);    "strnset" fonksiyonu ad1'in ilk 4 karakterini '*' yapti...gerisine dokunmadi...
	printf("ilk hal:AliCemil  ikinci:%s",ad1);
	*/
	/*  9) strrev(Ad); string reverse
	char Ad[]="AliCemil";
	strrev(Ad);    "strrev" fonksiyonu stringi ters çevirir...
	printf("Ilk Hali : AliCemil\nIkinci Hali : %s",Ad);
	*/
	/*  10) strlen(Ad) string length
	char Ad[]="AliCemil";
	int Sayi = strlen(Ad);    "strlen" fonksiyonu int bir deger dondurur...
	printf("%s ismi %d karakterlidir...",Ad,Sayi);
	*/
	/*  11) strcmp(ad1,ad2) string compare
	char Ad1 [] = "Ali";
	char Ad2 [] = "Cemil";
	int compare = strcmp(Ad1,Ad2); //Aynilarsa 0 degeri donecek...
	printf("%d",compare);
	*/
	/*  12) strncmp(Ad1,Ad2); string compare
	char Ad1 [] = "Ali";
	char Ad2 [] = "Alper";
	int n = 1 ;
	int compare = strncmp(Ad1,Ad2,n); //ilk n degerleri ayniysa 0 degeri donecek...
	printf("%d",compare);
	*/
	//Son iki tanede buyuk-kucuk harf onemliydi...Bundan sonraki iki tanede onemsiz
	/*  13) stricmp(Ad1,Ad2); string compare
	char Ad1 [] = "Ali";
	char Ad2 [] = "ali";
	int compare = stricmp(Ad1,Ad2); //buyuk kucuk harf fark etmeden ayni alir ...
	printf("%d",compare);
	*/
	/*  14) strnicmp(Ad1,Ad2); string compare
	char Ad1 [] = "Ali";
	char Ad2 [] = "alj";
	int n = 2;
	int compare = strnicmp(Ad1,Ad2,n); //buyuk kucuk harf fark etmeden ayni alir ... Ilk n harfi kiyaslar
	printf("%d",compare);
	*/
	
	/* FOR DONGUSU
	int a=0;
		for (int i = 1; i <= pow(2,15); i*=2)
		{
			printf("2\'nin %d\'ninci kuvveti = %d\n",a,i);
			a+=1;
		}
	*/	

	/* WHILE DONGUSU
	char ad[20];
	printf("Isminizi giriniz : \n");
	fgets(ad,20,stdin);
	ad[strlen(ad)-1]='\0';
	while(strlen(ad)==0){
		printf("Isim gir got\n...");
		fgets(ad,20,stdin);
		ad[strlen(ad)-1]='\0';
	}
	printf("\nMerhaba %s hos geldin",ad);
	*/

	/* DO WHILE DONGUSU... ONCE YAP SONRA KOSUL SAGLANIYORSA DEVAM ET...
	int surprise=14;
	int sayi;
	do
	{
		printf("\nAklimdan tuttugum sayiyi tahmin et!\nIpucuu -> (0-20) araligindan bir sayi giriniz : \a");
		scanf("%d",&sayi);	
	} while (sayi!=surprise);
	printf("\nTebriklerrr dogru sayi %d idi",sayi);
	*/
	
	// Continue : Kodun belirli bir bolumunu atlar ve dongunun sonraki tekrarına gecer ...	
	// Break : Donguden veya switch yapisindan cıkar...
	
	/* ARRAYS
	int points[]={100,100,100,100,90,96,100,100,96}; 
	for (int i = 0; i < sizeof(points)/sizeof(points[0]); i++)
	{
		printf("%d.notunuz:%d\n",i+1,points[i]);
	
	}
	*/
	
	/* 2D ARRAYS ILE NOT GOSTERME UYG.
												Isa Acml Mlke
	int GofIandACandM[3][4]={{85,96,80,92},{100,100,100,100},{96,92,88,80}};
	for (int i = 0;  i < sizeof(GofIandACandM)/sizeof(GofIandACandM[0]); i++)
	{				3 TANE 4LUK ARRAYİN SİZE / BIR TANE 4LUK ARRAYİN SİZE = 3 (3X/X=3)
		for (int j = 0; j < sizeof(GofIandACandM[0]) / sizeof(GofIandACandM[0][0]); j++)
		{				 BIR TANE 4LUK ARRAYİN SİZE / BİR TANE VERİNİN SİZE = 4 (4X/4=4)
			if (i==2 && j==0)
			{
				printf("Melike\t\t");
			}
			else if (i==0 && j==0)
			{
				printf("Isa\t\t");
			}
			else if (i==1 && j==0)
			{
				printf("Ali Cemil\t");
			}
			
			printf("%d\t",GofIandACandM[i][j]);
		}
		printf("\n");
	}
	*/
	
	/*		 STRING DIZILERI...
			HER KELIME 10 HARFTAN KISA OLACAK
	char SchoolDays[][10] = {"Pazartesi","Carsamba","Cuma"};
	strcpy(SchoolDays[1],"Sali"); YALNİZCA 1 TANE KOSELI PARANTEZ KULLANILIYOR
	for (int i = 0; i < sizeof(SchoolDays)/sizeof(SchoolDays[0]); i++)
	{
		printf("%s\n",SchoolDays[i]);
	}
	*/	
	
	/* Charlarda karakter degisimi
	char a='A';
	char b='B';
	printf("Ilk a=\'%c\'\tIlk b=\'%c\'\n",a,b);
	char temp;
	temp=a;
	a=b;
	b=temp;
	printf("Ikinci a=\'%c\'\tIkinci b=\'%c\'\n",a,b);
	*/
	/*	Stringlerde karakter degisimi
	char IlkAd[6]="Ali";
	char IkinciAd[6]="Cemil";
	char Temp[6];
	printf("Birinci ad=\'%s\'\tIkinci ad=\'%s\'\n",IlkAd,IkinciAd);
	strcpy(Temp,IlkAd);
	strcpy(IlkAd,IkinciAd);
	strcpy(IkinciAd,Temp);
	printf("Degistirilmis Birinci ad=\'%s\'\tDegistirilmis Ikinci ad=\'%s\'\n",IlkAd,IkinciAd);
	*/
	
	//Int array icindeki sayilari siraliyor...
/*	int QuantityOfNumbers;
	printf("\nKac tane sayinin siralanmasini istiyorsunuz:");
	scanf("%d",&QuantityOfNumbers);
	int Numbers[QuantityOfNumbers]; // yapilmasi gereken tek sey Numbers[15]teki gibi icindekiler sayisini dogru yazmak
	for (int x = 0; x < QuantityOfNumbers; x++)
	{
		printf("\n%d:",x+1);
		scanf("%d",&Numbers[x]);
	}
	int AdimSayisi=0; //i=0,1,2,3
	printf("\n%d.adim:",AdimSayisi);
	for (int z = 0; z < sizeof(Numbers)/sizeof(Numbers[0]) ; z++)
	{
		printf("%d,",Numbers[z]);
	}
	printf("\n\nVe algoritma basliyor...\n\n");
	for (int i = 0; i < sizeof(Numbers)/sizeof(Numbers[0])-1; i++)
	{	//j=1,2,3,4
		for (int j=i+1; j <sizeof(Numbers)/sizeof(Numbers[0]); j++) {
			
			if (Numbers[i]<Numbers[j])
			{
				AdimSayisi++;
				int Temp;
				Temp=Numbers[i];
				Numbers[i]=Numbers[j];
				Numbers[j]=Temp;
				printf("%d.adim:",AdimSayisi);
				
				for (int k = 0; k < sizeof(Numbers)/sizeof(Numbers[0]) ; k++)
				{
					printf("%d,",Numbers[k]);
				}
			
			}
			
			else
			{
				AdimSayisi++;
				printf("%d.adim:",AdimSayisi);
				
				for (int k = 0; k < sizeof(Numbers)/sizeof(Numbers[0]) ; k++)
				{
					printf("%d,",Numbers[k]);
				}
			
			}
			printf("\n\n");
		}
	}
	printf("Ve siralama isleminiz basariyla tamamlanmistir...\n\n");
*/

	//i++ ve ++i arasindaki fark
/*	
	int i=0;
	printf("%d\n",i++);	//  once i'yi yazdir , sonra i'yi 1 artir .	OUTPUT = 0 .	i=1.
	printf("%d\n",++i);	//  once i'yi 1 artir , sonra i'yi yazdir .	OUTPUT = 2 .	i=2.
*/

	// sayi sistemleri
/*	int x = 47;		// decimal(10luk)
	int y = 0b00101111; 	// binary(2lik)
	int z = 0x2f;	 // hexadecimal(16lik)
	printf("%d\n%d\n%d",x,y,z);
*/

	// math.h kutuphanesinin yardimiyla pi sayisini M_PI olarak kullanabiliriz .
/*
	printf("%.50lf",M_PI); //ilk 16 basamagini kullanmamiza olanak saglar .
*/

	//{'M','e','r','h','a','b','a','\n','D','u','n','y','a'}
/*
	char chr='Q';
	char str[]="Merhaba\nDunya";
	printf("%lu",sizeof(str)); // sizeof ta %lu kullanilir....
*/

	//	sizeof kaplanan yer strlen string uzunlugu verir.

	//strcmp fonk string uzunlugu karsilastirmasinda kullanilabilir...
/*	char kusur1[5]="xxxxx";
	char kusur2[4]="xxxx";
	if (strcmp(kusur2,kusur1)<0)
	{
		printf("2. oyuncu daha kusurlu");
	}
	else
	{
		printf("Birinci oyuncu daha kusurlu");
	}
*/	
	
	// 10 Tane ogrencinin siniftan gecip gecmedigine bakip buna gore egitmeni tebrik eden program
/*
unsigned int sum=0;
	unsigned int student=1;
	int note=1;	
	while (student<=10 && (note==1 || note==2))
	{
		puts("Please write 1 or 2 (1 for pass , 2 for fail)");
		scanf("%d",&note);
		sum+=note;
		student++;
	}
	if (sum==11 || sum==10)
	{
		printf("\nBravo to the educator...");
	}
	else
	{
		printf("\neducator failed...");
	}
*/

	// A program which categorate children according to their ages...
/*
	unsigned int numOfChildren_int; // tels us how many children they have in their clinic...
	unsigned int counter1_int=0; // helps us to get the ages...
	unsigned int counter2_int=0; // helps us to compare the ages with 20...
	unsigned int older_20=0; // helps us to keep the data of people who are older than 20
	unsigned int younger_20=0; // helps us to keep the data of people wo are younger than 29...
	puts("how much children do you have in your clinic...");
	scanf("%d",&numOfChildren_int); // get the data of how much children they have...
	
	int ages_cluster[numOfChildren_int]; // now , we have a cluster to keep the data of ages...
	
	while (counter1_int<numOfChildren_int) // we get the data of ages from the user.
	{
		printf("Please give the %d. age\n",counter1_int+1);
		scanf("%d",&ages_cluster[counter1_int]);
		counter1_int++;
	}// end of while

	while (counter2_int<numOfChildren_int) // we compare the ages with 20 and keep the data of people who are older than 20 and younger than 20.
	{
		if (ages_cluster[counter2_int]<20)
		{
			younger_20++; // if an age is smaller than twenty, then we add 1 to the value of younger_20 variable...
		} // end of if
		else
		{
			older_20++; // if an age is older than twenty, then we add 1 to the value of older_20 variable...
		}// end of else
		counter2_int++; // then we look to the other age ...
	} // end of while
	printf("\nYou have %d children older than 20...\nYou have %d children younger than 20...",older_20,younger_20);
*/
	// A program which decides if two numbers are relatively prime or not
/*
	unsigned int divider_int=2;
	int mod1,mod2; // mod1 for bigger one , mod2 for smaller one.
	int biggerNumber_int,smallerNumber_int;
	bool check = false ; // now it says that there is no any common divider.
	puts("please enter the bigger number");
	scanf("%d",&biggerNumber_int);
	puts("please enter the smaller number");
	scanf("%d",&smallerNumber_int);
	while (divider_int<=smallerNumber_int)
	{
		mod1 = biggerNumber_int % divider_int ;
		mod2 = smallerNumber_int % divider_int ;
		if (mod1==0 && mod2==0)
		{
			puts("The numbers are not relatively prime");
			check = true ;
			break;
		}
		divider_int++;
	}
	if (check == false)
	{
		puts("The numbers are relatively prime...");
	}
*/	
	// Iki sayinin ebobunu bulan bir program yazilacak...
/*	
	int biggerNumber_int,smallerNumber_int;
	int check_int=2;
	int mod1,mod2;
	int ebob=0;
	puts("please enter the bigger number");
	scanf("%d",&biggerNumber_int);
	puts("please enter the smaller number");
	scanf("%d",&smallerNumber_int);
	while (check_int<=smallerNumber_int)
	{
		mod1 = biggerNumber_int % check_int ;
		mod2 = smallerNumber_int % check_int ;
		if(mod1==0 && mod2==0){
			ebob=check_int;
		}
		check_int++;
	}
	ebob==0 ? printf("\nGirdiginiz sayilar aralarinda asal ebob=1") : printf("\nGirilen sayilarin ebobu=%d",ebob);
	ebob==0 ? printf("\nSayilarin ekoku:%d",biggerNumber_int*smallerNumber_int) : printf("\nSayilarin ekoku:%d",biggerNumber_int*smallerNumber_int/ebob);
*/

	//Uzerinde calisacagiz . . .
/*	int sayi;
	printf("Lutfen bir sayi giriniz..");
	scanf("%d",&sayi);
	int sayac=1;
	int mod;
	int bolenSayisi=0;
	while (sayac <= sayi)
	{
		mod = sayi % sayac;
		if (mod == 0)
		{
			bolenSayisi++;
		}
		sayac++;
	}
	int bolenler[bolenSayisi];
	sayac = 1;
	int x = 0 ;
	while (sayac <= sayi)
	{
		mod = sayi % sayac;
		if (mod == 0)
		{
			bolenler[x]=sayac;
			x++;
		}
		sayac++;
	}
	x--;
	printf("x %d\tsayi %d\tsayac %d\tbolen sayisi %d\t",sayi,sayac,bolenSayisi);
*/	

	// struct kullanimi
/* ABOVE MAIN

struct order
{
	bool burger;
	bool patatesKizartmasi;
	bool soganHalkasi;
	bool parca;
	bool icecek;
};

*/
/* UNDER MAIN
struct order alicemil;
	puts("Do you want a burger (enter 1 for yes 0 for no)");
	scanf("%d",&alicemil.burger);
	puts("Do you want a fried potatoes (enter 1 for yes 0 for no)");
	scanf("%d",&alicemil.patatesKizartmasi);
	puts("Do you want a fried onion (enter 1 for yes 0 for no)");
	scanf("%d",&alicemil.soganHalkasi);
	puts("Do you want a piece of chicken (enter 1 for yes 0 for no)");
	scanf("%d",&alicemil.parca);
	puts("Do you want a cola (enter 1 for yes 0 for no)");
	scanf("%d",&alicemil.icecek);
	unsigned int sum = 0;
	if(alicemil.burger==1)
	sum+=80;
	if(alicemil.icecek==1)
	sum+=25;
	if(alicemil.parca==1)
	sum+=30;
	if(alicemil.patatesKizartmasi==1)
	sum+=50;
	if(alicemil.soganHalkasi==1)
	sum+=12;
	printf("\nSiparisiniz olusturuldu...odeyeceginiz tutar :\t%d",sum);
*/

	// APPOINTERS
/*
int x;
	int * appointerx;
	appointerx = &x;
	printf("%d\t%d\t%d\t%d",&appointerx,appointerx,*appointerx,&x);
*/

//BUTUN BOLENLERI BULAN PROGRAM...
/*
int i , sayi;
	printf("Please enter a number then we will find the dividers of the number...");
	scanf("%d",&sayi);
	for ( i = 1; i <= sayi; i++)
	{
		if(sayi % i == 0){
			printf("%d,",i);
		}
	}
	
*/
#include <stdio.h>
#include <string.h> //string verisi alirken kullanilan name[strlen(name)-1]='\0'; 
#include <math.h> //matematiksel islemler olan sin,cos,tan,round,ceil,floor,sqrt,fabs,pow,log
#include <ctype.h> //buyuk-kucuk harf duyarliligi toupper - tolower fonksiyonlari
#include<stdbool.h> // bool (true/false) dahil edildi .
#include<stdlib.h>
int main() {
	/*
	int i,j;
	for ( i = 1; i < 10; i++)
	{
		for ( j = 1; j < 10; j++)
		{
			printf("%d * %d = %d   \t",j,i,j*i);
		}
		printf("\n");
	}
	*/

// WHILE VE FOR DONGULERI ICIN CONTINUE KOMUTU ARASINDAKI FARKI BIL ...

	return 0;
}
/* FONK PROTOTIP ICIN TANIMLA
void SayHello(char Name[],char Place[])
{
	printf("Merhaba %s , %s konaklama yerine hos geldin",Name,Place);

}
*/