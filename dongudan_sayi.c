#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,en_buyuk,sayi;

	for(i=1;i<=10;i++)
	{
	printf("%d.sayiyi girin",i);
	scanf("%d",&sayi);
	if(sayi>=en_buyuk)
	{
	en_buyuk=sayi;
	
	}
	
	
  }
  printf("girdiginiz sayinin en buyugu%d ",en_buyuk);
}
/*#include <conio.h>

int main()
{
    int sayac, sayi, enBuyuk;
    sayac=0;
    enBuyuk=0;

    //printf("Lutfen bir sayi giriniz(10 sayi oluncaya kadar devam edecektir): ");
    //scanf("%d", &sayi);

    while(sayac<=10){

        sayac+=1;
        printf("Lutfen bir sayi giriniz(10 sayi oluncaya kadar devam edecektir): ");
        scanf("%d", &sayi);
    if(sayi>=enBuyuk) enBuyuk=sayi;

    }

    printf("Girdiginiz 10 sayidan en buyugu %d!", enBuyuk);

    getch();
    return 0;
}*/
