#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int dogruluk_kontrolu();

int main(){	
printf("        -----------------------\n");
printf("        ---###-----------###---\n");
printf("        ---###----###----###---\n");
printf("        ---###---#---#---###---\n");
printf("        ---#####--###----#####-\n");
printf("        -----------------------\n");
	FILE *dosya,*dosya2;
    dosya = fopen("C:\\Users\\esay2\\Desktop\\E\\Lol1.txt", "r");
    dosya2= fopen("C:\\Users\\esay2\\Desktop\\E\\Lol2.txt", "r");
	srand(time(0));//rand() %100;
    int puan=0;
    int cevap=0;
    int secim=0;
    int bolge;
    int i;
    int sayac = 0;
    char satir[100];
    int sayi=0;
     /* bu kodda scanf'in olduðu if else yapýlarý bir fonksiyona dönüþtürülebilirdi bu sayede daha az kod satýrý olmuþ olurdu ama yetismeyecegi
  için yapmadýk ama aklýmda*/
  srand(time(0));
  // 0 ile 20 arasýndaki tüm sayýlarý tutan bir dizi oluþturur
  int numbers[21] = {0};// dizinin bütün elamanlarý 0'a eþitlendi
     printf("Bilgilendirme:Lutfen sorulari 1-4 arasi bir rakam girerek cevaplayiniz ve Turkce karakter kullanmayiniz.\n"); 
    printf("Hangi oyuna girmek istersiniz?\n");
    printf("1)Hikaye sorulari\n2)Replik bilmece\n3)Cikis\n");
    sayi = dogruluk_kontrolu();
    secim=sayi;
	 sleep(1.5);system("cls");
	if(secim==1){
	printf("1)Hangi bolgeden soru istiyorsunuz?\n");
	printf("Not:Bolge Sorularinda karakterler Map of Runeterra haritasinda hangi bolgede gozukuyorsa orasi baz alinmistir\n");
	printf("1)Ionia\n2)Demacia\n3)Rasgele\n4)Cikis\n");
	sayi = dogruluk_kontrolu();
    bolge=sayi;
	 sleep(1.5);system("cls");
    switch(bolge){
        case 1: 
         while (fgets(satir, 100, dosya) != NULL && sayac<5) {//
        printf("%s", satir);
        sayac++;
    }
    sayi = dogruluk_kontrolu();
    cevap=sayi;
        if(cevap == 2 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Lee sin!\n");  
        }
       sleep(1.5);system("cls");
          while (fgets(satir, 100, dosya) != NULL && sayac<10) {
        printf("%s", satir);
        sayac++;
    }
    sayi = dogruluk_kontrolu();
    cevap=sayi;
         if(cevap == 2 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
        printf("Yanlis cevap verdiniz!\n");
        	printf("Dogru cevap: Cikolata!\n");
		}
		sleep(1.5);system("cls");
         while (fgets(satir, 100, dosya) != NULL && sayac<15) {//
        printf("%s", satir);
        sayac++;
    }
    sayi = dogruluk_kontrolu();
    cevap=sayi;
        if(cevap == 3 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Alacakranligin gozu!\n");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<20) {//
        printf("%s", satir);
        sayac++;
    }
    sayi = dogruluk_kontrolu();
    cevap=sayi;
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Master yi!\n");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<25) {//
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Suflor!\n");
        }
        sleep(1.5);system("cls");
       while (fgets(satir, 100, dosya) != NULL && sayac<30) {//
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: itaat!\n");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<35) {//
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Daisy!");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<40) {//
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
         if(cevap == 3 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Riven!\n");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<45) {//
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 4 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Brand!\n");
        }
        sleep(1.5);system("cls");
        while (fgets(satir, 100, dosya) != NULL && sayac<50) {//
        printf("%s", satir);
        sayac++;
    }
    fclose(dosya);
        sayi = dogruluk_kontrolu();
        cevap=sayi;
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Noxus!\n");
        }
        sleep(1.5);system("cls");
       printf("****************\n**Puaniniz: %d**\n****************",puan);
       puan=0;
         break;
         //Demacia sorularý burda baþlýyor
          sleep(1.5);system("cls");
        case 2:while (fgets(satir, 100, dosya2) != NULL && sayac<5) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Noxus\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<10) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==4){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Katarina\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<15) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==3){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Lux\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<20) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Sion\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<25) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==1){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Kayle-Morgana\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<30) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==4){
		printf("++++++++++\nDogru cevap:\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Orion\n++++++++++\n\n");
		
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<35) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==4){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Xin Zhao\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<40) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==1){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Babasini\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<45) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==3){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: 16\n++++++++++\n\n");
	}
	 sleep(1.5);system("cls");
	while (fgets(satir, 100, dosya2) != NULL && sayac<50) {
        printf("%s", satir);
        sayac++;
    }
        sayi = dogruluk_kontrolu();
        cevap=sayi;
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Valor\n++++++++++\n\n");
	}
	printf("****************\n**Puaniniz: %d**\n****************",puan);
	puan=0;
        break;
        case 3://Rasgele sorular burda baþlayor
        for ( i = 0; i < 10; i++) {
    // 0 ile 20 arasýnda rasgele bir sayý üretin
    int random_number = rand() % 21;
    // Eðer random_number daha önce yazdýrýldýysa, bir daha yazdýrma
    if (numbers[random_number] == 1) {
      i--;// i yi eksiltiyorum ki o adýmý tekrarlasýn
	  continue;
    }
    else {
      numbers[random_number] = 1;
    }
// random_number deðerine göre bir mesaj yazdýrýn
    switch (random_number) {
      case 0: sleep(1.5);system("cls");
        printf("Olumsuz hisari kim yapmistir?\n");
       printf("1)le blanc\n2)Mordekaiser\n3)Vladimir\n4)Swain\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        //int check_numeric_input(char* cevap); 
        if(cevap == 2 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
        printf("----------\nYanlis cevap\n----------\n");
        printf("++++++++++\nDogru cevap: Mordekaiser\n++++++++++\n\n");
        }
        break;
      case 1: sleep(1.5);system("cls");
        printf("Hangisi uc kiz kardesten biri degildir?\n");
       printf("1)Lissandra\n2)Serilda\n3)Avarosa\n4)Kalista\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        //int check_numeric_input(char* cevap);
        if(cevap == 4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Kalista\n++++++++++\n\n");
        }
        break;
      case 2: sleep(1.5);system("cls");
       printf("Katarina'nin kardesi kimdir?\n");
       printf("1)le blanc\n2)Talon\n3)Cassiopeia\n4)Samira\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 3){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Cassiopeia\n++++++++++\n\n");
        }
        break;
        case 3: sleep(1.5);system("cls");
       printf("Rumble'in mekasinin ismi nedir?\n");
       printf("1)Tristy\n2)Lullu\n3)Ateseder\n4)Makineli\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Tristy\n++++++++++\n\n");
        }
        break;
      case 4: sleep(1.5);system("cls");
        printf("Swain'in iblisinin adi nedir?\n");
       printf("1)Xear\n2)Raum\n3)Qsare\n4)Aslesh\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 2 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Raum\n++++++++++\n\n");
        }
        break;
      case 5: sleep(1.5);system("cls");
        printf("Nilah'in iblisinin adi nedir?\n");
       printf("1)Ashlesh\n2)Serv\n3)Crats\n4)Trosy\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Ashlesh\n++++++++++\n\n");
        }
        break;
        case 6: sleep(1.5);system("cls");
        	printf("Qiyananin silahinin adi nedir?\n");
       printf("1)Halka bicak\n2)Ohmlatl\n3)Elementer\n4)Yunhal\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Ohmlath\n++++++++++\n\n");
        }
        break;
        case 7: sleep(1.5);system("cls");
        	printf("Trundle'a sopasini kim vermistir?\n");
       printf("1)Lissandra\n2)Sejuani\n3)Ornn\n4)Olaf\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap == 1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Lissandra\n++++++++++\n\n");
        }
        break;
        case 8: sleep(1.5);system("cls");
        	printf("Trundle'in sopasinin ismi nedir?\n");
       printf("1)TarumarEdici\n2)Troltor\n3)Kemik kiran\n4)Kemik donduran\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Kemik Donduran\n++++++++++\n\n");
        }
        break;
        case 9: sleep(1.5);system("cls");
        	printf("Sion kacinci jarvani oldurmustur?\n");
       printf("1)JarvanI\n2)JarvanII\n3)JarvanIII\n4)JarvanIV\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Jarvan I\n++++++++++\n\n");
        }
        break;
        case 10: sleep(1.5);system("cls");
        	printf("Pantheon'un gercek ismi nedir?\n");
       printf("1)Kegan Rodhe\n2)Milas\n3)Atreus\n4)Thorkel\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        //int check_numeric_input(char* cevap);//burdaaaa
        if(cevap ==3){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Atreus\n++++++++++\n\n");
        }
        break;
        case 11: sleep(1.5);system("cls");
        	printf("Aphelios'un kardesinin ismi nedir?\n");
       printf("1)Alune\n2)Diana\n3)Leona\n4)Zoe\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Alune\n++++++++++\n\n");
        }
        break;
        case 12: sleep(1.5);system("cls");
        	printf("Jarvan4'u olumden kim kurtarmistir?\n");
       printf("1)Garen\n2)Xin zhao\n3)Fiora\n4)Shyvana\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Shyvana\n++++++++++\n\n");
        }
        break;
        case 13: sleep(1.5);system("cls");
        	printf("Galio'yu kim yapmistir?\n");
       printf("1)Duran\n2)Mahel\n3)Darkwill\n4)Ryze\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Duran\n++++++++++\n\n");
        }
        break;
         case 14: sleep(1.5);system("cls");
        	printf("Nilah nerelidir?\n");
       printf("1)Bilgewater\n2)Golge adalar\n3)Shurima\n4)Demacia\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Bilgewater\n++++++++++\n\n");
        }
        break;
         case 15: sleep(1.5);system("cls");
        	printf("Sona nerelidir?\n");
       printf("1)Ionia\n2)Ixtal\n3)Freljord\n4)Demacia\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Demacia\n++++++++++\n\n");
        }
        break;
         case 16: sleep(1.5);system("cls");
        	printf("Udyr nerelidir?\n");
       printf("1)Targon\n2)Freljord\n3)Ionia\n4)Shurima\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Freljord\n++++++++++\n\n");
        }
        break;
         case 17: sleep(1.5);system("cls");
        	printf("Zac nerelidir?\n");
       printf("1)Piltover\n2)Zaun\n3)Bigewater\n4)Noxus\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Zaun\n++++++++++\n\n");
        }
        break;
         case 18: sleep(1.5);system("cls");
        	printf("Ezreal nerelidir?\n");
       printf("1)Piltover\n2)Shurima\n3)Demacia\n4)Noxus\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Piltover\n++++++++++\n\n");
        }
        break;
         case 19: sleep(1.5);system("cls");
        	printf("Lucian nerelidir?\n");
       printf("1)Bilgewater\n2)Golge adalar\n3)Demacia\n4)Ionia\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==3){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Demacia\n++++++++++\n\n");
        }
        break;
         case 20: sleep(1.5);system("cls");
        	printf("Darkin savasini bitiren zoe'nin asl adi nedir\n");
       printf("1)Lauren\n2)Seryl\n3)Elenor\n4)Maisha\n");
        sayi = dogruluk_kontrolu();
        cevap=sayi;
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Maisha\n++++++++++\n\n");
        }
        break;
      // ...
      default:
        printf("Random number is out of range\n");
    }
  }
   sleep(1.5);system("cls");
  printf("****************\n**Puaniniz: %d**\n****************",puan);
    //buraya kadar
        break;
	case 4:
	printf("Cikis yapmak icin herhangi bir tusa basin.");    
}
}
//2.secimmmmmmmm
else if(secim==2){
	char cevapm[20];
 char b[20] ="katarina";
  sleep(1.5);system("cls");
printf("soru1:Neden,cunku yapabiliyorum!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapm);//gets(cevapm);
	 if( strcmp(cevapm,b)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Noxus'lu bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orta koridor\n",i);
	}

	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		//printf("Kalan deneme hakkin:%d\n",i);
		printf("Dogru cevap:Katarina\n");
		printf("--------------------\n");
	}
}
printf("--------------------\n");
 char cevapq[20];
 char c[20] ="pyke";
  sleep(1.5);system("cls");
