#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
	FILE *dosya;
    dosya = fopen("C:\\Users\\esay2\\Desktop\\E\\Lol1.txt", "r");
	srand(time(0));//rand() %100;
    int puan=0;
    int cevap=0;
    int secim=0;
     int bolge;
     int i;
     int sayac = 0;
     char satir[100];
     /* bu kodda scanf'in olduðu if else yapýlarý bir fonksiyona dönüþtürülebilirdi bu sayede daha az kod satýrý olmuþ olurdu ama yetismeyecegi
  için yapmadýk ama aklýmda*/
  srand(time(0));
  // 0 ile 20 arasýndaki tüm sayýlarý tutan bir dizi oluþturur
  int numbers[21] = {0};// dizinin bütün elamanlarý 0'a eþitlendi
     printf("Bilgilendirme:Lutfen sorulari 1-4 arasi bir rakam girerek cevaplayiniz ve Turkce karakter kullanmayiniz.\n"); 
    printf("Hangi oyuna girmek istersiniz?\n");
    printf("1)Hikaye sorulari\n2)Replik bilmece\n3)Cikis\n");
	scanf("%d",&secim);
	if(secim==1){
	printf("1)Hangi bolgeden soru istiyorsunuz?\n");
	printf("Not:Bolge Sorularinda karakterler Map of Runeterra haritasinda hangi bolgede gozukuyorsa orasi baz alinmistir\n");
	printf("1)Ionia\n2)Demacia\n3)Rasgele\n");
	scanf("%d",&bolge);
    switch(bolge){
        case 1: 
         while (fgets(satir, 100, dosya) != NULL && sayac<5) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
        if(cevap == 2 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Lee sin!\n");  
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
          while (fgets(satir, 100, dosya) != NULL && sayac<10) {
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
         if(cevap == 2 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
        printf("Yanlis cevap verdiniz!\n");
        	printf("Dogru cevap: Cikolata!\n");
		}
		printf("\n");
        printf("********************************\n");
        printf("\n");
         while (fgets(satir, 100, dosya) != NULL && sayac<15) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
        if(cevap == 3 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Alacakranligin gozu!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<20) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Master yi!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<25) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Suflor!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
       while (fgets(satir, 100, dosya) != NULL && sayac<30) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: itaat!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<35) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Daisy!");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<40) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
         if(cevap == 3 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Riven!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<45) {//
        printf("%s", satir);
        sayac++;
    }
        scanf("%d",&cevap);
        if(cevap == 4 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Brand!\n");
        }
        printf("\n");
        printf("********************************\n");
        printf("\n");
        while (fgets(satir, 100, dosya) != NULL && sayac<50) {//
        printf("%s", satir);
        sayac++;
    }
    fclose(dosya);
        scanf("%d",&cevap);
         if(cevap == 4 ){
         	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("Yanlis cevap verdiniz!\n");
            printf("Dogru cevap: Noxus!\n");
        }
       printf("%d",puan);
       puan=0;
         break;
         //Demacia sorularý burda baþlýyor
        case 2:printf("1.Soru:Demacia'nin ezeli dusmani kimdir?\n1) Freljord\n2) Noxus\n3) Zaun\n4) Shurima\n\n");
	scanf("%d",&cevap);
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Noxus\n++++++++++\n\n");
	}
	printf("2. Soru: Hangi sampiyon Demaciadan degildir?\n1) Morgana\n2) Kayle\n3) Sylas\n4) Katarina\n\n");
	scanf("%d",&cevap);
	if(cevap==4){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Katarina\n++++++++++\n\n");
	}
	printf("3. Soru: Garen'in kardesi kimdir?\n1) Darius\n2) Fiora\n3) Lux\n4) Riven\n\n");
	scanf("%d",&cevap);
	if(cevap==3){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Lux\n++++++++++\n\n");
	}
	printf("4. Soru: Jarvan I 'i kim oldurmustur?\n1) Buyuculer\n2) Sion\n3) Draven\n4) Sylas\n\n");
	scanf("%d",&cevap);
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Sion\n++++++++++\n\n");
	}
	printf("5. Soru: Aralarindaki savas sonucu babalarinin olumune yol acan kardesler kimdir?\n1) Kayle-Morgana \n2) Yasuo-Yone\n3) Darius-Draven\n4) Jinx-Vi\n\n");
	scanf("%d",&cevap);
	if(cevap==1){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Kayle-Morgana\n++++++++++\n\n");
	}
	printf("6. Soru: Poppy'nin kullandigi silah kime aittir?\n1)Sion\n2)Ornn\n3)Darkwill\n4)Orion\n\n");
	scanf("%d",&cevap);
	if(cevap==4){
		printf("++++++++++\nDogru cevap:\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Orion\n++++++++++\n\n");
		
	}
	printf("7. Soru: Orta koridor ve ormanda oynanan, silah olarak mýzrak kullanan sampiyon kimdir?\n1) Akshan\n2) Fizz\n3) Jarvan IV\n4) Xin Zhao\n\n");
	scanf("%d",&cevap);
	if(cevap==4){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Xin Zhao\n++++++++++\n\n");
	}
	printf("8: Soru: Fiora kimi oldurup laurent ailesinin basina gecmis?\n1) Babasi\n2) Ustasi\n3) Abisi\n4) Annesi\n\n");
	scanf("%d",&cevap);
	if(cevap==1){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Babasini\n++++++++++\n\n");
	}
	printf("9. Soru: Kayle'in kanatlari kacinci seviyede en yuksek formuna ulasir?\n1) 6\n2) 11\n3) 16\n4) 18\n\n");
	scanf("%d",&cevap);
	if(cevap==3){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: 16\n++++++++++\n\n");
	}
	printf("10. Soru: Quinn'in kartalinin ismi nedir?\n1) Willy\n2) Valor\n3) Shaly\n4) Niva\n\n");
	scanf("%d",&cevap);
	if(cevap==2){
		printf("++++++++++\nDogru cevap\n++++++++++\n\n");
		puan+=10;
	}
	else{
		printf("----------\nYanlis cevap\n----------\n");
		printf("++++++++++\nDogru cevap: Valor\n++++++++++\n\n");
	}
	printf("Puaniniz: %d",puan);
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
      case 0:
        printf("Olumsuz hisari kim yapmistir?\n");
       printf("1)le blanc\n2)Mordekaiser\n3)Vladimir\n4)Swain\n");
        scanf("%d",&cevap);
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
      case 1:
        printf("Hangisi uc kiz kardesten biri degildir?\n");
       printf("1)Lissandra\n2)Serilda\n3)Avarosa\n4)Kalista\n");
        scanf("%d",&cevap);
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
      case 2:
       printf("Katarina'nin kardesi kimdir?\n");
       printf("1)le blanc\n2)Talon\n3)Cassiopeia\n4)Samira\n");
        scanf("%d",&cevap);
        if(cevap == 3){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Cassiopeia\n++++++++++\n\n");
        }
        break;
        case 3:
       printf("Rumble'in mekasinin ismi nedir?\n");
       printf("1)Tristy\n2)Lullu\n3)Ateseder\n4)Makineli\n");
        scanf("%d",&cevap);
        if(cevap == 1 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Tristy\n++++++++++\n\n");
        }
        break;
      case 4:
        printf("Swain'in iblisinin adi nedir?\n");
       printf("1)Xear\n2)Raum\n3)Qsare\n4)Aslesh\n");
        scanf("%d",&cevap);
        if(cevap == 2 ){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Raum\n++++++++++\n\n");
        }
        break;
      case 5:
        printf("Nilah'in iblisinin adi nedir?\n");
       printf("1)Ashlesh\n2)Serv\n3)Crats\n4)Trosy\n");
        scanf("%d",&cevap);
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Ashlesh\n++++++++++\n\n");
        }
        break;
        case 6:
        	printf("Qiyananin silahinin adi nedir?\n");
       printf("1)Halka bicak\n2)Ohmlatl\n3)Elementer\n4)Yunhal\n");
        scanf("%d",&cevap);
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Ohmlath\n++++++++++\n\n");
        }
        break;
        case 7:
        	printf("Trundle'a sopasini kim vermistir?\n");
       printf("1)Lissandra\n2)Sejuani\n3)Ornn\n4)Olaf\n");
        scanf("%d",&cevap);
        if(cevap == 1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Lissandra\n++++++++++\n\n");
        }
        break;
        case 8:
        	printf("Trundle'in sopasinin ismi nedir?\n");
       printf("1)TarumarEdici\n2)Troltor\n3)Kemik kiran\n4)Kemik donduran\n");
        scanf("%d",&cevap);
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Kemik Donduran\n++++++++++\n\n");
        }
        break;
        case 9:
        	printf("Sion kacinci jarvani oldurmustur?\n");
       printf("1)JarvanI\n2)JarvanII\n3)JarvanIII\n4)JarvanIV\n");
        scanf("%d",&cevap);
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Jarvan I\n++++++++++\n\n");
        }
        break;
        case 10:
        	printf("Pantheon'un gercek ismi nedir?\n");
       printf("1)Kegan Rodhe\n2)Milas\n3)Atreus\n4)Thorkel\n");
        scanf("%d",&cevap);
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
        case 11:
        	printf("Aphelios'un kardesinin ismi nedir?\n");
       printf("1)Alune\n2)Diana\n3)Leona\n4)Zoe\n");
        scanf("%d",&cevap);
        if(cevap==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Alune\n++++++++++\n\n");
        }
        break;
        case 12:
        	printf("Jarvan4'u olumden kim kurtarmistir?\n");
       printf("1)Garen\n2)Xin zhao\n3)Fiora\n4)Shyvana\n");
        scanf("%d",&cevap);
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Shyvana\n++++++++++\n\n");
        }
        break;
        case 13:
        	printf("Galio'yu kim yapmistir?\n");
       printf("1)Duran\n2)Mahel\n3)Darkwill\n4)Ryze\n");
        scanf("%d",&cevap);
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
            printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Duran\n++++++++++\n\n");
        }
        break;
         case 14:
        	printf("Nilah nerelidir?\n");
       printf("1)Bilgewater\n2)Golge adalar\n3)Shurima\n4)Demacia\n");
        scanf("%d",&cevap);
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Bilgewater\n++++++++++\n\n");
        }
        break;
         case 15:
        	printf("Sona nerelidir?\n");
       printf("1)Ionia\n2)Ixtal\n3)Freljord\n4)Demacia\n");
        scanf("%d",&cevap);
        if(cevap ==4){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
           	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Demacia\n++++++++++\n\n");
        }
        break;
         case 16:
        	printf("Udyr nerelidir?\n");
       printf("1)Targon\n2)Freljord\n3)Ionia\n4)Shurima\n");
        scanf("%d",&cevap);
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Freljord\n++++++++++\n\n");
        }
        break;
         case 17:
        	printf("Zac nerelidir?\n");
       printf("1)Piltover\n2)Zaun\n3)Bigewater\n4)Noxus\n");
        scanf("%d",&cevap);
        if(cevap ==2){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Zaun\n++++++++++\n\n");
        }
        break;
         case 18:
        	printf("Ezreal nerelidir?\n");
       printf("1)Piltover\n2)Shurima\n3)Demacia\n4)Noxus\n");
        scanf("%d",&cevap);
        if(cevap ==1){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Piltover\n++++++++++\n\n");
        }
        break;
         case 19:
        	printf("Lucian nerelidir?\n");
       printf("1)Bilgewater\n2)Golge adalar\n3)Demacia\n4)Ionia\n");
        scanf("%d",&cevap);
        if(cevap ==3){
        	printf("++++++++++\nDogru cevap\n++++++++++\n\n");
            puan+=10;
        }
        else {
          	printf("----------\nYanlis cevap\n----------\n");
            printf("++++++++++\nDogru cevap: Demacia\n++++++++++\n\n");
        }
        break;
         case 20:
        	printf("Darkin savasini bitiren zoe'nin asl adi nedir\n");
       printf("1)Lauren\n2)Seryl\n3)Elenor\n4)Maisha\n");
        scanf("%d",&cevap);
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
  printf("puanin:%d\n",puan);
    //buraya kadar
        break;    
}
}
//2.secimmmmmmmm
else if(secim==2){
	char cevapm[20];
 char b[20] ="katarina";
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
printf("puanin:%d",puan);
}
else if(secim==3){
	printf("Cikis yapmak icin herhangi bir tusa basin.");
}
else{
	printf("Lutfen gecerli bir secim yapin");
}

return 0;
}

