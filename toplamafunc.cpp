#include <stdio.h>
int topla(int,int);
int main(){
	
int toplam,a,b;
printf("Iki sayi giriniz.");
scanf("%d %d",&a,&b);	
toplam=topla(a,b);   //Fonksiyonun çaðýrýlmasý
printf("Toplam=%d",toplam);	
}
int topla(int x, int y){
	
int sonuc=x+y;
return sonuc;
	
}