printf("soru2:Cok calis,genc ol oylesi daha iyi!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapq);
	 if( strcmp(cevapq,c)==0){
		printf("Dogru cevap\n");
		puan+=10;
		printf("--------------------\n");
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Bilgewater'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Alt koridor\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Pyke\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
 char cevapw[20];
 char a[20] ="jhin";
 sleep(1.5);system("cls");
printf("soru3:Bana deli diyorlar,sanatci dedigin deli olur!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapw);
	 if( strcmp(cevapw,a)==0){
		printf("Dogru cevap\n");
			printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Ionia'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Alt koridor\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Jhin\n");
	}
	printf("\n");
	}
	printf("\n");
printf("--------------------\n");
char cevape[20];
 char d[20] ="ivern";
 sleep(1.5);system("cls");
printf("soru4:En sevdigim renk bahar!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevape);
	 if( strcmp(cevape,d)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Ionia'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orman\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:ivern\n");
		printf("--------------------\n");
	}
	}
	printf("\n");
printf("--------------------\n");
char cevapr[20];
 char r[20] ="zed";
 sleep(1.5);system("cls");
printf("soru5:Iki kisinin bildigi sir degildir!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapr);
	 if( strcmp(cevapr,r)==0){
		printf("Dogru cevap\n");
		printf("What was that Faker\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Ionia'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orta koridor\n");
	}
	else if(i==0){
		printf("Yanlis cevap bilemedin\n");
		printf("Dogru cevap:Zed\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
char cevapt[20];
 char t[20] ="yasuo";
 sleep(1.5);system("cls");
printf("soru6:Onur dedigin isminde degil, yuregindedir!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapt);
	 if( strcmp(cevapt,t)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		printf("800k misin be\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	//printf("Ipucu:Ionia'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orta koridor\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Yasuo\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
char cevapy[20];
 char y[20] ="qiyana";
 sleep(1.5);system("cls");
printf("soru7:Yetenek bir element olsaydi,birazini kafalarina atardim!\n****Kimin Repligidir****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapy);
	 if( strcmp(cevapy,y)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Ixtal'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orta koridor\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Qiyana\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
char cevapu[20];
 char u[20] ="ryze";
 sleep(1.5);system("cls");
printf("soru8:Hakiki silah ilimdir!\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapu);
	 if( strcmp(cevapu,u)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Cok olaya þahitlik etmis birisi\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Orta koridor\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Ryze\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
char cevapo[20];
 char o[20] ="nasus";
 sleep(1.5);system("cls");
printf("soru9:Havlasam duyar misiniz sesimi misralarimda?\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapo);
	 if( strcmp(cevapo,o)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Shurima'li bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Shurima'li\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Nasus\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
char cevapp[20];
 char p[20] ="yasuo";
 sleep(1.5);system("cls");
printf("soru10:Adalet dedigin havali bir sozcuk sadece?\n****Kimin repligidir?****\n");
for( i=3;i>0;){
	i--;	
	scanf("%s",&cevapp);;
	 if( strcmp(cevapp,p)==0){
		printf("Dogru cevap\n");
		printf("--------------------\n");
		puan+=10;
		break;
	}
            else if(i==2){
            	printf("Yanlis! tekrar dene\n");
            	printf("Kalan deneme hakkin:%d\n",i);
            	printf("Ipucu:Dovuscu bir sampiyon\n");	
				}
			else if(i==1){
		printf("Yanlis! tekrar dene\n");
		printf("Kalan deneme hakkin:%d\n",i);
		printf("Ipucu:Bu sefer yok\n");
	}
	else if(i==0){
		printf("Yalis cevap bilemedin\n");
		printf("Dogru cevap:Yasuo\n");
		printf("--------------------\n");
	}
	}
printf("--------------------\n");
printf("****************\n**Puaniniz: %d**\n****************",puan);
}
else if(secim==3){
	printf("Cikis yapmak icin herhangi bir tusa basin.");
}
else{
	printf("Lutfen gecerli bir secim yapin");
}

return 0;
}
int dogruluk_kontrolu() {
    int sayi;
    while (1) {
    int sonuc = scanf("%d", &sayi);
    if (sonuc == 1) {
        if (sayi >= 1 && sayi <= 4) {
            break;
        }
    }
    printf("Girilen sayi gecersiz. Lutfen tekrar deneyin.\n");
    // Girilen verinin kalanýný temizlemek için birkaç karakter oku
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
}
