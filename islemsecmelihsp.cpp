#include <stdio.h>
#include <iostream>


int main (){
	
int s1,s2,is;
long s;
printf("Hesap makinesi! 1.sayiyi giriniz.");
scanf("%d",&s1);
printf("2.sayiyi giriniz.");
scanf("%d",&s2);
printf("Islemi seciniz.Toplamak icin 1'e. Cikarmak icin 2'ye. Carpmak icin 3'e. Bolmek icin 4'e basiniz.' ");
scanf("%d",&is);
if (is==1){
	
s=s1+s2;
printf("SONUC=%d",s);
}
else if(is==2){


s=s1-s2;
printf("SONUC=%d",s);
}
else if(is==3){

s=s1*s2;
printf("SONUC=%d",s);
}
else if(is==4){

s=s1/s2;	
printf("SONUC=%d",s);
}
else{

printf("\nHATA");	
}
	
	
	
	
	
	
	
	
	
}
